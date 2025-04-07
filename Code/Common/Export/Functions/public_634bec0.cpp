#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bec0);

PROC_DECLARE(0x634bec0, internal_634bec0, public_634bec0);
extern "C" NAKED register_t __cdecl internal_634bec0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_63a554c
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], ecx
        ret 8
        UNREACHABLE_TRAP(0x634bec0)
    }
}
