#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6212220);

PROC_DECLARE(0x6212220, internal_6212220, public_6212220);
extern "C" NAKED register_t __cdecl internal_6212220()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_620fb70
        UNREACHABLE_TRAP(0x6212220)
    }
}
