#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f554c0);

PROC_DECLARE(0x6f554c0, internal_6f554c0, public_6f554c0);
extern "C" NAKED register_t __cdecl internal_6f554c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0x28]
        sub eax, dword ptr ds : [ecx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6f554c0)
    }
}
