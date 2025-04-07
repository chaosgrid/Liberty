#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b322f0, internal_6b322f0, public_6b322f0);
extern "C" NAKED register_t __cdecl internal_6b322f0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6b737c8], ax
        mov byte ptr ds : [public_6b737ca], al
        ret 
        UNREACHABLE_TRAP(0x6b322f0)
    }
}
