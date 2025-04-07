#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225470);
CLANG_FORWARD_PROC_SYMBOL(public_6226e80);

PROC_DECLARE(0x6226e80, internal_6226e80, public_6226e80);
extern "C" NAKED register_t __cdecl internal_6226e80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6225470
        UNREACHABLE_TRAP(0x6226e80)
    }
}
