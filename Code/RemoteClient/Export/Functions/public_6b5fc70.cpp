#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5fc70, internal_6b5fc70, public_6b5fc70);
extern "C" NAKED register_t __cdecl internal_6b5fc70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e790]
        mov dword ptr ds : [public_6b74354], eax
        ret 
        UNREACHABLE_TRAP(0x6b5fc70)
    }
}
