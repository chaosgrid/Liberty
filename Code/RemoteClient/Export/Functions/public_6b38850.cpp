#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38850, internal_6b38850, public_6b38850);
extern "C" NAKED register_t __cdecl internal_6b38850()
{
    __asm
    {
        mov word ptr ds : [public_6b73d4c], 4
        mov byte ptr ds : [public_6b73d4e], 1
        ret 
        UNREACHABLE_TRAP(0x6b38850)
    }
}
