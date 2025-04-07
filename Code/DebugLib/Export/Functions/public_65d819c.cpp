#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d819c);

PROC_DECLARE(0x65d819c, internal_65d819c, public_65d819c);
extern "C" NAKED register_t __cdecl internal_65d819c()
{
    __asm
    {
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr fs : [0]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], esp
        mov dword ptr ss : [esp+0xC], ebp
        lea ebp, ss:[esp+0xC]
        push eax
        ret 
        UNREACHABLE_TRAP(0x65d819c)
    }
}
