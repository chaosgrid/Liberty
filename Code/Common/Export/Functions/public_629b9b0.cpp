#include "Common-PCH.h"

PROC_DECLARE(0x629b9b0, internal_629b9b0, public_629b9b0);
extern "C" NAKED register_t __cdecl internal_629b9b0()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        mov dword ptr ds : [eax+8], 0
        ret 8
        UNREACHABLE_TRAP(0x629b9b0)
    }
}
