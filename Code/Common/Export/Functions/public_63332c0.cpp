#include "Common-PCH.h"

PROC_DECLARE(0x63332c0, internal_63332c0, public_63332c0);
extern "C" NAKED register_t __cdecl internal_63332c0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax], offset public_63a4980
        ret 4
        UNREACHABLE_TRAP(0x63332c0)
    }
}
