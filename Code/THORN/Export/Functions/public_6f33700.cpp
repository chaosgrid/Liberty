#include "THORN-PCH.h"

PROC_DECLARE(0x6f33700, internal_6f33700, public_6f33700);
extern "C" NAKED register_t __cdecl internal_6f33700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x3C]
        inc ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f33700)
    }
}
