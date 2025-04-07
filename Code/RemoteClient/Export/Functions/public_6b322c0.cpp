#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b322c0, internal_6b322c0, public_6b322c0);
extern "C" NAKED register_t __cdecl internal_6b322c0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6b73894], ax
        mov byte ptr ds : [public_6b73896], al
        ret 
        UNREACHABLE_TRAP(0x6b322c0)
    }
}
