#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409800);

PROC_DECLARE(0x409800, internal_409800, public_409800);
extern "C" NAKED register_t __cdecl internal_409800()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+4], eax
        xor eax, eax
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        push 0x45E
        push eax
        mov dword ptr ss : [esp+0x18], 0x4B0
        call dword ptr ds : [public_41bbe8]
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x409800)
    }
}
