#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16530);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

PROC_DECLARE(0x6d16530, internal_6d16530, public_6d16530);
extern "C" NAKED register_t __cdecl internal_6d16530()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d16530)
    }
}
