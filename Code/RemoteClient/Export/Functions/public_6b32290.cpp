#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32290, internal_6b32290, public_6b32290);
extern "C" NAKED register_t __cdecl internal_6b32290()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6b6b3b0
        ret 
        UNREACHABLE_TRAP(0x6b32290)
    }
}
