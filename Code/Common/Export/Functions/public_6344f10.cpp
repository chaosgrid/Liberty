#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);

PROC_DECLARE(0x6344f10, internal_6344f10, public_6344f10);
extern "C" NAKED register_t __cdecl internal_6344f10()
{
    __asm
    {
        sub esp, 0x40
        push esi
        lea eax, ss:[esp+4]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x48]
        push eax
        call public_6350bc0
        mov eax, dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax+4]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+4]
        fstp dword ptr ss : [esp+0x3C]
        push eax
        call dword ptr ds : [edx+8]
        pop esi
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6344f10)
    }
}
