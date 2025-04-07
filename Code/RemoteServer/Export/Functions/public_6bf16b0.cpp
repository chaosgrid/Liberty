#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf16b0, internal_6bf16b0, public_6bf16b0);
extern "C" NAKED register_t __cdecl internal_6bf16b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfa8]
        mov dword ptr ds : [public_6c13ca4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf16b0)
    }
}
