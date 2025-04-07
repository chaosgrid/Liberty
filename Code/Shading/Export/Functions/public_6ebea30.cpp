#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

PROC_DECLARE(0x6ebea30, internal_6ebea30, public_6ebea30);
extern "C" NAKED register_t __cdecl internal_6ebea30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed57c4]
        push eax
        call public_6ed0c50
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6ed57c4], eax
        mov dword ptr ds : [public_6ed57c8], eax
        mov dword ptr ds : [public_6ed57cc], eax
        ret 
        UNREACHABLE_TRAP(0x6ebea30)
    }
}
