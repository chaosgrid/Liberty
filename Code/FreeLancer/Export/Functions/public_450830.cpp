#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450580);
CLANG_FORWARD_PROC_SYMBOL(public_450830);

PROC_DECLARE(0x450830, internal_450830, public_450830);
extern "C" NAKED register_t __cdecl internal_450830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        mov ecx, offset public_668b00
        call public_450580
        mov dword ptr ds : [esi+0x6C], eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x450830)
    }
}
