#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6d17bf0, internal_6d17bf0, public_6d17bf0);
extern "C" NAKED register_t __cdecl internal_6d17bf0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], edx
        lea edx, ss:[esp]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push 0x1D
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6d43650
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d17bf0)
    }
}
