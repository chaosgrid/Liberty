#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52770);
CLANG_FORWARD_PROC_SYMBOL(public_6f52860);
CLANG_FORWARD_PROC_SYMBOL(public_6f52890);

PROC_DECLARE(0x6f52860, internal_6f52860, public_6f52860);
extern "C" NAKED register_t __cdecl internal_6f52860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push esi
        call public_6f52890
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        push edx
        call public_6f52770
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52860)
    }
}
