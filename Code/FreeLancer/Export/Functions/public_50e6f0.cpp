#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_50e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_50f230);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);

#define public_50e733 _public_50e733
#define public_50e74e _public_50e74e
#define public_50e75d _public_50e75d
#define public_50e78b _public_50e78b
#define public_50e7eb _public_50e7eb
#define public_50e7f7 _public_50e7f7
#define public_50e7fd _public_50e7fd
#define public_50e80b _public_50e80b
#define public_50e81b _public_50e81b
#define public_50e81d _public_50e81d
#define public_50e83b _public_50e83b
#define public_50e910 _public_50e910
#define public_50e97c _public_50e97c
#define public_50e9e5 _public_50e9e5
#define public_50ea53 _public_50ea53
#define public_50ea60 _public_50ea60
#define public_50ea73 _public_50ea73
#define public_50ea7b _public_50ea7b
#define public_50ea8f _public_50ea8f
#define public_50eac5 _public_50eac5
#define public_50ead5 _public_50ead5
#define public_50eaef _public_50eaef
#define public_50eb03 _public_50eb03
#define public_50eb1d _public_50eb1d
#define public_50eb31 _public_50eb31
#define public_50eb52 _public_50eb52
#define public_50eb6a _public_50eb6a
#define public_50eb7a _public_50eb7a
#define public_50eb94 _public_50eb94
#define public_50eba8 _public_50eba8
#define public_50ebbd _public_50ebbd
#define public_50ebda _public_50ebda
#define public_50ebeb _public_50ebeb
#define public_50ebf8 _public_50ebf8
#define public_50edd6 _public_50edd6
#define public_50ede0 _public_50ede0
#define public_50ef90 _public_50ef90
#define public_50f094 _public_50f094
#define public_50f140 _public_50f140
#define public_50f1ac _public_50f1ac
#define public_50f201 _public_50f201
#define public_50f206 _public_50f206
#define public_50f21c _public_50f21c

PROC_DECLARE(0x50e6f0, internal_50e6f0, public_50e6f0);
extern "C" NAKED register_t __cdecl internal_50e6f0()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2E0]
        test eax, eax
        push edi
        jne public_50e80b
        lea ebx, ds:[esi+0x2C0]
        push ebx
        lea ecx, ss:[esp+0x6C]
        xor edi, edi
        call public_4205c0
        lea eax, ss:[esp+0x68]
        push eax
        mov ecx, offset public_6750a0
        call public_420690
        test al, al
        je public_50e733
        mov eax, dword ptr ds : [public_6750b4]
        jmp public_50e74e
        public_50e733 : nop
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, offset public_6750a0
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_6750b4], eax
        public_50e74e : nop
        cmp eax, dword ptr ds : [public_6750a4]
        je public_50e75d
        lea edi, ds:[eax+0x28]
        test edi, edi
        jne public_50e78b
        public_50e75d : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x38]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x50e77b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
/*FIXUP push offset public_5c958c @0x50e780*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_50e78b : nop
        push 0
        mov dword ptr ds : [esi+0x2E0], edi
        mov byte ptr ds : [esi+0x2E4], 0
        call public_5b7010
        mov ecx, dword ptr ds : [esi+0x2E0]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_50e7fd
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0
        call public_425640
        push eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [edi+0xC8]
        test eax, eax
        jne public_50e7fd
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, 0xA
        jl public_50e7eb
        cmp eax, 0xE
        jg public_50e7eb
        mov al, 1
        jmp public_50e7f7
        public_50e7eb : nop
        push eax
        call public_5b7030
        mov al, byte ptr ds : [eax+0x48]
        add esp, 4
        public_50e7f7 : nop
        mov byte ptr ds : [esi+0x2E4], al
        public_50e7fd : nop
        mov eax, dword ptr ds : [esi+0x2E0]
        test eax, eax
        je public_50f21c
        public_50e80b : nop
        mov al, byte ptr ds : [esi+0x2E4]
        test al, al
        push 2
        je public_50e81b
        push 5
        jmp public_50e81d
        public_50e81b : nop
        push 2
        public_50e81d : nop
        call public_4220c0
        mov al, byte ptr ds : [public_67519c]
        add esp, 8
        test al, al
        je public_50e83b
        push 0xBE2
        call public_421ed0
        add esp, 4
        public_50e83b : nop
        mov eax, dword ptr ss : [esp+0x8C]
        fld dword ptr ds : [esi+0x2AC]
        fmul dword ptr ds : [eax+0x88]
        lea edx, ds:[eax+0x7C]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x2B0]
        cmp eax, 3
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x2E0]
        mov dword ptr ss : [esp+0x40], edx
        push 0
        jge public_50e9e5
        call public_425640
        push eax
        call public_4220a0
        push 6
        call public_421670
        fld dword ptr ds : [public_613458]
        fmul dword ptr ds : [esi+0x10]
        lea eax, ds:[esi+0x288]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        fmul dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        add esp, 4
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ds : [public_61345c]
        mov ebx, 1
        add esp, 0xC
        cmp eax, ebx
        jle public_50e97c
        lea ebp, ds:[esi+0x2A0]
        lea edi, ds:[esi+0x24]
        public_50e910 : nop
        fld dword ptr ds : [public_613458]
        mov edx, ebp
        fmul dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        fmul dword ptr ss : [esp+0x90]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi-4]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edi-8]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi-0xC]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ds : [public_61345c]
        add esp, 0xC
        inc ebx
        add edi, 0x18
        cmp ebx, eax
        jl public_50e910
        public_50e97c : nop
        fld dword ptr ds : [public_613458]
        lea edx, ds:[esi+0x2A0]
        fmul dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        fmul dword ptr ss : [esp+0x90]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0x1C]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0x18]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        jmp public_50f201
        public_50e9e5 : nop
        call public_425640
        push eax
        call public_4220a0
        push 4
        call public_421670
        mov ecx, dword ptr ds : [public_6751a0]
        mov eax, dword ptr ds : [public_613460]
        add esp, 8
        cmp ecx, eax
        jge public_50f094
        lea edx, ds:[esi+ecx*4+0x258]
        lea eax, ds:[ecx+1]
        lea ecx, ds:[ecx+ecx*2]
        lea edi, ds:[esi+ecx*8+0x144]
        mov ecx, 0xFFFFFDCC
        sub ecx, esi
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov ebx, 0xFFFFFDB4
        mov ecx, 0xFFFFFED4
        sub ebx, esi
        sub ecx, esi
        mov edx, 0xFFFFFEEC
        sub edx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jmp public_50ea60
        public_50ea53 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        nop 
        public_50ea60 : nop
        cmp eax, 0xB
        lea ebp, ds:[ecx+edi]
        mov dword ptr ss : [esp+0x14], ebp
        jle public_50ea73
        lea ecx, ds:[ebx+edi]
        mov dword ptr ss : [esp+0x14], ecx
        public_50ea73 : nop
        cmp eax, 0xC
        jle public_50ea7b
        lea ebp, ds:[ebx+edi]
        public_50ea7b : nop
        inc eax
        cmp eax, 0xC
        lea ebx, ds:[edx+edi]
        mov dword ptr ss : [esp+0x34], eax
        jle public_50ea8f
        mov edx, dword ptr ss : [esp+0x30]
        lea ebx, ds:[edx+edi]
        public_50ea8f : nop
        fld dword ptr ds : [esi+ebp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+esi+0x10]
        xor ecx, ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+esi+0x148]
        fstp dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_5c8b70]
        fnstsw ax
        test ah, 0x41
        jne public_50eac5
        fstp st(0)
        mov ecx, 1
        jmp public_50ead5
        public_50eac5 : nop
        fcomp dword ptr ds : [public_5d1494]
        fnstsw ax
        test ah, 5
        jp public_50ead5
        or ecx, 0xFFFFFFFF
        public_50ead5 : nop
        fld dword ptr ss : [esp+0x1C]
        xor edx, edx
        fcomp dword ptr ds : [public_5c8b70]
        fnstsw ax
        test ah, 0x41
        jne public_50eaef
        mov edx, 1
        jmp public_50eb03
        public_50eaef : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5d1494]
        fnstsw ax
        test ah, 5
        jp public_50eb03
        or edx, 0xFFFFFFFF
        public_50eb03 : nop
        cmp ecx, edx
        je public_50eb52
        cmp ecx, 1
        fstp st(0)
        jne public_50eb1d
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], 0
        jmp public_50ebf8
        public_50eb1d : nop
        cmp ecx, 0xFFFFFFFF
        jne public_50eb31
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], 1
        jmp public_50ede0
        public_50eb31 : nop
        cmp edx, 1
        je public_50edd6
        cmp edx, 0xFFFFFFFF
        jne public_50ebeb
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], 0
        jmp public_50ebf8
        public_50eb52 : nop
        fcom dword ptr ds : [public_5c8b70]
        xor edx, edx
        fnstsw ax
        test ah, 0x41
        jne public_50eb6a
        fstp st(0)
        mov edx, 1
        jmp public_50eb7a
        public_50eb6a : nop
        fcomp dword ptr ds : [public_5d1494]
        fnstsw ax
        test ah, 5
        jp public_50eb7a
        or edx, 0xFFFFFFFF
        public_50eb7a : nop
        fld dword ptr ss : [esp+0x20]
        xor ecx, ecx
        fcomp dword ptr ds : [public_5c8b70]
        fnstsw ax
        test ah, 0x41
        jne public_50eb94
        mov ecx, 1
        jmp public_50eba8
        public_50eb94 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5d1494]
        fnstsw ax
        test ah, 5
        jp public_50eba8
        or ecx, 0xFFFFFFFF
        public_50eba8 : nop
        cmp edx, ecx
        je public_50ebeb
        cmp edx, 1
        jne public_50ebbd
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], 0
        jmp public_50ebf8
        public_50ebbd : nop
        cmp edx, 0xFFFFFFFF
        je public_50edd6
        cmp ecx, 1
        jne public_50ebda
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], 1
        jmp public_50ede0
        public_50ebda : nop
        cmp ecx, 0xFFFFFFFF
        jne public_50ebeb
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], 0
        jmp public_50ebf8
        public_50ebeb : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [eax], 0
        jne public_50ede0
        public_50ebf8 : nop
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x294]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+esi+0x148]
        mov edx, dword ptr ss : [esp+0x4C]
        push ecx
        fmul dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+esi+0x144]
        mov edx, dword ptr ds : [eax+esi+0x140]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+esi+0x13C]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+esi+0x138]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x294]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi-4]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edi-8]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi-0xC]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x2A0]
        fmul dword ptr ds : [esi+ebp+0x10]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [esi+ebp+0xC]
        mov ecx, dword ptr ds : [esi+ebp+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+ebp+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+ebp]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x294]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+esi+0x148]
        mov edx, dword ptr ss : [esp+0x64]
        add esp, 8
        fmul dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+esi+0x144]
        mov edx, dword ptr ds : [eax+esi+0x140]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+esi+0x13C]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+esi+0x138]
        jmp public_50ef90
        public_50edd6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], 1
        public_50ede0 : nop
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x294]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+esi+0x148]
        mov edx, dword ptr ss : [esp+0x64]
        push ecx
        fmul dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+esi+0x144]
        mov edx, dword ptr ds : [eax+esi+0x140]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+esi+0x13C]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+esi+0x138]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x294]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi-4]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edi-8]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi-0xC]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x2A0]
        fmul dword ptr ds : [ebx+esi+0x10]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [ebx+esi+0xC]
        mov ecx, dword ptr ds : [ebx+esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ebx+esi+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ebx+esi]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x294]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi-4]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edi-8]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi-0xC]
        public_50ef90 : nop
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x2A0]
        fmul dword ptr ds : [esi+ebp+0x10]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [esi+ebp+0xC]
        mov ecx, dword ptr ds : [esi+ebp+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+ebp+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+ebp]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [public_613458]
        lea eax, ds:[esi+0x2A0]
        fmul dword ptr ds : [ebx+esi+0x10]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [edx+8]
        add esp, 8
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [ebx+esi+0xC]
        mov ecx, dword ptr ds : [ebx+esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ebx+esi+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ebx+esi]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [public_613460]
        add ebx, 4
        lea edx, ds:[eax-1]
        add esp, 0xC
        add edi, 0x18
        cmp edx, ecx
        mov dword ptr ss : [esp+0x18], ebx
        jl public_50ea53
        public_50f094 : nop
        call public_421690
        mov eax, dword ptr ds : [public_613464]
        test eax, eax
        je public_50f206
        mov ecx, dword ptr ds : [esi+0x2E0]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 6
        call public_421670
        fld dword ptr ds : [public_613458]
        fmul dword ptr ds : [esi+0x10]
        lea eax, ds:[esi+0x288]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        fmul dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        add esp, 4
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ds : [public_613468]
        add esp, 0xC
        xor ebx, ebx
        test eax, eax
        jle public_50f1ac
        lea ebp, ds:[esi+0x294]
        lea edi, ds:[esi+0x144]
        mov edi, edi
        public_50f140 : nop
        fld dword ptr ds : [public_613458]
        mov edx, ebp
        fmul dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        fmul dword ptr ss : [esp+0x90]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi-4]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edi-8]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi-0xC]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ds : [public_613468]
        add esp, 0xC
        inc ebx
        add edi, 0x18
        cmp ebx, eax
        jl public_50f140
        public_50f1ac : nop
        mov edx, dword ptr ss : [esp+0x90]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x2E4]
        push edx
        lea ecx, ds:[esi+0x294]
        push eax
        mov eax, dword ptr ds : [ecx]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ds:[esi+0x138]
        call public_50f230
        public_50f201 : nop
        call public_421690
        public_50f206 : nop
        mov al, byte ptr ds : [public_67519c]
        test al, al
        je public_50f21c
        push 0xBE2
        call public_421dd0
        add esp, 4
        public_50f21c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x74
        ret 0xC
        UNREACHABLE_TRAP(0x50e6f0)
    }
}

#undef public_50e733
#undef public_50e74e
#undef public_50e75d
#undef public_50e78b
#undef public_50e7eb
#undef public_50e7f7
#undef public_50e7fd
#undef public_50e80b
#undef public_50e81b
#undef public_50e81d
#undef public_50e83b
#undef public_50e910
#undef public_50e97c
#undef public_50e9e5
#undef public_50ea53
#undef public_50ea60
#undef public_50ea73
#undef public_50ea7b
#undef public_50ea8f
#undef public_50eac5
#undef public_50ead5
#undef public_50eaef
#undef public_50eb03
#undef public_50eb1d
#undef public_50eb31
#undef public_50eb52
#undef public_50eb6a
#undef public_50eb7a
#undef public_50eb94
#undef public_50eba8
#undef public_50ebbd
#undef public_50ebda
#undef public_50ebeb
#undef public_50ebf8
#undef public_50edd6
#undef public_50ede0
#undef public_50ef90
#undef public_50f094
#undef public_50f140
#undef public_50f1ac
#undef public_50f201
#undef public_50f206
#undef public_50f21c
