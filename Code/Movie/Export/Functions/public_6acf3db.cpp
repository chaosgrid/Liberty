#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0965);

PROC_DECLARE(0x6acf3db, internal_6acf3db, public_6acf3db);
extern "C" NAKED register_t __cdecl internal_6acf3db()
{
    __asm
    {
        push 1
        push dword ptr ss : [esp+8]
        call public_6ad0965
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6acf3db)
    }
}
