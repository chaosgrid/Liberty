#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);

PROC_DECLARE(0x62d74e0, internal_62d74e0, public_62d74e0);
extern "C" NAKED register_t __cdecl internal_62d74e0()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ds : [ecx+8]
        lea eax, ss:[esp]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        call public_62e8c20
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d74e0)
    }
}
