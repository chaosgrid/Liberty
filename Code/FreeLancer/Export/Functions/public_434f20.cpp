#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434f20);
CLANG_FORWARD_PROC_SYMBOL(public_434f40);

PROC_DECLARE(0x434f20, internal_434f20, public_434f20);
extern "C" NAKED register_t __cdecl internal_434f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, dword ptr ds : [eax]
        push edx
        call public_434f40
        ret 
        UNREACHABLE_TRAP(0x434f20)
    }
}
