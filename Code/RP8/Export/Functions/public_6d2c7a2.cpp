#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c7a2);

PROC_DECLARE(0x6d2c7a2, internal_6d2c7a2, public_6d2c7a2);
extern "C" NAKED register_t __cdecl internal_6d2c7a2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ds : [public_6d72908]
        sub eax, 1
        mov dword ptr ds : [public_6d72908], eax
        mov ecx, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ds : [public_6d72908]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+edx*4], ecx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c7a2)
    }
}
