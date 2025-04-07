#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5230, internal_6bf5230, public_6bf5230);
extern "C" NAKED register_t __cdecl internal_6bf5230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0b8]
        mov dword ptr ds : [public_6c13d88], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5230)
    }
}
