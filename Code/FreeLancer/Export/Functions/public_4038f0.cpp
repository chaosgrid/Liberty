#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402f40);
CLANG_FORWARD_PROC_SYMBOL(public_4038f0);
CLANG_FORWARD_PROC_SYMBOL(public_404670);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_403914 _public_403914
#define public_403970 _public_403970
#define public_403a10 _public_403a10
#define public_403c2f _public_403c2f
#define public_403c42 _public_403c42
#define public_403c9a _public_403c9a
#define public_403e22 _public_403e22
#define public_403e33 _public_403e33
#define public_403e8a _public_403e8a

PROC_DECLARE(0x4038f0, internal_4038f0, public_4038f0);
extern "C" NAKED register_t __cdecl internal_4038f0()
{
    __asm
    {
        sub esp, 0x38
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_616494]
        test eax, eax
        jne public_403914
        call public_5b73e0
        mov dword ptr ds : [public_616494], eax
        public_403914 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x38]
        fld qword ptr ds : [public_5c75f8]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x30]
        fmul st, st(1)
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x28], edx
        fsubr st, st(1)
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi]
        push esi
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], ecx
        fstp st(0)
        call dword ptr ds : [eax+0x20]
        fsubr dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_403970
        pop edi
        xor al, al
        pop esi
        add esp, 0x38
        ret 
        public_403970 : nop
        fld dword ptr ds : [public_5c7500]
        mov ecx, dword ptr ds : [esi]
        fdiv dword ptr ss : [esp+0x28]
        push esi
        fstp dword ptr ss : [esp+0x48]
        call dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x20]
        fmul dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi]
        push esi
        fstp dword ptr ss : [esp+0xC]
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x48]
        push esi
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fst dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fabs 
        fstp dword ptr ss : [esp+0xC]
        fxch st(2)
        fmul dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x54]
        fxch 
        fmul dword ptr ss : [esp+0x58]
        fabs 
        fstp dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_403a10
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_403a10
        pop edi
        xor al, al
        pop esi
        add esp, 0x38
        ret 
        public_403a10 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push ebp
        push esi
        call dword ptr ds : [edx+0x14]
        mov ebx, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        mov dword ptr ss : [esp+0x60], ecx
        fild dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ebx+4]
        sub edx, eax
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x28]
        push esi
        fmul dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fiadd dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x64]
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fiadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [eax+0x20]
        fmul dword ptr ss : [esp+0x4C]
        fsubr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x1C]
        call public_402f40
        fld dword ptr ss : [esp+0x50]
        mov edi, eax
        fcomp dword ptr ds : [public_5c75dc]
        mov dword ptr ss : [esp+0x20], edi
        fnstsw ax
        test ah, 0x41
        jne public_403c9a
        mov ebp, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [ebp]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [public_5c75d8]
        mov esi, eax
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ds : [ecx+8]
        mov ebp, eax
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        lea edx, ds:[eax+ebp]
        add edx, esi
        cmp edx, 1
        jbe public_403c9a
        fld dword ptr ss : [esp+0x60]
        or esi, 0xFFFFFF00
        fsub dword ptr ss : [esp+0x50]
        and eax, 0xFF
        shl esi, 8
        sub esp, 0xC
        fstp dword ptr ss : [esp+0x44]
        and ebp, 0xFF
        fld dword ptr ss : [esp+0x6C]
        or esi, ebp
        fadd dword ptr ss : [esp+0x5C]
        shl esi, 8
        or esi, eax
        lea eax, ds:[edi+0x20]
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x3C]
        fadd dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x40], edx
        fstp dword ptr ss : [esp+0x50]
        lea edx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x30], esi
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_403c9a
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fadd st(0), st
        lea ecx, ss:[esp+0x40]
        lea edx, ss:[esp+0x38]
        lea eax, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_403c9a
        mov ebp, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        add ebp, 8
        lea eax, ds:[esi+1]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [ebp+4], eax
        jle public_403c42
        add eax, 0x20
        mov dword ptr ss : [ebp+8], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        test edx, edx
        mov dword ptr ss : [esp+0x50], eax
        je public_403c2f
        mov ecx, esi
        imul ecx, 0x2C
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x54]
        mov edi, dword ptr ss : [esp+0x20]
        public_403c2f : nop
        mov eax, dword ptr ss : [ebp]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x54]
        add esp, 4
        mov dword ptr ss : [ebp], ecx
        public_403c42 : nop
        mov eax, dword ptr ss : [ebp]
        imul esi, 0x2C
        add esi, eax
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], eax
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x28], ecx
        public_403c9a : nop
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_403e8a
        mov ebp, dword ptr ss : [esp+0x58]
        fld dword ptr ss : [ebp]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [public_5c75d8]
        mov esi, eax
        call public_5b7ec0
        mov edx, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [edx+8]
        mov ebp, eax
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        lea ecx, ds:[eax+ebp]
        add ecx, esi
        cmp ecx, 1
        jbe public_403e8a
        fld dword ptr ss : [esp+0x60]
        or esi, 0xFFFFFF00
        fsub dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        shl esi, 8
        and ebp, 0xFF
        fstp dword ptr ss : [esp+0x44]
        and eax, 0xFF
        fld dword ptr ss : [esp+0x6C]
        or esi, ebp
        fadd dword ptr ss : [esp+0x68]
        shl esi, 8
        or esi, eax
        lea edx, ds:[edi+0x20]
        mov eax, dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+4]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x3C]
        fadd dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x60], esi
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_403e8a
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fadd st(0), st
        lea eax, ss:[esp+0x40]
        lea ecx, ss:[esp+0x38]
        lea edx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_403e8a
        mov ebx, dword ptr ds : [edi+0x18]
        mov ebp, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0x10]
        add ebx, 8
        lea eax, ss:[ebp+1]
        cmp eax, ecx
        mov dword ptr ds : [ebx+4], eax
        jle public_403e33
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x5C], eax
        je public_403e22
        mov ecx, ebp
        imul ecx, 0x2C
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_403e22 : nop
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x60]
        add esp, 4
        mov dword ptr ds : [ebx], ecx
        public_403e33 : nop
        mov eax, dword ptr ds : [ebx]
        imul ebp, 0x2C
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+0x10], edx
        mov dword ptr ss : [ebp+0x14], eax
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [ebp+0x28], ecx
        public_403e8a : nop
        pop ebp
        pop ebx
        pop edi
        mov al, 1
        pop esi
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x4038f0)
    }
}

#undef public_403914
#undef public_403970
#undef public_403a10
#undef public_403c2f
#undef public_403c42
#undef public_403c9a
#undef public_403e22
#undef public_403e33
#undef public_403e8a
