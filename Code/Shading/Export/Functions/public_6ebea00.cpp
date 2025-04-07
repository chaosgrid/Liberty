#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea00);

PROC_DECLARE(0x6ebea00, internal_6ebea00, public_6ebea00);
extern "C" NAKED register_t __cdecl internal_6ebea00()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6ed57c0], al
        xor eax, eax
        mov dword ptr ds : [public_6ed57c4], eax
        mov dword ptr ds : [public_6ed57c8], eax
        mov dword ptr ds : [public_6ed57cc], eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ebea00)
    }
}
