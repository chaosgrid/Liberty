#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6fc90);

PROC_DECLARE(0x6f6fc90, internal_6f6fc90, public_6f6fc90);
extern "C" NAKED register_t __cdecl internal_6f6fc90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        add eax, 4
        push 0
        push eax
        call dword ptr ds : [public_6fb3588]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f6fc90)
    }
}
