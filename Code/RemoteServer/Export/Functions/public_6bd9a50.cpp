#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be12a0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1600);

PROC_DECLARE(0x6bd9a50, internal_6bd9a50, public_6bd9a50);
extern "C" NAKED register_t __cdecl internal_6bd9a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6be12a0
        mov ecx, eax
        call public_6be1600
        ret 4
        UNREACHABLE_TRAP(0x6bd9a50)
    }
}
