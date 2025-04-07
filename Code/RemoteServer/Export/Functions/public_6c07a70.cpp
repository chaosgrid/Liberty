#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c07a70, internal_6c07a70, public_6c07a70);
extern "C" NAKED register_t __cdecl internal_6c07a70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e618]
        mov dword ptr ds : [public_6c142cc], eax
        ret 
        UNREACHABLE_TRAP(0x6c07a70)
    }
}
