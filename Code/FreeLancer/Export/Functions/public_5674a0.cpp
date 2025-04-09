#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b0d0);
CLANG_FORWARD_PROC_SYMBOL(public_46b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5684a0);
CLANG_FORWARD_PROC_SYMBOL(public_5687c0);
CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_568810);
CLANG_FORWARD_PROC_SYMBOL(public_568830);
CLANG_FORWARD_PROC_SYMBOL(public_568880);
CLANG_FORWARD_PROC_SYMBOL(public_568d10);
CLANG_FORWARD_PROC_SYMBOL(public_575950);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57db50);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_58c470);
CLANG_FORWARD_PROC_SYMBOL(public_58cb80);
CLANG_FORWARD_PROC_SYMBOL(public_58cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_58cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_58d250);
CLANG_FORWARD_PROC_SYMBOL(public_58d560);
CLANG_FORWARD_PROC_SYMBOL(public_58d570);
CLANG_FORWARD_PROC_SYMBOL(public_58d590);
CLANG_FORWARD_PROC_SYMBOL(public_58d5d0);
CLANG_FORWARD_PROC_SYMBOL(public_58d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_58d960);
CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_595f30);
CLANG_FORWARD_PROC_SYMBOL(public_595f50);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aade0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2400);

#define public_567630 _public_567630
#define public_56767d _public_56767d
#define public_567765 _public_567765
#define public_56779c _public_56779c
#define public_5677df _public_5677df
#define public_567881 _public_567881
#define public_56788c _public_56788c
#define public_5678bd _public_5678bd
#define public_5678c8 _public_5678c8
#define public_567a9c _public_567a9c
#define public_567a9f _public_567a9f
#define public_567b19 _public_567b19
#define public_567b31 _public_567b31
#define public_567b34 _public_567b34
#define public_567b70 _public_567b70
#define public_567b87 _public_567b87
#define public_567c50 _public_567c50
#define public_567c84 _public_567c84
#define public_567de0 _public_567de0
#define public_567f85 _public_567f85
#define public_567ff2 _public_567ff2
#define public_56818c _public_56818c
#define public_5681fd _public_5681fd
#define public_5682b9 _public_5682b9
#define public_568325 _public_568325
#define public_56834f _public_56834f
#define public_56837b _public_56837b
#define public_56838e _public_56838e

PROC_DECLARE(0x5674a0, internal_5674a0, public_5674a0);
extern "C" NAKED register_t __cdecl internal_5674a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c2400 @0x5674a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2400
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x154
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_591cd0
        lea edi, ds:[esi+0x7C]
        mov dword ptr ds : [esi+0x2B4], ebx
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e29a4 @0x5674d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29a4
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x2B8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2a34 @0x5674eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2a34
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2BC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2a24 @0x5674fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2a24
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x2C0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2a14 @0x56750f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2a14
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2C4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2a04 @0x567521*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2a04
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x2C8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e1afc @0x567533*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1afc
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2CC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e29f8 @0x567545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29f8
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x2D0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e29e8 @0x567557*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29e8
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2D4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e29e0 @0x567569*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29e0
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x2D8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e29cc @0x56757b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29cc
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2DC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e1ac8 @0x56758d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1ac8
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x2E0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e29bc @0x56759f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29bc
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2E4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e29b4 @0x5675b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29b4
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        push 0xF
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0x2E8], eax
        mov byte ptr ds : [esi+0x599], bl
        call public_5760d0
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 3
        call public_58d5e0
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2B8]
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc64 @0x5675fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc64
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x2B8]
        mov dword ptr ds : [esi+0x388], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc40 @0x567618*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc40
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov dword ptr ds : [esi+0x38C], eax
        xor ebp, ebp
        lea edi, ds:[esi+0x2F0]
        public_567630 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_46c860
        mov ecx, dword ptr ds : [ebp*4+public_5e25c8]
        push edi
        push ecx
        call public_57da40
        push edi
        call public_57eb40
        add esp, 0xC
        push ebp
        mov byte ptr ds : [esi+ebp+0x394], 1
        mov ecx, dword ptr ds : [esi+0x2B8]
        push ebx
        call public_58d960
        cmp eax, ebx
        je public_56767d
        mov edx, dword ptr ds : [ebp*4+public_5e25dc]
        mov dword ptr ds : [eax+4], edx
        public_56767d : nop
        inc ebp
        add edi, 0xC
        cmp ebp, 5
        jl public_567630
        mov eax, dword ptr ds : [esi+0x33C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x338]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x729
        call public_57da40
        mov eax, dword ptr ds : [esi+0x348]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x344]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x744
        call public_57da40
        mov eax, dword ptr ds : [esi+0x354]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x350]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x750
        call public_57da40
        mov eax, dword ptr ds : [esi+0x360]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x35C]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x74F
        call public_57da40
        mov eax, dword ptr ds : [esi+0x330]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x32C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x6004E
        call public_57da40
        add esp, 8
        test al, al
        je public_567765
        push edi
        call public_57eb40
        add esp, 4
        public_567765 : nop
        mov eax, dword ptr ds : [esi+0x378]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x374]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x60007
        call public_57da40
        add esp, 8
        test al, al
        je public_56779c
        push edi
        call public_57eb40
        add esp, 4
        public_56779c : nop
        mov ebp, dword ptr ds : [esi+0x36C]
        lea edi, ds:[esi+0x368]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x6007C
        call public_57da40
        add esp, 8
        test al, al
        je public_5677df
        push edi
        call public_57eb40
        add esp, 4
        public_5677df : nop
        mov ecx, dword ptr ds : [esi+0x2B8]
/*FIXUP push offset public_679bb4 @0x5677e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_58d560
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 0x3B83126F
        call public_58d570
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 1
        push ebx
        call public_58d590
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 1
        call public_58d5d0
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 1
        call public_58cbb0
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 1
        push ebx
        push ebx
        push ebx
        call public_58cb80
        mov ecx, dword ptr ds : [esi+0x2B8]
        push ebx
        call public_58cbe0
        mov ecx, dword ptr ds : [esi+0x2BC]
/*FIXUP push offset public_679bb4 @0x567849*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
/*FIXUP push offset public_679bb4 @0x56784e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_595f30
        mov ecx, dword ptr ds : [esi+0x2BC]
/*FIXUP push offset public_679bb4 @0x56785e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
/*FIXUP push offset public_679bb4 @0x567863*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_595f50
        mov eax, dword ptr ds : [esi+0x2B8]
        mov ecx, dword ptr ds : [eax+0x4A4]
        cmp ecx, ebx
        jne public_567881
        xor eax, eax
        jmp public_56788c
        public_567881 : nop
        mov eax, dword ptr ds : [eax+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_56788c : nop
        mov ecx, dword ptr ds : [esi+0x2BC]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        call public_595d60
        mov eax, dword ptr ds : [esi+0x2B8]
        mov ecx, dword ptr ds : [eax+0x4A4]
        cmp ecx, ebx
        jne public_5678bd
        xor eax, eax
        jmp public_5678c8
        public_5678bd : nop
        mov eax, dword ptr ds : [eax+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_5678c8 : nop
        mov ecx, dword ptr ds : [esi+0x2BC]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [esi+0x2BC]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0x2BC]
        push ebx
        call public_595db0
        mov ecx, dword ptr ds : [esi+0x2E4]
        push 1
        call public_5799f0
        mov ecx, dword ptr ds : [esi+0x2E8]
        push 1
        call public_5799f0
        mov dword ptr ds : [esi+0x2EC], ebx
        call public_46b0e0
        cmp eax, dword ptr ds : [esi+0x2EC]
        mov edi, dword ptr ds : [public_5c62b8]
        mov ebp, dword ptr ds : [public_5c62b4]
        je public_567a9c
        mov ecx, dword ptr ds : [esi+0x2E8]
        mov dword ptr ds : [esi+0x2EC], eax
        call public_57b370
        push 1
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x170], ebx
        call public_57b470
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call dword ptr ds : [public_5c62bc]
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x170], 1
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call ebp
        lea eax, ds:[esi+0x374]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x170], 2
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [esi+0x2E8]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x170], 3
        call public_57b470
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x16C], ebx
        call dword ptr ds : [public_5c62d4]
        push 0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x170], 4
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call dword ptr ds : [public_5c62bc]
        push 0x76EC
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x170], 5
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x2E8]
        mov dword ptr ss : [esp+0x18], eax
        call public_46b0d0
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        call public_57b3e0
        jmp public_567a9f
        public_567a9c : nop
        or ebx, 0xFFFFFFFF
        public_567a9f : nop
        mov byte ptr ss : [esp+0x23], 0
        mov dword ptr ss : [esp+0x44], 0
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x16C], 6
        call public_5687e0
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+ecx*4+0x48], 0x80000001
        inc dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [public_6143b0]
        push 0x20019
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_568830
        test eax, eax
        je public_567b34
        push 0x20019
/*FIXUP push offset public_5e29a4 @0x567aee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29a4
        lea ecx, ss:[esp+0x4C]
        call public_568830
        test eax, eax
        je public_567b34
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ds:[esi+0x5A0]
        call public_58c470
        test al, al
        je public_567b19
        mov byte ptr ss : [esp+0x23], 1
        public_567b19 : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        jle public_567b31
        lea ecx, ss:[esp+0x44]
        call public_5687c0
        push eax
        call dword ptr ds : [public_5c6000]
        public_567b31 : nop
        or ebx, 0xFFFFFFFF
        public_567b34 : nop
        lea ecx, ss:[esp+0x44]
        call public_568810
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x16C], ebx
        call public_5687e0
        mov al, byte ptr ss : [esp+0x23]
        test al, al
        jne public_567b87
        mov ecx, dword ptr ds : [esi+0x2B8]
        lea edx, ds:[esi+0x5A0]
        push edx
        call public_58d0f0
        xor eax, eax
        lea esp, ss:[esp]
        public_567b70 : nop
        mov edx, dword ptr ds : [eax+public_5e25f0]
        mov ecx, dword ptr ds : [esi+0x5B4]
        mov dword ptr ds : [ecx+eax], edx
        add eax, 4
        cmp eax, 0x14
        jl public_567b70
        public_567b87 : nop
        mov ecx, dword ptr ds : [esi+0x2B8]
        lea eax, ds:[esi+0x5A0]
        push eax
        call public_58d250
        mov ecx, dword ptr ds : [esi+0x2E0]
        call public_57b370
        push 0x1DF5
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E0]
        push eax
        mov dword ptr ss : [esp+0x170], 7
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call ebp
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x32C]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x2E0]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x170], 8
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x16C], ebx
        call dword ptr ds : [public_5c62c8]
        lea ecx, ds:[esi+0x399]
/*FIXUP push offset public_67bd40 @0x567c19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        call dword ptr ds : [public_5c63cc]
        mov eax, dword ptr ds : [esi+0x2B8]
        mov ecx, dword ptr ds : [eax+0x4B4]
        test ecx, ecx
        je public_567c84
        mov eax, dword ptr ds : [eax+0x4B8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 5
        jne public_567c84
        lea eax, ds:[esi+0x2F0]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], eax
        public_567c50 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push 0
        push 0
        push eax
        push ebx
        push 0
        mov ecx, esi
        call public_568880
        mov ecx, dword ptr ss : [esp+0x18]
        inc ebx
        add ecx, 0xC
        cmp ebx, 5
        mov dword ptr ss : [esp+0x18], ecx
        jb public_567c50
        mov ecx, dword ptr ds : [esi+0x2B8]
        push 0
        call public_58d0b0
        mov byte ptr ds : [eax], 0
        public_567c84 : nop
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov ecx, offset public_67e7b8
        call public_5684a0
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [esi+0x2E4]
        mov ebx, 9
        mov dword ptr ss : [esp+0x16C], ebx
        call public_57b370
        push 1
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0xA
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62bc]
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0xB
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call ebp
        lea eax, ds:[esi+0x338]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0xC
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0xD
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62d4]
        push 0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0xE
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62bc]
        push 0x76EC
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0xF
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call ebp
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x48]
        test eax, eax
        jne public_567de0
        mov eax, dword ptr ds : [public_5c700c]
        public_567de0 : nop
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c62b0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x10
        call public_57b470
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62ac]
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x11
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62d4]
        push 1
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x12
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62bc]
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x13
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call ebp
        lea eax, ds:[esi+0x344]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x14
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x15
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62d4]
        push 0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x16
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call dword ptr ds : [public_5c62bc]
        push 0x76EC
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x17
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], bl
        call ebp
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62dc]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x5C]
        mov eax, dword ptr ds : [eax+0x58]
        test eax, eax
        mov byte ptr ss : [esp+0x16C], 0x18
        jne public_567f85
        mov eax, dword ptr ds : [public_5c700c]
        public_567f85 : nop
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        push ecx
        push eax
        call public_57db50
        mov ecx, dword ptr ds : [esi+0x2E4]
        add esp, 0x10
        lea eax, ss:[esp+0x24]
        push eax
        call public_57b3e0
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x19
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62d4]
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [eax+0x95]
        test cl, cl
        je public_567ff2
        mov cl, byte ptr ds : [eax+0x94]
        test cl, cl
        je public_5681fd
        public_567ff2 : nop
        push 1
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x1A
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62bc]
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x1B
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call ebp
        lea eax, ds:[esi+0x368]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x1C
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x1D
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62d4]
        push 0x76EC
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x1E
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call ebp
        push 0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x1F
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62bc]
        mov edi, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [edi+0x95]
        test al, al
        jne public_56818c
        lea eax, ds:[esi+0x35C]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x20
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x21
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62d4]
        public_56818c : nop
        mov al, byte ptr ds : [edi+0x94]
        test al, al
        je public_5681fd
        lea eax, ds:[esi+0x350]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x22
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62e0]
        mov ecx, dword ptr ds : [esi+0x2E4]
        push eax
        mov byte ptr ss : [esp+0x170], 0x23
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x16C], 0x18
        call dword ptr ds : [public_5c62d4]
        public_5681fd : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x16C], bl
        call public_46ba90
        push 1
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x170], 0x28
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x130]
        mov byte ptr ss : [esp+0x170], 0x27
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x170], 0x26
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x110]
        mov byte ptr ss : [esp+0x170], 0x25
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0xE0]
        mov byte ptr ss : [esp+0x16C], 0x24
        call public_4de730
        or edi, 0xFFFFFFFF
        push 1
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0x170], edi
        call dword ptr ds : [public_5c6fb8]
        mov ecx, offset public_67e7b8
        call public_5aade0
        mov ecx, offset public_67e7b8
        call public_5aa680
        cmp eax, 1
        jne public_5682b9
        mov ecx, esi
        call public_568d10
        public_5682b9 : nop
        mov eax, dword ptr ds : [esi+0x2C4]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x2C0]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x2C8]
        or byte ptr ds : [eax+0x6C], 3
        lea eax, ds:[esi+0x399]
/*FIXUP push offset public_67bd40 @0x5682dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        push eax
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        mov eax, dword ptr ds : [esi+0x2C0]
        mov dl, byte ptr ds : [eax+0x6C]
        mov bl, 0xFE
        je public_568325
        and dl, bl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x2C8]
        and byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x2C0]
        mov byte ptr ds : [ecx+0x498], 0
        mov edx, dword ptr ds : [esi+0x2C8]
        mov byte ptr ds : [edx+0x498], 0
        jmp public_56834f
        public_568325 : nop
        or dl, 1
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x2C8]
        or byte ptr ds : [eax+0x6C], 1
        mov eax, dword ptr ds : [esi+0x2C0]
        mov byte ptr ds : [eax+0x498], 1
        mov ecx, dword ptr ds : [esi+0x2C8]
        mov byte ptr ds : [ecx+0x498], 1
        public_56834f : nop
        mov ecx, offset public_67e96c
        call public_575950
        cmp eax, 5
        mov eax, dword ptr ds : [esi+0x2C4]
        mov cl, byte ptr ds : [eax+0x6C]
        jl public_56837b
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov edx, dword ptr ds : [esi+0x2C4]
        mov byte ptr ds : [edx+0x498], 0
        jmp public_56838e
        public_56837b : nop
        or cl, 1
        mov byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2C4]
        mov byte ptr ds : [eax+0x498], 1
        public_56838e : nop
        mov ecx, dword ptr ds : [esi+0x2C0]
        push 1
        mov dword ptr ds : [esi+0x5E8], 0
        mov dword ptr ds : [esi+0x5EC], 0xBFF00000
        mov byte ptr ds : [esi+0x5F0], 0
        mov dword ptr ds : [esi+0x5F4], edi
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2C4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2C8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2CC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2D0]
        push 1
        call public_579a90
        mov eax, dword ptr ds : [esi+0x2E4]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x2E8]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2E0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2B8]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2BC]
        and byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0x2D4]
        add ecx, 0x60
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x5C0]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [esi+0x2D8]
        add edx, 0x60
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x5CC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x2DC]
        add eax, 0x60
        mov ecx, dword ptr ds : [eax]
        add esi, 0x5D8
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x164]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x160
        ret 8
        UNREACHABLE_TRAP(0x5674a0)
    }
}

#undef public_567630
#undef public_56767d
#undef public_567765
#undef public_56779c
#undef public_5677df
#undef public_567881
#undef public_56788c
#undef public_5678bd
#undef public_5678c8
#undef public_567a9c
#undef public_567a9f
#undef public_567b19
#undef public_567b31
#undef public_567b34
#undef public_567b70
#undef public_567b87
#undef public_567c50
#undef public_567c84
#undef public_567de0
#undef public_567f85
#undef public_567ff2
#undef public_56818c
#undef public_5681fd
#undef public_5682b9
#undef public_568325
#undef public_56834f
#undef public_56837b
#undef public_56838e
