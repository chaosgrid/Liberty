#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2420, internal_6bf2420, public_6bf2420);
extern "C" NAKED register_t __cdecl internal_6bf2420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfe4]
        mov dword ptr ds : [public_6c13cec], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2420)
    }
}
