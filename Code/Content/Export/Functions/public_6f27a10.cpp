#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f27a10);

PROC_DECLARE(0x6f27a10, internal_6f27a10, public_6f27a10);
extern "C" NAKED register_t __cdecl internal_6f27a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x118], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x11C], eax
        mov dword ptr ds : [ecx+0x120], edx
        ret 0xC
        UNREACHABLE_TRAP(0x6f27a10)
    }
}
