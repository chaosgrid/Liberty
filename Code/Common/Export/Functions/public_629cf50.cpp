#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629c5e0);
CLANG_FORWARD_PROC_SYMBOL(public_629cf50);

PROC_DECLARE(0x629cf50, internal_629cf50, public_629cf50);
extern "C" NAKED register_t __cdecl internal_629cf50()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_629c5e0
        UNREACHABLE_TRAP(0x629cf50)
    }
}
