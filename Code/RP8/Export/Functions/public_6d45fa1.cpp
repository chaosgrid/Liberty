#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45fa1);

#define public_6d45fc9 _public_6d45fc9

PROC_DECLARE(0x6d45fa1, internal_6d45fa1, public_6d45fa1);
extern "C" NAKED register_t __cdecl internal_6d45fa1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push ebx
        pushfd 
        pop edx
        mov eax, edx
        xor edx, 0x200000
        push edx
        popfd 
        pushfd 
        pop edx
        xor edx, eax
        je public_6d45fc9
        mov eax, 1
        cpuid 
        and edx, 0x800000
        shr edx, 0x17
        public_6d45fc9 : nop
        mov dword ptr ss : [ebp-4], edx
        pop ebx
        mov eax, dword ptr ss : [ebp-4]
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d45fa1)
    }
}

#undef public_6d45fc9
