#include "Common-PCH.h"

PROC_DECLARE(0x62bf2b0, internal_62bf2b0, public_62bf2b0);
extern "C" NAKED register_t __cdecl internal_62bf2b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x64]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62bf2b0)
    }
}
