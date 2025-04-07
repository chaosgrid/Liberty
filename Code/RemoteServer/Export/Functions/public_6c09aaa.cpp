#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d70);

PROC_DECLARE(0x6c09aaa, internal_6c09aaa, public_6c09aaa);
extern "C" NAKED register_t __cdecl internal_6c09aaa()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6c09d70
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c09aaa)
    }
}
