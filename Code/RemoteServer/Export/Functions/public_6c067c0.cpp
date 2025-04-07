#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c067c0, internal_6c067c0, public_6c067c0);
extern "C" NAKED register_t __cdecl internal_6c067c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5bc]
        mov dword ptr ds : [public_6c14244], eax
        ret 
        UNREACHABLE_TRAP(0x6c067c0)
    }
}
