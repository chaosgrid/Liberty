#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f83ad0);

PROC_DECLARE(0x6f83ad0, internal_6f83ad0, public_6f83ad0);
extern "C" NAKED register_t __cdecl internal_6f83ad0()
{
    __asm
    {
        mov eax, ecx
        xor edx, edx
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], edx
        ret 
        UNREACHABLE_TRAP(0x6f83ad0)
    }
}
