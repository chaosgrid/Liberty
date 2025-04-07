#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);

PROC_DECLARE(0x6eb70f0, internal_6eb70f0, public_6eb70f0);
extern "C" NAKED register_t __cdecl internal_6eb70f0()
{
    __asm
    {
        sub esp, 0x30
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6eb70f0)
    }
}
