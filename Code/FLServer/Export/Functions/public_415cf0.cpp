#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415cf0);

PROC_DECLARE(0x415cf0, internal_415cf0, public_415cf0);
extern "C" NAKED register_t __cdecl internal_415cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x60], eax
        ret 4
        UNREACHABLE_TRAP(0x415cf0)
    }
}
