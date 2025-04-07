#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);

#define public_4c5035 _public_4c5035

PROC_DECLARE(0x4c4ff0, internal_4c4ff0, public_4c4ff0);
extern "C" NAKED register_t __cdecl internal_4c4ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_672950]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_4c5035
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jl public_4c5035
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_4c5035
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_4c5035
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, edi
        imul eax, 0x1C
        pop edi
        add eax, ecx
        pop esi
        ret 
        public_4c5035 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c4ff0)
    }
}

#undef public_4c5035
