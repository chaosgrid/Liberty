#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632efa0);

#define public_632ef20 _public_632ef20
#define public_632ef32 _public_632ef32
#define public_632ef40 _public_632ef40
#define public_632ef58 _public_632ef58
#define public_632ef8c _public_632ef8c
#define public_632ef94 _public_632ef94

PROC_DECLARE(0x632eed0, internal_632eed0, public_632eed0);
extern "C" NAKED register_t __cdecl internal_632eed0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+4]
        test ebx, ebx
        je public_632ef94
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
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
        jp public_632ef32
        push esi
        push edi
        lea esi, ds:[ebx+0x10]
        mov edi, 3
        lea esp, ss:[esp]
        public_632ef20 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, ebp
        call public_632efa0
        add esi, 4
        dec edi
        jne public_632ef20
        pop edi
        pop esi
        public_632ef32 : nop
        mov ecx, dword ptr ds : [public_640a73c]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_632ef8c
        mov edi, edi
        public_632ef40 : nop
        lea edx, ds:[eax+8]
        cmp ebx, edx
        je public_632ef58
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_632ef40
        xor eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        ret 
        public_632ef58 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [public_640a734]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [public_640a738]
        mov dword ptr ds : [public_640a734], eax
        mov eax, dword ptr ds : [public_640a740]
        dec ecx
        dec eax
        mov dword ptr ds : [public_640a738], ecx
        mov dword ptr ds : [public_640a740], eax
        public_632ef8c : nop
        xor eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        public_632ef94 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632eed0)
    }
}

#undef public_632ef20
#undef public_632ef32
#undef public_632ef40
#undef public_632ef58
#undef public_632ef8c
#undef public_632ef94
