#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f79500);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f79510 _public_6f79510
#define public_6f7951e _public_6f7951e

PROC_DECLARE(0x6f79500, internal_6f79500, public_6f79500);
extern "C" NAKED register_t __cdecl internal_6f79500()
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
        je public_6f7951e
        nop 
        public_6f79510 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x18
        cmp esi, ebx
        jne public_6f79510
        public_6f7951e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f79500)
    }
}

#undef public_6f79510
#undef public_6f7951e
