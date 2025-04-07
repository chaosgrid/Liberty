#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61460, internal_6b61460, public_6b61460);
extern "C" NAKED register_t __cdecl internal_6b61460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e83c]
        mov dword ptr ds : [public_6b743e4], eax
        ret 
        UNREACHABLE_TRAP(0x6b61460)
    }
}
