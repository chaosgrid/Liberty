#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_54c8b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c131b);

#define public_54c8e0 _public_54c8e0
#define public_54c910 _public_54c910
#define public_54c966 _public_54c966
#define public_54c9ad _public_54c9ad
#define public_54c9af _public_54c9af
#define public_54ca44 _public_54ca44
#define public_54ca68 _public_54ca68
#define public_54ca92 _public_54ca92
#define public_54cad0 _public_54cad0
#define public_54cb19 _public_54cb19
#define public_54cb81 _public_54cb81
#define public_54cb97 _public_54cb97
#define public_54cba0 _public_54cba0
#define public_54cba8 _public_54cba8
#define public_54cd43 _public_54cd43
#define public_54cd62 _public_54cd62
#define public_54cd64 _public_54cd64
#define public_54cda0 _public_54cda0
#define public_54cdc9 _public_54cdc9
#define public_54cde0 _public_54cde0
#define public_54ce17 _public_54ce17
#define public_54ce24 _public_54ce24
#define public_54ce46 _public_54ce46
#define public_54ce6b _public_54ce6b
#define public_54ceda _public_54ceda
#define public_54cee3 _public_54cee3
#define public_54ceef _public_54ceef
#define public_54cf6c _public_54cf6c
#define public_54cf8e _public_54cf8e

PROC_DECLARE(0x54c8b0, internal_54c8b0, public_54c8b0);
extern "C" NAKED register_t __cdecl internal_54c8b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c131b @0x54c8b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c131b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x3C]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_54c8e0
        push eax
        call public_5b7e1d
        add esp, 4
        public_54c8e0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x5C]
        mov byte ptr ss : [ebp+0x7C], 0
        mov dword ptr ss : [ebp+0x80], edi
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        fld dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [public_5d3ee0]
        fnstsw ax
        test ah, 5
        jp public_54c910
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x64], eax
        public_54c910 : nop
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x64]
        fmul dword ptr ds : [public_5c8a5c]
        fld dword ptr ss : [ebp+0x40]
        fmul dword ptr ss : [ebp+0x48]
        fdivp 
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov esi, eax
        imul esi, dword ptr ss : [ebp+0x4C]
        mov ecx, esi
        imul ecx, 0x3C
        push ecx
        mov dword ptr ss : [ebp+0x44], esi
        call public_5b7e84
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebx
        cmp ebx, edi
        mov dword ptr ss : [esp+0x94], edi
        je public_54c9ad
        lea eax, ds:[esi-1]
        cmp eax, edi
        jl public_54c9af
        lea esi, ds:[ebx+0x28]
        lea edi, ds:[eax+1]
        public_54c966 : nop
        push 0x3F800000
        push 0x3F800000
        push 0x3F800000
        lea ecx, ds:[esi-0xC]
        call public_422b80
        push 0x3E4CCCCD
        push 0x3E4CCCCD
        push 0x3E4CCCCD
        mov ecx, esi
        call public_422b80
        mov dword ptr ds : [esi+0xC], 0x3F800000
        mov dword ptr ds : [esi-0x1C], 0x447A0000
        mov byte ptr ds : [esi+0x10], 1
        add esi, 0x3C
        dec edi
        jne public_54c966
        jmp public_54c9af
        public_54c9ad : nop
        xor ebx, ebx
        public_54c9af : nop
        fld dword ptr ss : [ebp+0x64]
        mov ecx, dword ptr ss : [ebp+4]
        fmul dword ptr ss : [ebp+0x48]
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [ebp+0x3C], ebx
        push eax
        fstp dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        fld dword ptr ss : [ebp+0x68]
        fmul dword ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x68]
        fld dword ptr ss : [ebp+0x6C]
        fmul dword ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x6C]
        fld dword ptr ss : [ebp+0x70]
        fmul dword ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x70]
        fld dword ptr ss : [ebp+0x48]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [ebp+0x48]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x68]
        rep movsd
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+4]
        fcomp dword ptr ds : [public_5d3ee0]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        fnstsw ax
        test ah, 5
        jp public_54ca44
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], ecx
        public_54ca44 : nop
        mov al, byte ptr ss : [ebp+0x74]
        fld dword ptr ss : [ebp+0x78]
        test al, al
        je public_54ca68
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x28]
        jmp public_54ca92
        public_54ca68 : nop
        fld dword ptr ss : [ebp+0x78]
        fld dword ptr ss : [ebp+0x78]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x20]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x24]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x40]
        public_54ca92 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [ebp+0x44]
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], eax
        jle public_54cb81
        mov dword ptr ss : [esp+0x54], esi
        mov edi, esi
        lea esp, ss:[esp]
        public_54cad0 : nop
        fild dword ptr ss : [esp+0x10]
        mov edx, ebx
        fidiv dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5da774]
        fld st(0)
        fcos 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x50]
        fsin 
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], edi
        fstp dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [public_679860]
        test eax, eax
        jne public_54cb19
        call public_5b73e0
        mov dword ptr ds : [public_679860], eax
        public_54cb19 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x44]
        mov edx, ebx
        inc esi
        add ebx, 0x3C
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], esi
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx-0x30], ecx
        mov eax, dword ptr ss : [ebp+0x44]
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        jl public_54cad0
        public_54cb81 : nop
        mov edi, dword ptr ss : [ebp+0x44]
        test edi, edi
        mov ebx, dword ptr ss : [ebp+0x3C]
        jle public_54cd43
        mov esi, 1
        lea eax, ds:[ebx+8]
        public_54cb97 : nop
        lea edx, ds:[esi-2]
        test edx, edx
        jge public_54cba0
        add edx, edi
        public_54cba0 : nop
        cmp esi, edi
        mov ecx, esi
        jl public_54cba8
        sub ecx, edi
        public_54cba8 : nop
        imul ecx, 0x3C
        imul edx, 0x3C
        fld dword ptr ds : [ecx+ebx]
        fsub dword ptr ds : [eax-8]
        fld dword ptr ds : [ecx+ebx+4]
        fsub dword ptr ds : [eax-4]
        fld dword ptr ds : [ecx+ebx+8]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [eax-8]
        fsub dword ptr ds : [edx+ebx]
        add ecx, ebx
        add edx, ebx
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [eax-4]
        fsub dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x58]
        fxch 
        fmul dword ptr ds : [public_5c7474]
        fst dword ptr ss : [esp+0x14]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld st(1)
        fmul dword ptr ds : [public_5c7474]
        fld st(1)
        fmul dword ptr ds : [public_5c7474]
        fsubp 
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x14]
        fstp st(1)
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x58]
        fsub st, st(1)
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_5c7474]
        fsubp 
        fstp dword ptr ss : [esp+0x48]
        fxch 
        fsub dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x4C]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        lea edx, ds:[eax+8]
        fld dword ptr ss : [esp+0x48]
        inc esi
        fmul dword ptr ss : [esp+0x48]
        add eax, 0x3C
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x4C]
        fxch 
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x2C]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x4C]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        fxch 
        mov dword ptr ds : [edx+4], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+8], ecx
        mov edi, dword ptr ss : [ebp+0x44]
        fstp st(0)
        lea edx, ds:[esi-1]
        cmp edx, edi
        jl public_54cb97
        public_54cd43 : nop
        fild dword ptr ss : [ebp+0x44]
        fmul dword ptr ds : [public_5c75e0]
        fild dword ptr ss : [ebp+0x58]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_54cd62
        call public_5b7ec0
        mov dword ptr ss : [ebp+0x58], eax
        jmp public_54cd64
        public_54cd62 : nop
        fstp st(0)
        public_54cd64 : nop
        mov eax, dword ptr ss : [ebp+0x58]
        lea eax, ds:[eax+eax*2]
        shl eax, 3
        push eax
        call public_5b7e84
        fild dword ptr ss : [ebp+0x44]
        mov dword ptr ss : [ebp+0x60], eax
        mov eax, dword ptr ss : [ebp+0x58]
        mov dword ptr ss : [esp+0x18], eax
        fidiv dword ptr ss : [esp+0x18]
        xor ebx, ebx
        add esp, 4
        xor edi, edi
        cmp eax, ebx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_5c7474]
        jle public_54cdc9
        xor eax, eax
        xor esi, esi
        lea ecx, ds:[ecx]
        public_54cda0 : nop
        fadd dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x60]
        fld dword ptr ds : [public_5db098]
        mov dword ptr ds : [esi+ecx], eax
        fadd st, st(1)
        call public_5b7ec0
        mov edx, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [esi+edx+4], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        inc edi
        add esi, 0x18
        cmp edi, ecx
        jl public_54cda0
        public_54cdc9 : nop
        mov eax, dword ptr ss : [ebp+0x58]
        fstp st(0)
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ebx
        jle public_54cf8e
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, edi
        public_54cde0 : nop
        mov eax, dword ptr ss : [ebp+0x60]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx+eax+4]
        mov edi, dword ptr ds : [ecx+eax]
        lea esi, ds:[ecx+eax]
        mov dword ptr ss : [esp+0x1C], ebx
        sub ebx, edi
        mov dword ptr ss : [esp+0x18], ebx
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5cef60]
        call public_5b7ec0
        mov ecx, edi
        sub ecx, eax
        mov eax, dword ptr ss : [ebp+0x44]
        cmp ecx, eax
        jl public_54ce17
        sub ecx, eax
        public_54ce17 : nop
        and ebx, 0x80000001
        jns public_54ce24
        dec ebx
        or ebx, 0xFFFFFFFE
        inc ebx
        public_54ce24 : nop
        je public_54ce46
        mov eax, dword ptr ss : [ebp+0x3C]
        imul ecx, 0x3C
        add ecx, eax
        mov edx, dword ptr ds : [ecx]
        add esi, 8
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        jmp public_54ceda
        public_54ce46 : nop
        mov edx, dword ptr ss : [ebp+0x3C]
        mov ebx, ecx
        imul ebx, 0x3C
        add ebx, edx
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [ebx+8]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x58], edx
        jl public_54ce6b
        sub ecx, eax
        public_54ce6b : nop
        mov eax, dword ptr ss : [ebp+0x3C]
        fld dword ptr ss : [esp+0x50]
        imul ecx, 0x3C
        fadd dword ptr ds : [ecx+eax]
        add ecx, eax
        add esi, 8
        fstp dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ss : [ebp+0x60]
        fld dword ptr ds : [ecx+eax+8]
        lea eax, ds:[ecx+eax+8]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax+8]
        public_54ceda : nop
        mov edx, dword ptr ss : [ebp+0x44]
        cmp edi, edx
        jl public_54cee3
        sub edi, edx
        public_54cee3 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edx
        mov ecx, edi
        jl public_54ceef
        sub eax, edx
        public_54ceef : nop
        mov esi, dword ptr ss : [ebp+0x3C]
        imul ecx, 0x3C
        imul eax, 0x3C
        mov edi, dword ptr ss : [esp+0x14]
        add ecx, esi
        mov edx, ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        add ecx, edi
        add eax, esi
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [edx]
        fld dword ptr ds : [ecx+0xC]
        fsub dword ptr ds : [edx+4]
        fld dword ptr ds : [ecx+0x10]
        fsub dword ptr ds : [edx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0xC]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+0x10]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x1C]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_54cf6c
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        public_54cf6c : nop
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x58]
        inc eax
        add edx, 0x18
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_54cde0
        public_54cf8e : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x54c8b0)
    }
}

#undef public_54c8e0
#undef public_54c910
#undef public_54c966
#undef public_54c9ad
#undef public_54c9af
#undef public_54ca44
#undef public_54ca68
#undef public_54ca92
#undef public_54cad0
#undef public_54cb19
#undef public_54cb81
#undef public_54cb97
#undef public_54cba0
#undef public_54cba8
#undef public_54cd43
#undef public_54cd62
#undef public_54cd64
#undef public_54cda0
#undef public_54cdc9
#undef public_54cde0
#undef public_54ce17
#undef public_54ce24
#undef public_54ce46
#undef public_54ce6b
#undef public_54ceda
#undef public_54cee3
#undef public_54ceef
#undef public_54cf6c
#undef public_54cf8e
