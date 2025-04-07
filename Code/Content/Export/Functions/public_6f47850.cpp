#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47850);

PROC_DECLARE(0x6f47850, internal_6f47850, public_6f47850);
extern "C" NAKED register_t __cdecl internal_6f47850()
{
    __asm
    {
        xor eax, eax
        mov byte ptr ds : [ecx+0x11C], al
        fld dword ptr ds : [public_6fb7d70]
        fstp qword ptr ds : [ecx+0x178]
        mov dword ptr ds : [ecx+0x18C], eax
        ret 
        UNREACHABLE_TRAP(0x6f47850)
    }
}
