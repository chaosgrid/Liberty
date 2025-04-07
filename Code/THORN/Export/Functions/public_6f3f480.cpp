#include "THORN-PCH.h"

PROC_DECLARE(0x6f3f480, internal_6f3f480, public_6f3f480);
extern "C" NAKED register_t __cdecl internal_6f3f480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f3f480)
    }
}
