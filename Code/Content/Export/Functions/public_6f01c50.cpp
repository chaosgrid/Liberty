#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01c50);

PROC_DECLARE(0x6f01c50, internal_6f01c50, public_6f01c50);
extern "C" NAKED register_t __cdecl internal_6f01c50()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [ecx], al
        xor eax, eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f01c50)
    }
}
