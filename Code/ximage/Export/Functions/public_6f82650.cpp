#include "ximage-PCH.h"

PROC_DECLARE(0x6f82650, internal_6f82650, public_6f82650);
extern "C" NAKED register_t __cdecl internal_6f82650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f82650)
    }
}
