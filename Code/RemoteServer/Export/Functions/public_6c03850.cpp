#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03850, internal_6c03850, public_6c03850);
extern "C" NAKED register_t __cdecl internal_6c03850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4e0]
        mov dword ptr ds : [public_6c141b8], eax
        ret 
        UNREACHABLE_TRAP(0x6c03850)
    }
}
