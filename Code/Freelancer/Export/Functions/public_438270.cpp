#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438270);

PROC_DECLARE(0x438270, internal_438270, public_438270);
extern "C" NAKED register_t __cdecl internal_438270()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push edx
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xB8]
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x438270)
    }
}
