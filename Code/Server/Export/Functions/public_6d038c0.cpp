#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d038c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d03cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04140);
CLANG_FORWARD_PROC_SYMBOL(public_6d05620);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6103d);

#define public_6d03953 _public_6d03953
#define public_6d03992 _public_6d03992
#define public_6d039c5 _public_6d039c5
#define public_6d039db _public_6d039db
#define public_6d03a01 _public_6d03a01
#define public_6d03a12 _public_6d03a12
#define public_6d03a15 _public_6d03a15
#define public_6d03a2a _public_6d03a2a
#define public_6d03a87 _public_6d03a87
#define public_6d03a89 _public_6d03a89
#define public_6d03ac9 _public_6d03ac9
#define public_6d03b0c _public_6d03b0c
#define public_6d03b2d _public_6d03b2d
#define public_6d03b42 _public_6d03b42
#define public_6d03bb1 _public_6d03bb1
#define public_6d03bc2 _public_6d03bc2
#define public_6d03bd7 _public_6d03bd7
#define public_6d03bfc _public_6d03bfc
#define public_6d03c6b _public_6d03c6b
#define public_6d03c7c _public_6d03c7c
#define public_6d03c91 _public_6d03c91
#define public_6d03cb0 _public_6d03cb0

PROC_DECLARE(0x6d038c0, internal_6d038c0, public_6d038c0);
extern "C" NAKED register_t __cdecl internal_6d038c0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6d6103d @0x6d038c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6103d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x17C8
        mov dword ptr fs : [0], esp
        call public_6d60160
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x270]
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [public_6d644f0]
        mov eax, dword ptr ds : [public_6d64a58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x17E8]
        push ecx
        push edx
        lea eax, ss:[esp+0x174]
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x17EC], ebx
        call dword ptr ds : [public_6d6463c]
        add esp, 0xC
        push ebx
        lea ecx, ss:[esp+0x170]
        push ecx
        lea ecx, ss:[esp+0x278]
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d03b42
        lea ecx, ss:[esp+0x270]
        call dword ptr ds : [public_6d64540]
        test al, al
        je public_6d03b42
/*FIXUP public_6d03953 : nop
        push offset public_6d677c0 @0x6d03953*/
  FIXUP public_6d03953 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677c0
        lea ecx, ss:[esp+0x274]
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6d03b2d
        lea ecx, ss:[esp+0x270]
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x6C], bl
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6d03a2a
        public_6d03992 : nop
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP push offset public_6d677b8 @0x6d03998*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677b8
        lea ecx, ss:[esp+0x274]
        call esi
        test al, al
        lea ecx, ss:[esp+0x270]
        je public_6d039db
        call dword ptr ds : [public_6d64564]
        cmp eax, ebx
        jne public_6d039c5
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x6C], bl
        jmp public_6d03a15
        public_6d039c5 : nop
        push eax
        lea edx, ss:[esp+0x70]
        push 0x100
        push edx
        call public_6d03cf0
        mov dword ptr ss : [esp+0x74], eax
        jmp public_6d03a12
/*FIXUP public_6d039db : nop
        push offset public_6d677b0 @0x6d039db*/
  FIXUP public_6d039db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677b0
        call esi
        test al, al
        je public_6d03a15
        lea ecx, ss:[esp+0x270]
        call dword ptr ds : [public_6d64564]
        cmp eax, ebx
        jne public_6d03a01
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        jmp public_6d03a15
        public_6d03a01 : nop
        push eax
        lea eax, ss:[esp+0x2C]
        push 0x40
        push eax
        call public_6d03cf0
        mov dword ptr ss : [esp+0x30], eax
        public_6d03a12 : nop
        add esp, 0xC
        public_6d03a15 : nop
        lea ecx, ss:[esp+0x270]
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6d03992
        public_6d03a2a : nop
        cmp dword ptr ss : [esp+0x68], ebx
        je public_6d03b2d
        cmp dword ptr ss : [esp+0x24], ebx
        je public_6d03b2d
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        call dword ptr ds : [public_6d64638]
        push 0x20
        mov edi, eax
        call public_6d60012
        mov esi, eax
        add esp, 8
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x17E0], 1
        je public_6d03a87
        lea edx, ss:[esp+0x12]
        push edx
        push ebx
        lea eax, ss:[esp+0x1B]
        lea ecx, ds:[esi+4]
        push eax
        call public_6d05620
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], 0xFA
        jmp public_6d03a89
        public_6d03a87 : nop
        xor esi, esi
        public_6d03a89 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[ebp+4]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov byte ptr ss : [esp+0x17EC], bl
        mov dword ptr ss : [esp+0x24], esi
        call public_6d05d90
        cmp edi, ebx
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi], edi
        je public_6d03ac9
        mov ecx, edi
        call dword ptr ds : [public_6d64624]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x44]
        mov dword ptr ds : [esi+0x18], eax
        public_6d03ac9 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        lea edx, ss:[esp+0x28]
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x10]
        push edx
        push eax
        call dword ptr ds : [public_6d64504]
        mov ebp, eax
        add esp, 8
        cmp ebp, ebx
        jne public_6d03b0c
        mov edx, dword ptr ds : [public_6d64a44]
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0xA1
/*FIXUP push offset public_6d6777c @0x6d03af7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6777c
        mov eax, 0x100001
/*FIXUP push offset public_6d6773c @0x6d03b01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6773c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d03b0c : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6d64634]
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, esi
        call public_6d04140
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d03b2d : nop
        lea ecx, ss:[esp+0x270]
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6d03953
        public_6d03b42 : nop
        lea edx, ss:[esp+0x1698]
        mov dword ptr ss : [esp+0x17E0], 2
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x16A0]
        mov byte ptr ss : [esp+0x17E8], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x16A8], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6d03bd7
        cmp dword ptr ss : [esp+0x16AC], ebx
        je public_6d03bc2
        mov eax, dword ptr ss : [esp+0x16B0]
        cmp eax, ebx
        je public_6d03bb1
        push eax
        call ebp
        mov dword ptr ss : [esp+0x16B0], ebx
        mov dword ptr ss : [esp+0x16B4], ebx
        public_6d03bb1 : nop
        mov edx, dword ptr ss : [esp+0x16AC]
        push edx
        call esi
        mov dword ptr ss : [esp+0x16AC], ebx
        public_6d03bc2 : nop
        mov eax, dword ptr ss : [esp+0x16A8]
        push eax
        call esi
        mov dword ptr ss : [esp+0x16A8], 0xFFFFFFFF
        public_6d03bd7 : nop
        mov eax, dword ptr ss : [esp+0x16B0]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_6d64c94]
        je public_6d03bfc
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x16B0], ebx
        mov dword ptr ss : [esp+0x16B4], ebx
        public_6d03bfc : nop
        push 1
        lea ecx, ss:[esp+0x169C]
        mov dword ptr ss : [esp+0x16BC], ebx
        mov byte ptr ss : [esp+0x17E4], 2
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x278]
        mov dword ptr ss : [esp+0x17E8], 4
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x280], 0xFFFFFFFF
        je public_6d03c91
        cmp dword ptr ss : [esp+0x284], ebx
        je public_6d03c7c
        mov eax, dword ptr ss : [esp+0x288]
        cmp eax, ebx
        je public_6d03c6b
        push eax
        call ebp
        mov dword ptr ss : [esp+0x288], ebx
        mov dword ptr ss : [esp+0x28C], ebx
        public_6d03c6b : nop
        mov eax, dword ptr ss : [esp+0x284]
        push eax
        call esi
        mov dword ptr ss : [esp+0x284], ebx
        public_6d03c7c : nop
        mov ecx, dword ptr ss : [esp+0x280]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x280], 0xFFFFFFFF
        public_6d03c91 : nop
        mov eax, dword ptr ss : [esp+0x288]
        cmp eax, ebx
        je public_6d03cb0
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x288], ebx
        mov dword ptr ss : [esp+0x28C], ebx
        public_6d03cb0 : nop
        push 1
        lea ecx, ss:[esp+0x274]
        mov dword ptr ss : [esp+0x294], ebx
        mov dword ptr ss : [esp+0x17E4], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ss : [esp+0x17D8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x17D4
        ret 4
        UNREACHABLE_TRAP(0x6d038c0)
    }
}

#undef public_6d03953
#undef public_6d03992
#undef public_6d039c5
#undef public_6d039db
#undef public_6d03a01
#undef public_6d03a12
#undef public_6d03a15
#undef public_6d03a2a
#undef public_6d03a87
#undef public_6d03a89
#undef public_6d03ac9
#undef public_6d03b0c
#undef public_6d03b2d
#undef public_6d03b42
#undef public_6d03bb1
#undef public_6d03bc2
#undef public_6d03bd7
#undef public_6d03bfc
#undef public_6d03c6b
#undef public_6d03c7c
#undef public_6d03c91
#undef public_6d03cb0
