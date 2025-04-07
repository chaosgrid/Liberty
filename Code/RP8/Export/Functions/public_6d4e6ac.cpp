#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e6ac);

PROC_DECLARE(0x6d4e6ac, internal_6d4e6ac, public_6d4e6ac);
extern "C" NAKED register_t __cdecl internal_6d4e6ac()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1A4]
        mov byte ptr ds : [eax+0x1C], 1
        ret 
        UNREACHABLE_TRAP(0x6d4e6ac)
    }
}
