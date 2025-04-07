#include "Server-PCH.h"

PROC_DECLARE(0x6cf4230, internal_6cf4230, public_6cf4230);
extern "C" NAKED register_t __cdecl internal_6cf4230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0xC], 1
        ret 8
        UNREACHABLE_TRAP(0x6cf4230)
    }
}
