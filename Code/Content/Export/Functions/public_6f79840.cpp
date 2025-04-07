#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f79840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f79850 _public_6f79850
#define public_6f7985e _public_6f7985e

PROC_DECLARE(0x6f79840, internal_6f79840, public_6f79840);
extern "C" NAKED register_t __cdecl internal_6f79840()
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
        je public_6f7985e
        nop 
        public_6f79850 : nop
        mov ecx, esi
        call public_6eb7d10
        add esi, 0x38
        cmp esi, ebx
        jne public_6f79850
        public_6f7985e : nop
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
        UNREACHABLE_TRAP(0x6f79840)
    }
}

#undef public_6f79850
#undef public_6f7985e
