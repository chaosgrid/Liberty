#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d477b0);

#define public_6d4787d _public_6d4787d

PROC_DECLARE(0x6d477b0, internal_6d477b0, public_6d477b0);
extern "C" NAKED register_t __cdecl internal_6d477b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov esi, offset public_6d614f0
        lea edi, ss:[ebp-0x18]
        movsd 
        movsd 
        movsd 
        movsb 
        mov esi, offset public_6d614e0
        lea edi, ss:[ebp-0x28]
        movsd 
        movsd 
        movsd 
        movsb 
        xor eax, eax
        xor ebx, ebx
        xor ecx, ecx
        xor edx, edx
        cpuid 
        mov dword ptr ss : [ebp-4], 1
        xor eax, eax
        cpuid 
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x10], ecx
        test eax, eax
        je public_6d4787d
        or dword ptr ss : [ebp-4], 2
        mov eax, 1
        cpuid 
        mov dword ptr ss : [ebp-8], eax
        mov ecx, 0x800000
        and ecx, edx
        neg ecx
        sbb ecx, ecx
        and ecx, 0x20
        or dword ptr ss : [ebp-4], ecx
        mov eax, 0x80000000
        cpuid 
        cmp eax, 0x80000000
        jbe public_6d4787d
        or dword ptr ss : [ebp-4], 4
        mov eax, 0x80000001
        cpuid 
        mov ecx, 0x80000000
        and ecx, edx
        neg ecx
        sbb ecx, ecx
        and ecx, 0x80
        or dword ptr ss : [ebp-4], ecx
        lea esi, ss:[ebp-0x28]
        lea edi, ss:[ebp-0x18]
        mov ecx, 0xC
        cld 
        repe cmpsb
        jne public_6d4787d
        mov ecx, 0x40000000
        and ecx, edx
        neg ecx
        sbb ecx, ecx
        and ecx, 0x100
        or dword ptr ss : [ebp-4], ecx
        mov ecx, 0x400000
        and ecx, edx
        neg ecx
        sbb ecx, ecx
        and ecx, 0x200
        or dword ptr ss : [ebp-4], ecx
        jmp public_6d4787d
        public_6d4787d : nop
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d477b0)
    }
}

#undef public_6d4787d
