#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad22ba);

PROC_DECLARE(0x6ad22ba, internal_6ad22ba, public_6ad22ba);
extern "C" NAKED register_t __cdecl internal_6ad22ba()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 4
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax-4]
        ret 
        UNREACHABLE_TRAP(0x6ad22ba)
    }
}
