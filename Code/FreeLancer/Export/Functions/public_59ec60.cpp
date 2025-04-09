#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ec60);

PROC_DECLARE(0x59ec60, internal_59ec60, public_59ec60);
extern "C" NAKED register_t __cdecl internal_59ec60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        ret 
        UNREACHABLE_TRAP(0x59ec60)
    }
}
