#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481c0);

PROC_DECLARE(0x6f481c0, internal_6f481c0, public_6f481c0);
extern "C" NAKED register_t __cdecl internal_6f481c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3530]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f481c0)
    }
}
