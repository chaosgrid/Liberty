#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_439200);

PROC_DECLARE(0x439200, internal_439200, public_439200);
extern "C" NAKED register_t __cdecl internal_439200()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0x34], eax
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [ecx+0x3C], eax
        mov dword ptr ds : [ecx+0x40], eax
        mov dword ptr ds : [ecx+0x44], eax
        mov byte ptr ds : [ecx+0x48], al
        mov dword ptr ds : [ecx+0x4C], eax
        mov dword ptr ds : [ecx+0x50], eax
        mov byte ptr ds : [ecx+0x59], al
        ret 
        UNREACHABLE_TRAP(0x439200)
    }
}
