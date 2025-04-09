#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442200);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_479d10);
CLANG_FORWARD_PROC_SYMBOL(public_47e270);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47e920);
CLANG_FORWARD_PROC_SYMBOL(public_47eab0);
CLANG_FORWARD_PROC_SYMBOL(public_47eea0);
CLANG_FORWARD_PROC_SYMBOL(public_47f240);
CLANG_FORWARD_PROC_SYMBOL(public_482120);
CLANG_FORWARD_PROC_SYMBOL(public_483ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c6430);
CLANG_FORWARD_PROC_SYMBOL(public_4c64b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6530);
CLANG_FORWARD_PROC_SYMBOL(public_4c6910);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_585e20);
CLANG_FORWARD_PROC_SYMBOL(public_586560);
CLANG_FORWARD_PROC_SYMBOL(public_586800);

#define public_4822c4 _public_4822c4
#define public_4822dd _public_4822dd
#define public_4822fe _public_4822fe
#define public_48237a _public_48237a
#define public_48237b _public_48237b
#define public_4823b9 _public_4823b9
#define public_4823f7 _public_4823f7
#define public_482449 _public_482449
#define public_4824a0 _public_4824a0
#define public_4824a1 _public_4824a1
#define public_4824ff _public_4824ff
#define public_482559 _public_482559
#define public_482578 _public_482578
#define public_48259c _public_48259c
#define public_4825d6 _public_4825d6
#define public_4825fc _public_4825fc
#define public_482633 _public_482633
#define public_48263b _public_48263b
#define public_482641 _public_482641
#define public_48267c _public_48267c
#define public_48269e _public_48269e
#define public_4826bb _public_4826bb
#define public_4826de _public_4826de
#define public_48270a _public_48270a
#define public_48272b _public_48272b
#define public_48275f _public_48275f
#define public_4827c8 _public_4827c8
#define public_48280d _public_48280d
#define public_482821 _public_482821
#define public_48284c _public_48284c
#define public_48285e _public_48285e
#define public_4828ab _public_4828ab
#define public_4828b7 _public_4828b7
#define public_4828c3 _public_4828c3
#define public_4828d3 _public_4828d3
#define public_4828d7 _public_4828d7
#define public_4828de _public_4828de
#define public_482945 _public_482945
#define public_482966 _public_482966
#define public_482992 _public_482992
#define public_4829ca _public_4829ca
#define public_4829d8 _public_4829d8
#define public_482a0c _public_482a0c
#define public_482a1d _public_482a1d
#define public_482a37 _public_482a37

PROC_DECLARE(0x4822a0, internal_4822a0, public_4822a0);
extern "C" NAKED register_t __cdecl internal_4822a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx-0x15]
        cmp eax, 0x30
        push edi
        ja public_482a37
/*FIXUP movzx eax, byte ptr ds : [eax+public_482a5c] @0x4822b6*/
/*FIXUP jmp dword ptr ds : [eax*4+public_482a40] @0x4822bd*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000acf3
  JMPTB mov eax, 0
  JMPTB public_4c0000000000acf3 : nop
        je public_4822dd
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000acef
  JMPTB mov eax, 1
  JMPTB public_4c0000000000acef : nop
        je public_4822fe
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000aceb
  JMPTB mov eax, 6
  JMPTB public_4c0000000000aceb : nop
        je public_482a37
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000ace7
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ace7 : nop
        je public_482a37
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000ace3
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ace3 : nop
        je public_482a37
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000acdf
  JMPTB mov eax, 2
  JMPTB public_4c0000000000acdf : nop
        je public_48269e
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000acdb
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acdb : nop
        je public_482a37
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000acd7
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acd7 : nop
        je public_482a37
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000acd3
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acd3 : nop
        je public_482a37
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000accf
  JMPTB mov eax, 6
  JMPTB public_4c0000000000accf : nop
        je public_482a37
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000accb
  JMPTB mov eax, 6
  JMPTB public_4c0000000000accb : nop
        je public_482a37
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000acc7
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acc7 : nop
        je public_482a37
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000acc3
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acc3 : nop
        je public_482a37
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000acbf
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acbf : nop
        je public_482a37
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000acbb
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acbb : nop
        je public_482a37
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000acb7
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acb7 : nop
        je public_482a37
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000acb3
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acb3 : nop
        je public_482a37
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000acaf
  JMPTB mov eax, 2
  JMPTB public_4c0000000000acaf : nop
        je public_48269e
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000acab
  JMPTB mov eax, 6
  JMPTB public_4c0000000000acab : nop
        je public_482a37
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000aca7
  JMPTB mov eax, 6
  JMPTB public_4c0000000000aca7 : nop
        je public_482a37
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000aca3
  JMPTB mov eax, 6
  JMPTB public_4c0000000000aca3 : nop
        je public_482a37
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000ac9f
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac9f : nop
        je public_482a37
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000ac9b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac9b : nop
        je public_482a37
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000ac97
  JMPTB mov eax, 3
  JMPTB public_4c0000000000ac97 : nop
        je public_4822c4
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000ac93
  JMPTB mov eax, 3
  JMPTB public_4c0000000000ac93 : nop
        je public_4822c4
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000ac8f
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac8f : nop
        je public_482a37
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000ac8b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac8b : nop
        je public_482a37
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000ac87
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac87 : nop
        je public_482a37
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000ac83
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac83 : nop
        je public_482a37
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000ac7f
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac7f : nop
        je public_482a37
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000ac7b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac7b : nop
        je public_482a37
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000ac77
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac77 : nop
        je public_482a37
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000ac73
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac73 : nop
        je public_482a37
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000ac6f
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac6f : nop
        je public_482a37
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000ac6b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac6b : nop
        je public_482a37
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000ac67
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac67 : nop
        je public_482a37
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000ac63
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac63 : nop
        je public_482a37
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000ac5f
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac5f : nop
        je public_482a37
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000ac5b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac5b : nop
        je public_482a37
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000ac57
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac57 : nop
        je public_482a37
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000ac53
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac53 : nop
        je public_482a37
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000ac4f
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ac4f : nop
        je public_482559
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000ac4b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac4b : nop
        je public_482a37
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000ac47
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac47 : nop
        je public_482a37
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000ac43
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac43 : nop
        je public_482a37
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000ac3f
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac3f : nop
        je public_482a37
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000ac3b
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac3b : nop
        je public_482a37
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000ac37
  JMPTB mov eax, 6
  JMPTB public_4c0000000000ac37 : nop
        je public_482a37
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000ac33
  JMPTB mov eax, 5
  JMPTB public_4c0000000000ac33 : nop
        je public_4825d6
  JMPTB int 3
        public_4822c4 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_479d10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_4822dd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0x330]
        call public_585e20
        push eax
        mov ecx, esi
        call public_47e270
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_4822fe : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        push ebx
        push edx
        call dword ptr ds : [public_5c6028]
        mov ecx, dword ptr ds : [esi+0x974]
        add esp, 8
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_482449
        call public_47e790
        test eax, eax
        je public_482449
        mov ecx, dword ptr ds : [esi+0x974]
        call public_47e790
        mov ebp, eax
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_482a37
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x330]
        lea edi, ds:[esi+0x330]
        push eax
        call public_586560
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_47e460
        add esp, 4
        sub eax, ebx
        je public_48237a
        sub eax, 2
        jne public_482a37
        push 1
        jmp public_48237b
        public_48237a : nop
        push ebx
        public_48237b : nop
        mov ecx, dword ptr ds : [edi]
        call public_586800
        cmp al, bl
        je public_482a37
        mov edx, dword ptr ss : [esp+0x1C]
        push 1
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        mov ecx, edi
        call public_4c6530
        test al, al
        je public_4823b9
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x974]
        push ebx
        push eax
        add ecx, 0x330
        call public_4c6430
        public_4823b9 : nop
        push 5
        push ebx
        or ebp, 0xFFFFFFFF
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0x3A4], ebp
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_4823f7
        mov dword ptr ds : [eax+0x4E8], ebx
        mov ecx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [ecx+0x4EC], ebx
        public_4823f7 : nop
        mov esi, dword ptr ds : [esi+0x974]
        push 5
        push ebx
        push ebx
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3A4], ebp
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_482a37
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [esi+0x360]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x4EC], ebx
        xor eax, eax
        pop ebx
        ret 0xC
        public_482449 : nop
        mov ecx, esi
        call public_47e790
        test eax, eax
        je public_482a37
        mov ecx, esi
        call public_47e790
        mov ebp, eax
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_482a37
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x330]
        lea edi, ds:[esi+0x330]
        push eax
        call public_586560
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_47e460
        add esp, 4
        sub eax, ebx
        je public_4824a0
        sub eax, 2
        jne public_482a37
        push 1
        jmp public_4824a1
        public_4824a0 : nop
        push ebx
        public_4824a1 : nop
        mov ecx, dword ptr ds : [edi]
        call public_586800
        cmp al, bl
        je public_482a37
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        mov ecx, edi
        call public_4c6910
        push 5
        push ebx
        or ebp, 0xFFFFFFFF
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0x3A4], ebp
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_4824ff
        mov dword ptr ds : [eax+0x4E8], ebx
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+0x4EC], ebx
        public_4824ff : nop
        mov esi, dword ptr ds : [esi+0x974]
        cmp esi, ebx
        je public_482a37
        push 5
        push ebx
        push ebx
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3A4], ebp
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_482a37
        mov dword ptr ds : [eax+0x4E8], ebx
        mov ecx, dword ptr ds : [esi+0x360]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+0x4EC], ebx
        xor eax, eax
        pop ebx
        ret 0xC
        public_482559 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x3D0]
        jne public_482578
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+0x3C4], edx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_482578 : nop
        cmp eax, dword ptr ds : [esi+0x9B8]
        jne public_482a37
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ds : [esi+0x988], eax
        jge public_48259c
        mov dword ptr ds : [esi+0x988], 0
        public_48259c : nop
        mov eax, dword ptr ds : [esi+0x988]
        push eax
        lea edi, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x4825a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call dword ptr ds : [public_5c70ec]
        mov esi, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_4825d6 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        jne public_4825fc
        mov esi, dword ptr ds : [esi+0x9B8]
        mov eax, dword ptr ds : [esi]
        push ebx
        push 1
        push 0x38
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_4825fc : nop
        lea ecx, ss:[esp+0x18]
        push ecx
/*FIXUP push offset public_5d0ec4 @0x482601*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        mov edi, 1
        push ebx
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c70fc]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        cmp eax, edi
        jl public_482633
        mov ecx, dword ptr ds : [esi+0x38C]
        cmp eax, ecx
        jg public_48263b
        mov dword ptr ds : [esi+0x988], eax
        jmp public_482641
        public_482633 : nop
        mov dword ptr ds : [esi+0x988], edi
        jmp public_482641
        public_48263b : nop
        mov dword ptr ds : [esi+0x988], ecx
        public_482641 : nop
        mov edx, dword ptr ds : [esi+0x988]
        push edx
        lea edi, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x48264e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call dword ptr ds : [public_5c70ec]
        push edi
        push ebx
        call dword ptr ds : [public_5c7200]
        add esp, 0x14
        test eax, eax
        je public_48267c
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        public_48267c : nop
        mov eax, dword ptr ds : [esi+0x988]
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_48269e : nop
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, dword ptr ds : [esi+0x4D8]
        jne public_4826bb
        call public_45a460
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_4826bb : nop
        cmp ebp, dword ptr ds : [esi+0x9EC]
        jne public_4826de
        call public_45a460
        push 7
        call public_442200
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_4826de : nop
        cmp ebp, dword ptr ds : [esi+0x9E0]
        jne public_48272b
        mov eax, dword ptr ds : [esi+0x974]
        test eax, eax
        je public_48272b
        call public_4c3e10
        test eax, eax
        jne public_48270a
        call public_45a460
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_48270a : nop
        mov al, byte ptr ds : [esi+0x98C]
        test al, al
        jne public_4828ab
        mov ecx, esi
        call public_483ae0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_48272b : nop
        cmp ebp, dword ptr ds : [esi+0x9B0]
        jne public_4828b7
        cmp dword ptr ds : [esi+0x978], 2
        mov eax, dword ptr ds : [esi+0x3A4]
        jne public_482821
        cmp eax, 0xFFFFFFFF
        je public_48275f
        mov ecx, dword ptr ds : [esi+0x974]
        call public_47e920
        jmp public_48285e
        public_48275f : nop
        mov edi, dword ptr ds : [esi+0x974]
        mov ecx, edi
        call public_47e790
        mov ebp, eax
        test ebp, ebp
        je public_48285e
        mov eax, dword ptr ds : [edi+0x360]
        test eax, eax
        je public_48285e
        mov ebx, dword ptr ds : [eax+0x988]
        test ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_48285e
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6390]
        mov ecx, dword ptr ds : [edi+0x360]
        push 1
        push ebx
        push ebp
        add ecx, 0x330
        call public_4c64b0
        test al, al
        je public_4827c8
        mov ecx, ebx
        push ecx
        push ebp
        lea ecx, ds:[edi+0x330]
        call public_4c6430
        public_4827c8 : nop
        xor ebx, ebx
        push 5
        push ebx
        push ebx
        lea ecx, ds:[edi+0x330]
        mov dword ptr ds : [edi+0x3A4], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, edi
        call public_4795f0
        mov eax, dword ptr ds : [edi+0x360]
        cmp eax, ebx
        je public_48280d
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [edi+0x360]
        mov dword ptr ds : [edx+0x4EC], ebx
        public_48280d : nop
        mov eax, dword ptr ds : [edi+0x360]
        mov dword ptr ds : [edi+0x4F4], ebx
        mov dword ptr ds : [eax+0x4F4], ebx
        jmp public_48285e
        public_482821 : nop
        cmp eax, 0xFFFFFFFF
        je public_48284c
        mov ecx, dword ptr ds : [esi+0x988]
        push ecx
        mov ecx, dword ptr ds : [esi+0x974]
        call public_47eab0
        mov ecx, dword ptr ds : [esi+0x974]
        add ecx, 0x394
        call dword ptr ds : [public_5c69a0]
        jmp public_48285e
        public_48284c : nop
        mov edx, dword ptr ds : [esi+0x988]
        mov ecx, dword ptr ds : [esi+0x974]
        push edx
        call public_47eea0
        public_48285e : nop
        mov ecx, dword ptr ds : [esi+0x9B8]
        push 0
        push 1
        mov dword ptr ds : [esi+0x988], 1
        mov eax, dword ptr ds : [ecx]
        push 0x38
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x988]
        push ecx
        lea edi, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x482889*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_4828ab : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_4828b7 : nop
        lea ecx, ds:[esi+0x438]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ecx
        public_4828c3 : nop
        mov eax, dword ptr ds : [ecx]
        cmp ebp, eax
        je public_4828d7
        cmp ebp, dword ptr ds : [ecx-0x3C]
        je public_4828d3
        cmp ebp, dword ptr ds : [ecx+0x28]
        jne public_482945
        public_4828d3 : nop
        cmp ebp, eax
        jne public_4828de
        public_4828d7 : nop
        mov byte ptr ds : [esi+0x984], 0
        public_4828de : nop
        push 1
        push ebx
        mov ecx, esi
        call public_482120
        mov edi, dword ptr ds : [esi+0x974]
        test edi, edi
        mov byte ptr ds : [esi+0x4E0], 0
        je public_482945
        push 5
        push 0
        push 0
        lea ecx, ds:[edi+0x330]
        mov dword ptr ds : [edi+0x3A4], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x4F4], 0
        call public_4c6a50
        push 0
        mov ecx, edi
        call public_4795f0
        mov eax, dword ptr ds : [edi+0x360]
        test eax, eax
        je public_482945
        xor ecx, ecx
        mov dword ptr ds : [eax+0x4E8], ecx
        mov eax, dword ptr ds : [edi+0x360]
        mov dword ptr ds : [eax+0x4EC], ecx
        public_482945 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        inc ebx
        add ecx, 4
        cmp ebx, 5
        mov dword ptr ss : [esp+0x18], ecx
        jl public_4828c3
        cmp ebp, dword ptr ds : [esi+0x3D8]
        jne public_482992
        push 1
        push 3
        public_482966 : nop
        mov ecx, esi
        call public_47f240
        mov ecx, dword ptr ds : [esi+0x974]
        test ecx, ecx
        je public_482a37
        mov edx, dword ptr ds : [esi+0x32C]
        push 1
        push edx
        call public_47f240
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_482992 : nop
        cmp ebp, dword ptr ds : [esi+0x3D4]
        jne public_4829ca
        push 1
        push 0
        mov ecx, esi
        call public_47f240
        mov ecx, dword ptr ds : [esi+0x974]
        test ecx, ecx
        je public_482a37
        mov eax, dword ptr ds : [esi+0x32C]
        push 1
        push eax
        call public_47f240
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_4829ca : nop
        cmp ebp, dword ptr ds : [esi+0x3DC]
        jne public_4829d8
        push 1
        push 2
        jmp public_482966
        public_4829d8 : nop
        cmp ebp, dword ptr ds : [esi+0x3E0]
        jne public_482a0c
        push 1
        push 4
        mov ecx, esi
        call public_47f240
        mov ecx, dword ptr ds : [esi+0x974]
        test ecx, ecx
        je public_482a37
        mov eax, dword ptr ds : [esi+0x32C]
        push 1
        push eax
        call public_47f240
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_482a0c : nop
        cmp ebp, dword ptr ds : [esi+0x3E4]
        jne public_482a1d
        push 1
        push 1
        jmp public_482966
        public_482a1d : nop
        cmp ebp, dword ptr ds : [esi+0x344]
        jne public_482a37
        push 1
        push 0xFFFFFFFF
        mov ecx, esi
        call public_482120
        mov byte ptr ds : [esi+0x4E0], 1
        public_482a37 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4822a0)
        ASM_EXPORT_ENTRY_SINGLE(0x482a37, public_482a37)
    }
}

#undef public_4822c4
#undef public_4822dd
#undef public_4822fe
#undef public_48237a
#undef public_48237b
#undef public_4823b9
#undef public_4823f7
#undef public_482449
#undef public_4824a0
#undef public_4824a1
#undef public_4824ff
#undef public_482559
#undef public_482578
#undef public_48259c
#undef public_4825d6
#undef public_4825fc
#undef public_482633
#undef public_48263b
#undef public_482641
#undef public_48267c
#undef public_48269e
#undef public_4826bb
#undef public_4826de
#undef public_48270a
#undef public_48272b
#undef public_48275f
#undef public_4827c8
#undef public_48280d
#undef public_482821
#undef public_48284c
#undef public_48285e
#undef public_4828ab
#undef public_4828b7
#undef public_4828c3
#undef public_4828d3
#undef public_4828d7
#undef public_4828de
#undef public_482945
#undef public_482966
#undef public_482992
#undef public_4829ca
#undef public_4829d8
#undef public_482a0c
#undef public_482a1d
#undef public_482a37

#pragma init_seg(compiler)
extern "C" void const* const public_482a37 = __AsmFindLabelExport(&internal_4822a0, 0x482a37);
