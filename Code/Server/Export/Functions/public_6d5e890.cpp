#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d447b0);

PROC_DECLARE(0x6d5e890, internal_6d5e890, public_6d5e890);
extern "C" NAKED register_t __cdecl internal_6d5e890()
{
    __asm
    {
        call public_6d447b0
        fld st(0)
        mov eax, dword ptr ss : [esp+4]
        fstp qword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6d649f4]
        fmul qword ptr ds : [ecx]
        fstp qword ptr ds : [eax]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d5e890)
    }
}
