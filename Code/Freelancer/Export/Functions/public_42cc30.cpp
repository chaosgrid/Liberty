#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc30);

PROC_DECLARE(0x42cc30, internal_42cc30, public_42cc30);
extern "C" NAKED register_t __cdecl internal_42cc30()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov byte ptr ds : [ecx+0x10], al
        ret 
        UNREACHABLE_TRAP(0x42cc30)
    }
}
