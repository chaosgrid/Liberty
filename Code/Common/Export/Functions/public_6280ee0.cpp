#include "Common-PCH.h"

PROC_DECLARE(0x6280ee0, internal_6280ee0, public_6280ee0);
extern "C" NAKED register_t __cdecl internal_6280ee0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x6280ee0)
    }
}
