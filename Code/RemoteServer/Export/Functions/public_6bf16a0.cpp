#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf16a0, internal_6bf16a0, public_6bf16a0);
extern "C" NAKED register_t __cdecl internal_6bf16a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dfa4]
        mov dword ptr ds : [public_6c13cac], eax
        ret 
        UNREACHABLE_TRAP(0x6bf16a0)
    }
}
