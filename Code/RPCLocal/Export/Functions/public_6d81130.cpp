#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81130, internal_6d81130, public_6d81130);
extern "C" NAKED register_t __cdecl internal_6d81130()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6db35c8
        mov dword ptr ds : [eax+4], offset public_6db35c4
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6db3450
        mov dword ptr ds : [eax+4], offset public_6db3448
        ret 4
        UNREACHABLE_TRAP(0x6d81130)
    }
}
