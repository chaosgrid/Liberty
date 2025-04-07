#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53a820);
CLANG_FORWARD_PROC_SYMBOL(public_547500);

#define public_547514 _public_547514
#define public_547516 _public_547516

PROC_DECLARE(0x547500, internal_547500, public_547500);
extern "C" NAKED register_t __cdecl internal_547500()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_547514
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        je public_547516
        public_547514 : nop
        xor ecx, ecx
        public_547516 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x98]
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_53a820
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547500)
    }
}

#undef public_547514
#undef public_547516
