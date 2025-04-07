#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24280);

PROC_DECLARE(0x6f24280, internal_6f24280, public_6f24280);
extern "C" NAKED register_t __cdecl internal_6f24280()
{
    __asm
    {
        sub esp, 0x208
        call dword ptr ds : [public_6fb34f0]
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ss : [esp+0x20C]
        push 0
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x110]
        push 0
        push edx
        call dword ptr ds : [public_6fb334c]
        mov ecx, dword ptr ss : [esp+0x224]
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x108]
        push eax
        call dword ptr ds : [public_6fb317c]
        add esp, 0x208
        ret 
        UNREACHABLE_TRAP(0x6f24280)
    }
}
