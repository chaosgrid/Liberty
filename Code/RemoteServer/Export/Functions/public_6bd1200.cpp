#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1200, internal_6bd1200, public_6bd1200);
extern "C" NAKED register_t __cdecl internal_6bd1200()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        ret 4
        UNREACHABLE_TRAP(0x6bd1200)
    }
}
