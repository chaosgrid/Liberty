#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ba60);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_44ba88 _public_44ba88
#define public_44ba97 _public_44ba97
#define public_44baa0 _public_44baa0
#define public_44bac7 _public_44bac7
#define public_44bad3 _public_44bad3
#define public_44bb0d _public_44bb0d
#define public_44bb75 _public_44bb75
#define public_44bd37 _public_44bd37

PROC_DECLARE(0x44ba60, internal_44ba60, public_44ba60);
extern "C" NAKED register_t __cdecl internal_44ba60()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1338]
        test al, al
        push edi
        jne public_44bac7
        mov ebp, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ss : [ebp+0x138]
        xor ebx, ebx
        cmp ecx, ebx
        jne public_44ba88
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_44ba97
        public_44ba88 : nop
        mov eax, dword ptr ss : [ebp+0x13C]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        public_44ba97 : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jle public_44bac7
        lea ecx, ds:[ecx]
        public_44baa0 : nop
        mov eax, dword ptr ss : [ebp+0x138]
        mov edi, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_44bad3
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        cmp ebx, eax
        jl public_44baa0
        public_44bac7 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 0x10
        public_44bad3 : nop
        mov al, 1
        mov byte ptr ds : [esi+0x1338], al
        mov byte ptr ds : [public_66d359], al
        mov dword ptr ds : [esi+0x1344], 0
        mov dword ptr ds : [esi+0x133C], 0x40000000
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        lea ebx, ds:[esi+0x1348]
        jne public_44bb0d
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44bb0d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x10]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ds:[edi+4]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x1358]
        mov ecx, ebp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x1364], ecx
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x1368], edx
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x136C], eax
        mov eax, dword ptr ds : [esi+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        lea ebx, ds:[esi+0x1370]
        jne public_44bb75
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44bb75 : nop
        mov edx, dword ptr ds : [eax]
        push edi
        push ebx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [esi+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x1380]
        mov edx, edi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [esi+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [esi+0x138C]
        mov eax, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        fstp dword ptr ds : [esi+0x1390]
        mov eax, dword ptr ds : [esi+0x500]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x24]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x1394], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x1398], eax
        mov dword ptr ds : [esi+0x139C], ecx
        mov dword ptr ds : [esi+0x13A0], edx
        fld dword ptr ss : [ebp]
        fsub dword ptr ds : [edi]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x1C]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ss : [esp+0x18]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ds : [esi+0x1364]
        fsub dword ptr ds : [esi+0x138C]
        fabs 
        fcomp qword ptr ds : [public_5cbfb8]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ds : [esi+0x1368]
        fsub dword ptr ds : [esi+0x1390]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ds : [esi+0x136C]
        fsub dword ptr ss : [esp+0x28]
        fabs 
        fcomp qword ptr ds : [public_5cbfc0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [esi+0x1348]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [esi+0x134C]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [esi+0x1350]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+0xC]
        fsub dword ptr ds : [esi+0x1354]
        fstp dword ptr ss : [esp+0x20]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ss : [esp+0x20]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        fld dword ptr ss : [esp+0x14]
        fabs 
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 5
        jp public_44bd37
        mov byte ptr ds : [esi+0x1338], 0
        mov byte ptr ds : [public_66d359], 0
        public_44bd37 : nop
        mov al, byte ptr ds : [esi+0x1338]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x44ba60)
    }
}

#undef public_44ba88
#undef public_44ba97
#undef public_44baa0
#undef public_44bac7
#undef public_44bad3
#undef public_44bb0d
#undef public_44bb75
#undef public_44bd37
