#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_629e800);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_629e810 _public_629e810
#define public_629e81e _public_629e81e

PROC_DECLARE(0x629e800, internal_629e800, public_629e800);
extern "C" NAKED register_t __cdecl internal_629e800()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_629e81e
        nop 
        public_629e810 : nop
        mov ecx, esi
        call public_629dbd0
        add esi, 0x24
        cmp esi, ebx
        jne public_629e810
        public_629e81e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x629e800)
    }
}

#undef public_629e810
#undef public_629e81e
