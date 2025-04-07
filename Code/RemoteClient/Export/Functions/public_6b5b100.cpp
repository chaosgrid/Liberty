#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b100, internal_6b5b100, public_6b5b100);
extern "C" NAKED register_t __cdecl internal_6b5b100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5f4]
        mov dword ptr ds : [public_6b741e4], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b100)
    }
}
