#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411f70);

PROC_DECLARE(0x411f70, internal_411f70, public_411f70);
extern "C" NAKED register_t __cdecl internal_411f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x20], eax
        ret 4
        UNREACHABLE_TRAP(0x411f70)
    }
}
