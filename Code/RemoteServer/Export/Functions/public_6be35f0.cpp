#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be35f0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

PROC_DECLARE(0x6be35f0, internal_6be35f0, public_6be35f0);
extern "C" NAKED register_t __cdecl internal_6be35f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        mov dword ptr ds : [esi], offset public_6c0bd88
        call public_6c09aaa
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be35f0)
    }
}
