#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212320);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x6212320, internal_6212320, public_6212320);
extern "C" NAKED register_t __cdecl internal_6212320()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 0xC
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x6212320)
    }
}
