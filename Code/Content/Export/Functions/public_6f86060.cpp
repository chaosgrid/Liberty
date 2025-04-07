#include "Content-PCH.h"

PROC_DECLARE(0x6f86060, internal_6f86060, public_6f86060);
extern "C" NAKED register_t __cdecl internal_6f86060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x50
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6f86060)
    }
}
