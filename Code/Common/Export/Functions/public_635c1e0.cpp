#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);

PROC_DECLARE(0x635c1e0, internal_635c1e0, public_635c1e0);
extern "C" NAKED register_t __cdecl internal_635c1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        push eax
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        call public_634ebd0
        ret 8
        UNREACHABLE_TRAP(0x635c1e0)
    }
}
