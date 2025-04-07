#include "Common-PCH.h"

PROC_DECLARE(0x634ac70, internal_634ac70, public_634ac70);
extern "C" NAKED register_t __cdecl internal_634ac70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x634ac70)
    }
}
