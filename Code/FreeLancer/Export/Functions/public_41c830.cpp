#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c830);

PROC_DECLARE(0x41c830, internal_41c830, public_41c830);
extern "C" NAKED register_t __cdecl internal_41c830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d4c]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x41c830)
    }
}
