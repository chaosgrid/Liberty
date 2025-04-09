#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c43d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4590);

PROC_DECLARE(0x4c4590, internal_4c4590, public_4c4590);
extern "C" NAKED register_t __cdecl internal_4c4590()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_4c43d0
        UNREACHABLE_TRAP(0x4c4590)
    }
}
