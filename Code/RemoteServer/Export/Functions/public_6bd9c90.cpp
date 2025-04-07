#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c0992a);

PROC_DECLARE(0x6bd9c90, internal_6bd9c90, public_6bd9c90);
extern "C" NAKED register_t __cdecl internal_6bd9c90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6c0b018]
        mov ecx, dword ptr ds : [esi+0xC]
        push 0x64
        call public_6c0992a
        call dword ptr ds : [public_6c0b090]
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd9c90)
    }
}
