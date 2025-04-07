#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_451330);

PROC_DECLARE(0x451330, internal_451330, public_451330);
extern "C" NAKED register_t __cdecl internal_451330()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esi, ds:[ecx+0x170]
        mov dword ptr ds : [ecx+0x70], edi
        mov ecx, esi
        call dword ptr ds : [public_5c61bc]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c61c8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x451330)
    }
}
