#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30520);

PROC_DECLARE(0x6f2fab0, internal_6f2fab0, public_6f2fab0);
extern "C" NAKED register_t __cdecl internal_6f2fab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        add ecx, 0x2C
        jmp public_6f30520
        UNREACHABLE_TRAP(0x6f2fab0)
    }
}
