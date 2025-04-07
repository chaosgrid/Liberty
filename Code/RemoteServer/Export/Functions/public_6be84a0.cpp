#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be84a0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

PROC_DECLARE(0x6be84a0, internal_6be84a0, public_6be84a0);
extern "C" NAKED register_t __cdecl internal_6be84a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_6c09aaa
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be84a0)
    }
}
