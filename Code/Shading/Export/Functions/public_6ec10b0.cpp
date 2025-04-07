#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec10b0);

PROC_DECLARE(0x6ec10b0, internal_6ec10b0, public_6ec10b0);
extern "C" NAKED register_t __cdecl internal_6ec10b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], edx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec10b0)
    }
}
