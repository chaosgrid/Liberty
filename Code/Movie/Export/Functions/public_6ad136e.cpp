#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad136e);

PROC_DECLARE(0x6ad136e, internal_6ad136e, public_6ad136e);
extern "C" NAKED register_t __cdecl internal_6ad136e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x50], offset public_6adfc80
        mov dword ptr ds : [eax+0x14], 1
        ret 
        UNREACHABLE_TRAP(0x6ad136e)
    }
}
