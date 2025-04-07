#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb850);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0030);
CLANG_FORWARD_PROC_SYMBOL(public_6ed04c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed06d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f155f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f172f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31430);
CLANG_FORWARD_PROC_SYMBOL(public_6f31470);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa55a);

#define public_6eb8510 _public_6eb8510
#define public_6eb8541 _public_6eb8541
#define public_6eb8699 _public_6eb8699
#define public_6eb86c3 _public_6eb86c3
#define public_6eb86e0 _public_6eb86e0
#define public_6eb86f5 _public_6eb86f5
#define public_6eb876e _public_6eb876e
#define public_6eb8790 _public_6eb8790
#define public_6eb87e9 _public_6eb87e9
#define public_6eb8801 _public_6eb8801
#define public_6eb881e _public_6eb881e
#define public_6eb8850 _public_6eb8850
#define public_6eb886e _public_6eb886e
#define public_6eb8871 _public_6eb8871
#define public_6eb8891 _public_6eb8891
#define public_6eb88bc _public_6eb88bc
#define public_6eb88c2 _public_6eb88c2
#define public_6eb88d3 _public_6eb88d3
#define public_6eb88e1 _public_6eb88e1
#define public_6eb88f9 _public_6eb88f9
#define public_6eb8909 _public_6eb8909
#define public_6eb891b _public_6eb891b

PROC_DECLARE(0x6eb84c0, internal_6eb84c0, public_6eb84c0);
extern "C" NAKED register_t __cdecl internal_6eb84c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa55a @0x6eb84c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa55a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x17C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x194]
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        call public_6f172f0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3028]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6eb891b
        push esi
        push edi
        lea ebx, ds:[ebx]
        public_6eb8510 : nop
        mov esi, dword ptr ds : [public_6fb301c]
/*FIXUP push offset public_6fb47e0 @0x6eb8516*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47e0
        mov ecx, ebp
        call esi
        test al, al
        je public_6eb86f5
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6eb8909
        public_6eb8541 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6eb8547*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6eb86c3
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x2C]
        lea esi, ds:[ebx+0x1B0]
        push ecx
        mov ecx, esi
        call public_6f7b0f0
        mov eax, dword ptr ds : [ebx+0x1B4]
        cmp dword ptr ss : [esp+0x28], eax
        jne public_6eb86e0
        mov dl, byte ptr ss : [esp+0x13]
        mov edi, dword ptr ss : [esp+0x14]
        push 0
        push 0
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x4C], 0
        mov byte ptr ss : [esp+0x50], dl
        call public_6f93790
        mov dword ptr ss : [esp+0x4C], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x194], eax
        lea eax, ss:[esp+0x23]
        push eax
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x58], ebx
        call public_6ead6a0
        mov byte ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], edi
        push ebp
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x198], 1
        call public_6ebb850
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0xBC], ecx
        push edx
        lea ecx, ss:[esp+0xC4]
        call public_6ed0030
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x19C], 2
        call public_6ed06d0
        lea edx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0x1C], edx
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0x194], 3
        call public_6eec8d0
        lea ecx, ss:[esp+0xC8]
        mov byte ptr ss : [esp+0x194], 1
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        jne public_6eb8699
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0xA8]
        push ecx
        lea ecx, ds:[ebx+0x1E4]
        call public_6f003e0
        public_6eb8699 : nop
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x194], 4
        call public_6eec8d0
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x194], 0xFFFFFFFF
        call public_6f15350
        jmp public_6eb86e0
/*FIXUP public_6eb86c3 : nop
        push offset public_6fb47d8 @0x6eb86c3*/
  FIXUP public_6eb86c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47d8
        call esi
        test al, al
        je public_6eb86e0
        mov esi, dword ptr ds : [ebx]
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        mov ecx, ebx
        call dword ptr ds : [esi+0x68]
        public_6eb86e0 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eb8541
        jmp public_6eb8909
/*FIXUP public_6eb86f5 : nop
        push offset public_6fb43a0 @0x6eb86f5*/
  FIXUP public_6eb86f5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb43a0
        mov ecx, ebp
        call esi
        test al, al
        je public_6eb876e
        lea ecx, ss:[esp+0xF0]
        call public_6f31430
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6fb3030]
        push ebp
        lea edx, ss:[esp+0xF4]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f31470
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x148], ecx
        add esp, 0xC
        lea edx, ss:[esp+0x13C]
        mov ecx, 0x13
        lea esi, ss:[esp+0xF0]
        lea edi, ss:[esp+0x140]
        push edx
        lea eax, ss:[esp+0xB8]
        rep movsd
        push eax
        lea ecx, ds:[ebx+0x184]
        call public_6ed04c0
        jmp public_6eb8909
/*FIXUP public_6eb876e : nop
        push offset public_6fb47d0 @0x6eb876e*/
  FIXUP public_6eb876e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47d0
        mov ecx, ebp
        call esi
        test al, al
        je public_6eb8909
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6eb8909
        nop 
/*FIXUP public_6eb8790 : nop
        push offset public_6fb47c8 @0x6eb8790*/
  FIXUP public_6eb8790 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47c8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6eb88f9
        mov esi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb4708 @0x6eb87ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        push 1
        mov ecx, ebp
        call esi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6eb88f9
        xor edi, edi
        push edi
        mov ecx, ebp
        call esi
        mov esi, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x74], 0
        jne public_6eb87e9
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x74], 0
        jmp public_6eb881e
        public_6eb87e9 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6eb8801
        mov eax, 0x2F
        public_6eb8801 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x74]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x74], 0
        mov dword ptr ss : [esp+0x70], eax
        public_6eb881e : nop
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, ebx
        call public_6f155f0
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6eb88f9
        mov edi, dword ptr ds : [ebx+0x320]
        mov eax, dword ptr ds : [ebx+0x324]
        cmp edi, eax
        lea esi, ds:[ebx+0x31C]
        je public_6eb886e
        lea esp, ss:[esp]
        public_6eb8850 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6eb8ef0
        test al, al
        jne public_6eb88bc
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x34
        cmp edi, eax
        jne public_6eb8850
        mov ebx, dword ptr ss : [esp+0x18]
        public_6eb886e : nop
        mov edi, dword ptr ds : [esi+8]
        public_6eb8871 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x2C], edi
        jne public_6eb88e1
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov ecx, esi
        call public_6ed1d30
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb88d3
        public_6eb8891 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, edi
        call public_6eb8ef0
        test al, al
        jne public_6eb88c2
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x34
        cmp edi, eax
        jne public_6eb8891
        mov ebx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov dword ptr ss : [esp+0x38], esi
        mov byte ptr ss : [esp+0x3C], 1
        jmp public_6eb88f9
        public_6eb88bc : nop
        mov ebx, dword ptr ss : [esp+0x18]
        jmp public_6eb8871
        public_6eb88c2 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov esi, edi
        mov dword ptr ss : [esp+0x38], esi
        mov byte ptr ss : [esp+0x3C], 1
        jmp public_6eb88f9
        public_6eb88d3 : nop
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x38], esi
        mov byte ptr ss : [esp+0x3C], 1
        jmp public_6eb88f9
        public_6eb88e1 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        public_6eb88f9 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eb8790
        public_6eb8909 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6eb8510
        pop edi
        pop esi
        public_6eb891b : nop
        mov ecx, dword ptr ss : [esp+0x184]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x188
        ret 4
        UNREACHABLE_TRAP(0x6eb84c0)
    }
}

#undef public_6eb8510
#undef public_6eb8541
#undef public_6eb8699
#undef public_6eb86c3
#undef public_6eb86e0
#undef public_6eb86f5
#undef public_6eb876e
#undef public_6eb8790
#undef public_6eb87e9
#undef public_6eb8801
#undef public_6eb881e
#undef public_6eb8850
#undef public_6eb886e
#undef public_6eb8871
#undef public_6eb8891
#undef public_6eb88bc
#undef public_6eb88c2
#undef public_6eb88d3
#undef public_6eb88e1
#undef public_6eb88f9
#undef public_6eb8909
#undef public_6eb891b
