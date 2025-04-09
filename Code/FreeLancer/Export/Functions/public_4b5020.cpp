#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b5020, internal_4b5020, public_4b5020);
extern "C" NAKED register_t __cdecl internal_4b5020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x60
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x4b5020)
    }
}
