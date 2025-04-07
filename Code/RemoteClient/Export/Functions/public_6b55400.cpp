#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55400, internal_6b55400, public_6b55400);
extern "C" NAKED register_t __cdecl internal_6b55400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e47c]
        mov dword ptr ds : [public_6b74080], eax
        ret 
        UNREACHABLE_TRAP(0x6b55400)
    }
}
