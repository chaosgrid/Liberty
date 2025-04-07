#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9970);
CLANG_FORWARD_PROC_SYMBOL(public_5b6c60);

PROC_DECLARE(0x5a9970, internal_5a9970, public_5a9970);
extern "C" NAKED register_t __cdecl internal_5a9970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x90]
        mov dword ptr ss : [esp+4], edx
        add ecx, 0x244
        jmp public_5b6c60
        UNREACHABLE_TRAP(0x5a9970)
    }
}
