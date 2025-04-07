#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b387f0, internal_6b387f0, public_6b387f0);
extern "C" NAKED register_t __cdecl internal_6b387f0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6b73d58], ax
        mov byte ptr ds : [public_6b73d5a], al
        ret 
        UNREACHABLE_TRAP(0x6b387f0)
    }
}
