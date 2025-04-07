#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575570);

#define public_575583 _public_575583

PROC_DECLARE(0x575570, internal_575570, public_575570);
extern "C" NAKED register_t __cdecl internal_575570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        je public_575583
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_575583 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x575570)
    }
}

#undef public_575583
