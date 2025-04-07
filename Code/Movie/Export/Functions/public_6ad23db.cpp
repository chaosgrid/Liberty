#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);

PROC_DECLARE(0x6ad23db, internal_6ad23db, public_6ad23db);
extern "C" NAKED register_t __cdecl internal_6ad23db()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push dword ptr ds : [eax*4+public_6add57c]
        call dword ptr ds : [public_6ada104]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad23db)
    }
}
