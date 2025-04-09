#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ed00);

PROC_DECLARE(0x51ed00, internal_51ed00, public_51ed00);
extern "C" NAKED register_t __cdecl internal_51ed00()
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
        UNREACHABLE_TRAP(0x51ed00)
    }
}
