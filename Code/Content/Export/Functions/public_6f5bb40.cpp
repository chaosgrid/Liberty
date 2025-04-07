#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5bb40);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf8e8);

#define public_6f5bb74 _public_6f5bb74
#define public_6f5bb8f _public_6f5bb8f
#define public_6f5bb99 _public_6f5bb99
#define public_6f5bba5 _public_6f5bba5
#define public_6f5bbdb _public_6f5bbdb
#define public_6f5bbe5 _public_6f5bbe5
#define public_6f5bbf0 _public_6f5bbf0
#define public_6f5bbf8 _public_6f5bbf8
#define public_6f5bc03 _public_6f5bc03
#define public_6f5bc0b _public_6f5bc0b
#define public_6f5bc19 _public_6f5bc19
#define public_6f5bc21 _public_6f5bc21
#define public_6f5bc29 _public_6f5bc29
#define public_6f5bc31 _public_6f5bc31
#define public_6f5bc39 _public_6f5bc39
#define public_6f5bc51 _public_6f5bc51
#define public_6f5bc71 _public_6f5bc71
#define public_6f5bc79 _public_6f5bc79
#define public_6f5bc81 _public_6f5bc81
#define public_6f5bc89 _public_6f5bc89
#define public_6f5bca1 _public_6f5bca1
#define public_6f5bd02 _public_6f5bd02
#define public_6f5bd26 _public_6f5bd26
#define public_6f5bd64 _public_6f5bd64
#define public_6f5bd84 _public_6f5bd84
#define public_6f5bdc4 _public_6f5bdc4
#define public_6f5bde0 _public_6f5bde0
#define public_6f5bdf2 _public_6f5bdf2
#define public_6f5be18 _public_6f5be18
#define public_6f5be2d _public_6f5be2d
#define public_6f5be42 _public_6f5be42

PROC_DECLARE(0x6f5bb40, internal_6f5bb40, public_6f5bb40);
extern "C" NAKED register_t __cdecl internal_6f5bb40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf8e8 @0x6f5bb42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf8e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        xor ebx, ebx
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6f5bb99
        public_6f5bb74 : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x1C]
        lea ecx, ds:[eax+0x18]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        call public_6ef9dc0
        cmp eax, ebx
        jbe public_6f5bb8f
        mov ebx, eax
        public_6f5bb8f : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 4
        cmp esi, eax
        jne public_6f5bb74
        public_6f5bb99 : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f5bbe5
        public_6f5bba5 : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x1C]
        lea ecx, ds:[eax+0x18]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        call public_6ef9dc0
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fbbb38]
        call public_6fa9130
        cmp eax, ebx
        jbe public_6f5bbdb
        mov ebx, eax
        public_6f5bbdb : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6f5bba5
        public_6f5bbe5 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6f5bbf0
        xor ecx, ecx
        jmp public_6f5bbf8
        public_6f5bbf0 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f5bbf8 : nop
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6f5bc03
        xor eax, eax
        jmp public_6f5bc0b
        public_6f5bc03 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, esi
        sar eax, 2
        public_6f5bc0b : nop
        add eax, ecx
        test eax, eax
        jne public_6f5bc19
        mov dword ptr ss : [esp+0x18], eax
        xor esi, esi
        jmp public_6f5bc51
        public_6f5bc19 : nop
        test edx, edx
        jne public_6f5bc21
        xor ecx, ecx
        jmp public_6f5bc29
        public_6f5bc21 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f5bc29 : nop
        test esi, esi
        jne public_6f5bc31
        xor eax, eax
        jmp public_6f5bc39
        public_6f5bc31 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, esi
        sar eax, 2
        public_6f5bc39 : nop
        add eax, ecx
        xor esi, esi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], esi
        fild qword ptr ss : [esp+0x1C]
        fdivr dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        public_6f5bc51 : nop
        mov al, byte ptr ss : [esp+0x48]
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        cmp edx, esi
        mov dword ptr ss : [esp+0x3C], esi
        jne public_6f5bc71
        xor ecx, ecx
        jmp public_6f5bc79
        public_6f5bc71 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f5bc79 : nop
        cmp edx, esi
        jne public_6f5bc81
        xor eax, eax
        jmp public_6f5bc89
        public_6f5bc81 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, edx
        sar eax, 2
        public_6f5bc89 : nop
        lea edi, ds:[eax+ecx]
        lea ecx, ss:[esp+0x24]
        call public_6eb6b30
        cmp eax, edi
        jae public_6f5bd02
        test edi, edi
        mov eax, edi
        jge public_6f5bca1
        xor eax, eax
        public_6f5bca1 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+edi*4]
        mov dword ptr ss : [esp+0x34], ecx
        add esp, 4
        lea ecx, ss:[esp+0x24]
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x28], esi
        public_6f5bd02 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], 0
        je public_6f5bd64
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x14]
        public_6f5bd26 : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x1C]
        fdiv st, st(1)
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call public_6eb5770
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+8]
        fadd dword ptr ss : [esp+0x10]
        add esi, 4
        cmp esi, eax
        fstp dword ptr ss : [esp+0x10]
        jne public_6f5bd26
        public_6f5bd64 : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f5bdc4
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], 0
        fild qword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x14]
        public_6f5bd84 : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x1C]
        fdiv st, st(1)
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x30]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        call public_6f937c0
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+8]
        fadd dword ptr ss : [esp+0x10]
        add esi, 4
        cmp esi, eax
        fstp dword ptr ss : [esp+0x10]
        jne public_6f5bd84
        public_6f5bdc4 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        cmp ebx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [ebp+4]
        je public_6f5be42
        mov ebp, dword ptr ss : [esp+0x50]
        lea esp, ss:[esp]
        public_6f5bde0 : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f5bdf2
        mov ecx, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ds : [ecx+4]
        mov esi, ebp
        public_6f5bdf2 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f5be18
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x4C]
        push edx
        push 1
        mov dword ptr ss : [esp+0x54], 0
        push eax
        jmp public_6f5be2d
        public_6f5be18 : nop
        fld dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi+8]
        fdiv dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x50]
        push ecx
        push 1
        push edx
        fstp dword ptr ss : [esp+0x5C]
        public_6f5be2d : nop
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x2C]
        add ebx, 4
        add edi, 4
        cmp ebx, eax
        jne public_6f5bde0
        public_6f5be42 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6f5bb40)
    }
}

#undef public_6f5bb74
#undef public_6f5bb8f
#undef public_6f5bb99
#undef public_6f5bba5
#undef public_6f5bbdb
#undef public_6f5bbe5
#undef public_6f5bbf0
#undef public_6f5bbf8
#undef public_6f5bc03
#undef public_6f5bc0b
#undef public_6f5bc19
#undef public_6f5bc21
#undef public_6f5bc29
#undef public_6f5bc31
#undef public_6f5bc39
#undef public_6f5bc51
#undef public_6f5bc71
#undef public_6f5bc79
#undef public_6f5bc81
#undef public_6f5bc89
#undef public_6f5bca1
#undef public_6f5bd02
#undef public_6f5bd26
#undef public_6f5bd64
#undef public_6f5bd84
#undef public_6f5bdc4
#undef public_6f5bde0
#undef public_6f5bdf2
#undef public_6f5be18
#undef public_6f5be2d
#undef public_6f5be42
