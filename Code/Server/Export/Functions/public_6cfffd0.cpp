#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfffd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0fb40);

PROC_DECLARE(0x6cfffd0, internal_6cfffd0, public_6cfffd0);
extern "C" NAKED register_t __cdecl internal_6cfffd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov al, byte ptr ss : [esp+8]
        push ecx
        mov byte ptr ds : [public_6d88a80], al
        call public_6d0fb40
        add esp, 4
        jmp public_6cfd4b0
        UNREACHABLE_TRAP(0x6cfffd0)
    }
}
