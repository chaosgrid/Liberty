#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f576c0);

PROC_DECLARE(0x6f576c0, internal_6f576c0, public_6f576c0);
extern "C" NAKED register_t __cdecl internal_6f576c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x154], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x14C], edx
        mov dword ptr ds : [ecx+0x150], eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f576c0)
    }
}
