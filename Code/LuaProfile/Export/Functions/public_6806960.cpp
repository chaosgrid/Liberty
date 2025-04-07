#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806870);
CLANG_FORWARD_PROC_SYMBOL(public_6806960);
CLANG_FORWARD_PROC_SYMBOL(public_6806990);

PROC_DECLARE(0x6806960, internal_6806960, public_6806960);
extern "C" NAKED register_t __cdecl internal_6806960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push esi
        call public_6806990
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        push edx
        call public_6806870
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806960)
    }
}
