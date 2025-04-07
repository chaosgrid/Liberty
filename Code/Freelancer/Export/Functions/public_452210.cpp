#include "Freelancer-PCH.h"

PROC_DECLARE(0x452210, internal_452210, public_452210);
extern "C" NAKED register_t __cdecl internal_452210()
{
    __asm
    {
        fild dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x6C]
        mov edx, dword ptr ds : [ecx]
        fmul qword ptr ds : [public_5c75f8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x452210)
    }
}
