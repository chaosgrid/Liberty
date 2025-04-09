#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438220);

PROC_DECLARE(0x438220, internal_438220, public_438220);
extern "C" NAKED register_t __cdecl internal_438220()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push edx
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xB4]
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x438220)
    }
}
