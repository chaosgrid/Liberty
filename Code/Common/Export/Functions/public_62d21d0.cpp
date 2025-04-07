#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62dd3d0);

PROC_DECLARE(0x62d21d0, internal_62d21d0, public_62d21d0);
extern "C" NAKED register_t __cdecl internal_62d21d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+4], edx
        jmp public_62dd3d0
        UNREACHABLE_TRAP(0x62d21d0)
    }
}
