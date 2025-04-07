#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f50880);
CLANG_FORWARD_PROC_SYMBOL(public_6f53590);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f55a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf385);

#define public_6f50905 _public_6f50905
#define public_6f5095d _public_6f5095d
#define public_6f50969 _public_6f50969
#define public_6f509c6 _public_6f509c6
#define public_6f509e0 _public_6f509e0
#define public_6f50a39 _public_6f50a39
#define public_6f50a5f _public_6f50a5f
#define public_6f50a8a _public_6f50a8a
#define public_6f50aa0 _public_6f50aa0
#define public_6f50ab6 _public_6f50ab6
#define public_6f50aca _public_6f50aca
#define public_6f50ada _public_6f50ada
#define public_6f50aec _public_6f50aec
#define public_6f50ba2 _public_6f50ba2
#define public_6f50bb7 _public_6f50bb7

PROC_DECLARE(0x6f50880, internal_6f50880, public_6f50880);
extern "C" NAKED register_t __cdecl internal_6f50880()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf385 @0x6f50888*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf385
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15CC
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_6fb300c]
        mov ecx, dword ptr ss : [esp+0x15E0]
        lea eax, ss:[esp+0x68]
        push eax
        xor ebx, ebx
        push ecx
        mov dword ptr ss : [esp+0x15E0], ebx
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f50bb7
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x30], offset public_6fbb928
        call dword ptr ds : [public_6fb34a0]
        add esp, 4
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f50bb7
        push ebp
        mov ebp, dword ptr ds : [public_6fb3294]
        push esi
        push edi
/*FIXUP public_6f50905 : nop
        push offset public_6fbb914 @0x6f50905*/
  FIXUP public_6f50905 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb914
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f50ba2
        mov al, byte ptr ss : [esp+0x33]
        xor edx, edx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], edx
        mov byte ptr ss : [esp+0x10], al
        xor ecx, ecx
        xor eax, eax
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x2C], edx
        cmp ecx, ebx
        mov edx, dword ptr ss : [esp+0x3C]
        mov byte ptr ss : [esp+0x15E4], 1
        mov edi, edx
        je public_6f5095d
        sub eax, ecx
        sar eax, 3
        public_6f5095d : nop
        cmp eax, edx
        jae public_6f509c6
        cmp edx, ebx
        mov eax, edx
        jge public_6f50969
        xor eax, eax
        public_6f50969 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov esi, eax
        push esi
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6ed2700
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6fa8fe0
        lea eax, ds:[esi+edi*8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eae300
        lea ecx, ds:[esi+eax*8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], esi
        public_6f509c6 : nop
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f50aec
        public_6f509e0 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fbb904 @0x6f509e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb904
        lea ecx, ss:[esp+0x78]
        call esi
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_6f50a39
        push ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        lea edx, ss:[esp+0x44]
        push edx
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        push 1
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x40]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f96770
        jmp public_6f50ada
/*FIXUP public_6f50a39 : nop
        push offset public_6fbb8fc @0x6f50a39*/
  FIXUP public_6f50a39 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb8fc
        call esi
        test al, al
        lea ecx, ss:[esp+0x74]
        je public_6f50a5f
        call dword ptr ds : [public_6fb3054]
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        jmp public_6f50ada
/*FIXUP public_6f50a5f : nop
        push offset public_6fbb8f4 @0x6f50a5f*/
  FIXUP public_6f50a5f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb8f4
        call esi
        test al, al
        je public_6f50ada
        push ebx
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
/*FIXUP push offset public_6fbb8e0 @0x6f50a77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb8e0
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f50a8a
        xor esi, esi
        jmp public_6f50aca
/*FIXUP public_6f50a8a : nop
        push offset public_6fbb8c8 @0x6f50a8a*/
  FIXUP public_6f50a8a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb8c8
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f50aa0
        mov esi, 1
        jmp public_6f50aca
/*FIXUP public_6f50aa0 : nop
        push offset public_6fbb8b0 @0x6f50aa0*/
  FIXUP public_6f50aa0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb8b0
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f50ab6
        mov esi, 2
        jmp public_6f50aca
/*FIXUP public_6f50ab6 : nop
        push offset public_6fbb898 @0x6f50ab6*/
  FIXUP public_6f50ab6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb898
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f50ada
        mov esi, 3
        public_6f50aca : nop
        push 1
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+esi*4+0x20]
        public_6f50ada : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f509e0
        public_6f50aec : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        push ecx
        call public_6f55a00
        mov edx, dword ptr ss : [esp+0x40]
        add esp, 0xC
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], edx
        call public_6f55880
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, offset public_6fd0c90
        mov byte ptr ss : [esp+0x15EC], 2
        call public_6f53590
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x50]
        push ecx
        push edx
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x15EC], 1
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x50]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov byte ptr ss : [esp+0x15EC], bl
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        public_6f50ba2 : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f50905
        pop edi
        pop esi
        pop ebp
        public_6f50bb7 : nop
        lea edx, ss:[esp+0x1490]
        mov dword ptr ss : [esp+0x15D8], 3
        mov dword ptr ss : [esp+0x34], edx
        lea ecx, ss:[esp+0x1490]
        mov byte ptr ss : [esp+0x15D8], 4
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x1494]
        mov byte ptr ss : [esp+0x15DC], 3
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x15D8], 5
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x15DC], 0xFFFFFFFF
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x15D0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15D8
        ret 
        UNREACHABLE_TRAP(0x6f50880)
    }
}

#undef public_6f50905
#undef public_6f5095d
#undef public_6f50969
#undef public_6f509c6
#undef public_6f509e0
#undef public_6f50a39
#undef public_6f50a5f
#undef public_6f50a8a
#undef public_6f50aa0
#undef public_6f50ab6
#undef public_6f50aca
#undef public_6f50ada
#undef public_6f50aec
#undef public_6f50ba2
#undef public_6f50bb7
