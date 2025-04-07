#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127b0);

PROC_DECLARE(0x6d127b0, internal_6d127b0, public_6d127b0);
extern "C" NAKED register_t __cdecl internal_6d127b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x178]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+edx*4]
        ret 4
        UNREACHABLE_TRAP(0x6d127b0)
    }
}
