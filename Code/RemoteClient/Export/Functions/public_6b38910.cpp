#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38910, internal_6b38910, public_6b38910);
extern "C" NAKED register_t __cdecl internal_6b38910()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6b6bb50
        ret 
        UNREACHABLE_TRAP(0x6b38910)
    }
}
