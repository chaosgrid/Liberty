#include "Server-PCH.h"

PROC_DECLARE(0x6d276c0, internal_6d276c0, public_6d276c0);
extern "C" NAKED register_t __cdecl internal_6d276c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        ret 8
        UNREACHABLE_TRAP(0x6d276c0)
    }
}
