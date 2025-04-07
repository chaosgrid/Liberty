#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9220);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

PROC_DECLARE(0x6be9220, internal_6be9220, public_6be9220);
extern "C" NAKED register_t __cdecl internal_6be9220()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6c09aaa
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be9220)
    }
}
