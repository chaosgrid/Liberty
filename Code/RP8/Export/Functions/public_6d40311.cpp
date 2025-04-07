#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40311);

#define public_6d40340 _public_6d40340

PROC_DECLARE(0x6d40311, internal_6d40311, public_6d40311);
extern "C" NAKED register_t __cdecl internal_6d40311()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr ss : [ebp-4], 0
        push ebx
        push esi
        push edi
        pusha 
        mov eax, 0x80000000
        cpuid 
        cmp eax, 0x80000001
        jb public_6d40340
        mov eax, 0x80000001
        cpuid 
        xor eax, eax
        test edx, 0x80000000
        setne al
        mov dword ptr ss : [ebp-4], eax
        public_6d40340 : nop
        popa 
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d40311)
    }
}

#undef public_6d40340
