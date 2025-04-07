#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7b90);
CLANG_FORWARD_PROC_SYMBOL(public_4de3a0);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4de433 _public_4de433
#define public_4de494 _public_4de494
#define public_4de496 _public_4de496
#define public_4de4a9 _public_4de4a9
#define public_4de4b0 _public_4de4b0
#define public_4de4b8 _public_4de4b8

PROC_DECLARE(0x4de3a0, internal_4de3a0, public_4de3a0);
extern "C" NAKED register_t __cdecl internal_4de3a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        call public_54baf0
        mov ebp, eax
        test ebp, ebp
        je public_4de4b0
        call public_4c7b90
        test al, al
        jne public_4de4b0
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_4de4b0
        mov ebx, dword ptr ds : [eax+4]
        test ebx, ebx
        je public_4de4b0
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4de4b0
        mov ecx, ebx
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_4de4b0
        mov cl, byte ptr ds : [eax+0x168]
        test cl, cl
        je public_4de4b0
        mov ecx, ebx
        call dword ptr ds : [public_5c64a0]
        test al, al
        jne public_4de4b0
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 7
        call public_540fc0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4de4b0
        public_4de433 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_5d848c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_4de4a9
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_4de494
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4de494
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_4de496
        public_4de494 : nop
        xor eax, eax
        public_4de496 : nop
        mov eax, dword ptr ds : [eax+0xEC]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c654c]
        test eax, eax
        jg public_4de4b8
        public_4de4a9 : nop
        mov edi, dword ptr ds : [edi+0x14]
        test edi, edi
        jne public_4de433
        public_4de4b0 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 
        public_4de4b8 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4de3a0)
    }
}

#undef public_4de433
#undef public_4de494
#undef public_4de496
#undef public_4de4a9
#undef public_4de4b0
#undef public_4de4b8
