#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dde70);
CLANG_FORWARD_PROC_SYMBOL(public_4de750);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4de760 _public_4de760
#define public_4de76e _public_4de76e

PROC_DECLARE(0x4de750, internal_4de750, public_4de750);
extern "C" NAKED register_t __cdecl internal_4de750()
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
        je public_4de76e
        nop 
        public_4de760 : nop
        mov ecx, esi
        call public_4dde70
        add esi, 0x24
        cmp esi, ebx
        jne public_4de760
        public_4de76e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4de750)
    }
}

#undef public_4de760
#undef public_4de76e
