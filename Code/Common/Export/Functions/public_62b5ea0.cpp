#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ada80);

PROC_DECLARE(0x62b5ea0, internal_62b5ea0, public_62b5ea0);
extern "C" NAKED register_t __cdecl internal_62b5ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_62ada80
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62b5ea0)
    }
}
