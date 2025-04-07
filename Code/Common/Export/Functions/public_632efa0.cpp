#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632efa0);

#define public_632eff0 _public_632eff0
#define public_632f002 _public_632f002
#define public_632f010 _public_632f010
#define public_632f022 _public_632f022
#define public_632f056 _public_632f056

PROC_DECLARE(0x632efa0, internal_632efa0, public_632efa0);
extern "C" NAKED register_t __cdecl internal_632efa0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        mov ebx, ecx
        je public_632f056
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
        jp public_632f002
        push esi
        push edi
        lea esi, ss:[ebp+0x10]
        mov edi, 3
        mov edi, edi
        public_632eff0 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, ebx
        call public_632efa0
        add esi, 4
        dec edi
        jne public_632eff0
        pop edi
        pop esi
        public_632f002 : nop
        mov ecx, dword ptr ds : [public_640a73c]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_632f056
        mov edi, edi
        public_632f010 : nop
        lea edx, ds:[eax+8]
        cmp ebp, edx
        je public_632f022
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_632f010
        pop ebp
        pop ebx
        ret 4
        public_632f022 : nop
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
        public_632f056 : nop
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632efa0)
    }
}

#undef public_632eff0
#undef public_632f002
#undef public_632f010
#undef public_632f022
#undef public_632f056
