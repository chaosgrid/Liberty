#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b781f0, internal_6b781f0, public_6b781f0);
extern "C" NAKED register_t __cdecl internal_6b781f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x114]
        inc ecx
        mov dword ptr ds : [eax+0x114], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b781f0)
    }
}
