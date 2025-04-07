#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5f300, internal_6b5f300, public_6b5f300);
extern "C" NAKED register_t __cdecl internal_6b5f300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e770]
        mov dword ptr ds : [public_6b74334], eax
        ret 
        UNREACHABLE_TRAP(0x6b5f300)
    }
}
