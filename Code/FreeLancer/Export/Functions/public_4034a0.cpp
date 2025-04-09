#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402f40);
CLANG_FORWARD_PROC_SYMBOL(public_403350);
CLANG_FORWARD_PROC_SYMBOL(public_4034a0);
CLANG_FORWARD_PROC_SYMBOL(public_404670);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_403641 _public_403641
#define public_403652 _public_403652
#define public_4036b1 _public_4036b1
#define public_403775 _public_403775
#define public_403819 _public_403819
#define public_40382a _public_40382a
#define public_4038e6 _public_4038e6

PROC_DECLARE(0x4034a0, internal_4034a0, public_4034a0);
extern "C" NAKED register_t __cdecl internal_4034a0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        push eax
        push esi
        call public_403350
        add esp, 0x20
        test al, al
        je public_4038e6
        call public_402f40
        mov ecx, dword ptr ds : [esi]
        push esi
        mov ebp, eax
        call dword ptr ds : [ecx+0x14]
        fld dword ptr ss : [esp+0x54]
        fabs 
        mov ebx, eax
        fcomp qword ptr ds : [public_5c75f0]
        fnstsw ax
        test ah, 0x41
        je public_4036b1
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x54]
        lea edx, ss:[ebp+0x20]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fadd qword ptr ds : [public_5c75e8]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x44]
        fadd dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x44], eax
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x48], ecx
        fadd qword ptr ds : [public_5c75e8]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x50]
        fadd qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x50]
        fadd qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x54]
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_4038e6
        fld dword ptr ss : [esp+0x44]
        sub esp, 0xC
        fadd st(0), st
        lea eax, ss:[esp+0x48]
        lea ecx, ss:[esp+0x40]
        lea edx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_4038e6
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x50]
        mov ebx, dword ptr ss : [ebp+0x18]
        mov ebp, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0x10]
        add ebx, 8
        fsubr dword ptr ds : [public_5c75dc]
        lea eax, ss:[ebp+1]
        cmp eax, ecx
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ebx+4], eax
        jle public_403652
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x54], eax
        je public_403641
        mov ecx, ebp
        imul ecx, 0x2C
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_403641 : nop
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        mov dword ptr ds : [ebx], ecx
        public_403652 : nop
        mov eax, dword ptr ds : [ebx]
        imul ebp, 0x2C
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [ebp+0x10], edx
        mov dword ptr ss : [ebp+0x14], eax
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x3C]
        pop edi
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [esp+0x48]
        pop esi
        mov dword ptr ss : [ebp+0x28], ecx
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        public_4036b1 : nop
        fld dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi]
        fcos 
        push esi
        fld dword ptr ss : [esp+0x58]
        fsin 
        fld st(1)
        fmul dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x58]
        call dword ptr ds : [edx+0x20]
        fmul dword ptr ss : [esp+0x50]
        xor edi, edi
        xor ecx, ecx
        fsubr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x54]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x48]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x2C]
        fild dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x54]
        public_403775 : nop
        fld dword ptr ss : [esp+ecx+0x30]
        fcomp dword ptr ss : [esp+0x54]
        fnstsw ax
        test ah, 5
        jnp public_4038e6
        fild dword ptr ds : [ebx+8]
        fcomp dword ptr ss : [esp+ecx+0x30]
        fnstsw ax
        test ah, 0x41
        jnp public_4038e6
        fild dword ptr ds : [ebx+4]
        fcomp dword ptr ss : [esp+ecx+0x20]
        fnstsw ax
        test ah, 0x41
        je public_4038e6
        fild dword ptr ds : [ebx+0xC]
        fcomp dword ptr ss : [esp+ecx+0x20]
        fnstsw ax
        test ah, 0x41
        jnp public_4038e6
        add ecx, 4
        cmp ecx, 0x10
        jl public_403775
        mov ebx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        add ebx, 0x14
        lea eax, ds:[esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ds : [ebx+4], eax
        jle public_40382a
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        shl eax, 5
        push eax
        call public_5b7e84
        mov edx, dword ptr ds : [ebx]
        add esp, 4
        cmp edx, edi
        mov dword ptr ss : [esp+0x48], eax
        je public_403819
        mov ecx, esi
        shl ecx, 5
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x54]
        xor edi, edi
        public_403819 : nop
        mov ecx, dword ptr ds : [ebx]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 4
        mov dword ptr ds : [ebx], edx
        public_40382a : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        shl esi, 5
        add esi, eax
        mov eax, esi
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edi
        mov edx, dword ptr ss : [esp+0x44]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x50]
        fstp dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+0x18]
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax+0x28], edx
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], edi
        fstp dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ss : [esp+0x50]
        fstp dword ptr ds : [eax+0x2C]
        fstp dword ptr ds : [eax+0x38]
        fstp dword ptr ds : [eax+0x3C]
        fld dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax+0x48], edx
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+0x50], ecx
        fstp dword ptr ds : [eax+0x40]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x54], edi
        fstp dword ptr ds : [eax+0x44]
        fld dword ptr ss : [esp+0x50]
        fstp dword ptr ds : [eax+0x4C]
        fstp dword ptr ds : [eax+0x58]
        fstp dword ptr ds : [eax+0x5C]
        fld dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax+0x68], edx
        fld dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+0x70], ecx
        fstp dword ptr ds : [eax+0x60]
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+0x74], edi
        fstp dword ptr ds : [eax+0x64]
        fld dword ptr ss : [esp+0x50]
        fstp dword ptr ds : [eax+0x6C]
        fstp dword ptr ds : [eax+0x78]
        fstp dword ptr ds : [eax+0x7C]
        public_4038e6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x4034a0)
    }
}

#undef public_403641
#undef public_403652
#undef public_4036b1
#undef public_403775
#undef public_403819
#undef public_40382a
#undef public_4038e6
