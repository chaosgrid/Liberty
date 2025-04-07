#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6be0);

PROC_DECLARE(0x6eb6be0, internal_6eb6be0, public_6eb6be0);
extern "C" NAKED register_t __cdecl internal_6eb6be0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_6fb4640
        ret 4
        UNREACHABLE_TRAP(0x6eb6be0)
    }
}
