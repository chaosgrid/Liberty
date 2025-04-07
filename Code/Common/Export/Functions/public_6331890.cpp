#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632efa0);
CLANG_FORWARD_PROC_SYMBOL(public_6331890);
CLANG_FORWARD_PROC_SYMBOL(public_6331a50);

#define public_63318e4 _public_63318e4
#define public_63318f6 _public_63318f6
#define public_6331902 _public_6331902
#define public_633191b _public_633191b
#define public_633192b _public_633192b
#define public_6331933 _public_6331933

PROC_DECLARE(0x6331890, internal_6331890, public_6331890);
extern "C" NAKED register_t __cdecl internal_6331890()
{
    __asm
    {
        push ecx
        push ebp
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        mov dword ptr ds : [edi], offset public_63a4920
        je public_6331933
        fld dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+4]
        fld dword ptr ss : [ebp]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_63318f6
        push ebx
        push esi
        lea esi, ss:[ebp+0x10]
        mov ebx, 3
        public_63318e4 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_632efa0
        add esi, 4
        dec ebx
        jne public_63318e4
        pop esi
        pop ebx
        public_63318f6 : nop
        mov ecx, dword ptr ds : [public_640a73c]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_633192b
        public_6331902 : nop
        lea edx, ds:[eax+8]
        cmp ebp, edx
        je public_633191b
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6331902
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop ebp
        pop ecx
        ret 
        public_633191b : nop
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_640a728
        call public_6331a50
        public_633192b : nop
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        public_6331933 : nop
        pop edi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6331890)
    }
}

#undef public_63318e4
#undef public_63318f6
#undef public_6331902
#undef public_633191b
#undef public_633192b
#undef public_6331933
