#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93c60);

PROC_DECLARE(0x6f93c60, internal_6f93c60, public_6f93c60);
extern "C" NAKED register_t __cdecl internal_6f93c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        ret 
        UNREACHABLE_TRAP(0x6f93c60)
    }
}
