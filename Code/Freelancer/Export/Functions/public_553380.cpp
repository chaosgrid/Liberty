#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553380);

PROC_DECLARE(0x553380, internal_553380, public_553380);
extern "C" NAKED register_t __cdecl internal_553380()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6798d8], eax
        mov dword ptr ds : [public_6798dc], eax
        mov dword ptr ds : [public_6798e0], eax
        mov dword ptr ds : [public_6798e4], eax
        mov dword ptr ds : [public_6798d4], 0xBF800000
        mov byte ptr ds : [public_6798d0], 1
        ret 
        UNREACHABLE_TRAP(0x553380)
    }
}
