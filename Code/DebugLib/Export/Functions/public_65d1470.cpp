#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d11b0);
CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d1b70);
CLANG_FORWARD_PROC_SYMBOL(public_65d1ea0);
CLANG_FORWARD_PROC_SYMBOL(public_65d2170);
CLANG_FORWARD_PROC_SYMBOL(public_65d2650);
CLANG_FORWARD_PROC_SYMBOL(public_65d2d00);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c70);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c76);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c7c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65d734e);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfea4);

#define public_65d14a5 _public_65d14a5
#define public_65d14b5 _public_65d14b5
#define public_65d151a _public_65d151a
#define public_65d153d _public_65d153d
#define public_65d153f _public_65d153f
#define public_65d1598 _public_65d1598
#define public_65d159c _public_65d159c
#define public_65d15aa _public_65d15aa
#define public_65d15bd _public_65d15bd
#define public_65d15cf _public_65d15cf
#define public_65d15d3 _public_65d15d3
#define public_65d1603 _public_65d1603
#define public_65d1616 _public_65d1616
#define public_65d161e _public_65d161e
#define public_65d162c _public_65d162c
#define public_65d1651 _public_65d1651
#define public_65d1675 _public_65d1675
#define public_65d16bb _public_65d16bb
#define public_65d16e2 _public_65d16e2
#define public_65d16f1 _public_65d16f1
#define public_65d16f3 _public_65d16f3

PROC_DECLARE(0x65d1470, internal_65d1470, public_65d1470);
extern "C" NAKED register_t __cdecl internal_65d1470()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_65dfea4 @0x65d1478*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfea4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x534
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x554]
        or ebp, 0xFFFFFFFF
        cmp dword ptr ds : [edi+8], ebp
        jne public_65d14a5
        mov eax, ebp
        jmp public_65d16f3
        public_65d14a5 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [edi+0x18]
        xor ebx, ebx
        cmp eax, ecx
        jae public_65d15aa
        public_65d14b5 : nop
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x28]
        push ecx
        push ebx
        lea edx, ss:[esp+0x48]
        push ebx
        push edx
        push ebx
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x54], 1
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        call public_65d6c7c
        cmp eax, ebp
        je public_65d15bd
        cmp eax, 1
        jne public_65d1598
        mov edx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x18]
        lea ecx, ss:[esp+0x30]
        push eax
        push ecx
        push edx
        mov dword ptr ss : [esp+0x24], 0x10
        call public_65d6c76
        mov esi, eax
        cmp esi, ebp
        jne public_65d151a
        call public_65d1330
        jmp public_65d159c
        public_65d151a : nop
        push 0x3C
        call public_65d6f71
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x54C], ebx
        je public_65d153d
        push esi
        mov ecx, eax
        call public_65d1b70
        jmp public_65d153f
        public_65d153d : nop
        xor eax, eax
        public_65d153f : nop
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x10], eax
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x54C], ebp
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_65d2650
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_65d6c70
        push eax
        lea edx, ss:[esp+0x148]
/*FIXUP push offset public_65e3070 @0x65d1572*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3070
        push edx
        call public_65d734e
        mov eax, dword ptr ds : [edi+0x2C]
        add esp, 0xC
        cmp eax, ebx
        je public_65d159c
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0x14]
        push ecx
        push ebx
        push eax
        call dword ptr ds : [edx+0xC]
        jmp public_65d159c
        public_65d1598 : nop
        cmp eax, ebx
        je public_65d15aa
        public_65d159c : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [edi+0x18]
        cmp eax, ecx
        jb public_65d14b5
        public_65d15aa : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_65d16f1
        jmp public_65d15d3
        public_65d15bd : nop
        call public_65d1330
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x10]
        mov eax, ebp
        jmp public_65d16f3
        public_65d15cf : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_65d15d3 : nop
        mov esi, dword ptr ds : [ecx+8]
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_65d1ea0
        test al, al
        jne public_65d1603
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, edi
        call public_65d11b0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_65d16e2
        public_65d1603 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x54C], 1
        jmp public_65d161e
        public_65d1616 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        public_65d161e : nop
        cmp eax, ebx
        je public_65d162c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_65d162c : nop
        lea edx, ss:[esp+0x14]
        mov ecx, esi
        push edx
        call public_65d2170
        test al, al
        je public_65d16bb
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        je public_65d1651
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65d1651 : nop
        mov dword ptr ss : [esp+0x20], esi
        mov esi, dword ptr ds : [edi+0x24]
        push 0x10
        mov byte ptr ss : [esp+0x550], 2
        mov ebp, dword ptr ds : [esi+4]
        call public_65d6f71
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], esi
        jne public_65d1675
        mov ebp, eax
        public_65d1675 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push eax
        call public_65d2d00
        mov edx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        inc edx
        cmp eax, ebx
        mov dword ptr ds : [edi+0x28], edx
        mov byte ptr ss : [esp+0x54C], 1
        je public_65d1616
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], ebx
        jmp public_65d1616
        public_65d16bb : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x54C], 0xFFFFFFFF
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_65d16e2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_65d16e2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x10]
        cmp edx, eax
        jne public_65d15cf
        public_65d16f1 : nop
        xor eax, eax
        public_65d16f3 : nop
        mov ecx, dword ptr ss : [esp+0x544]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x540
        ret 4
        UNREACHABLE_TRAP(0x65d1470)
    }
}

#undef public_65d14a5
#undef public_65d14b5
#undef public_65d151a
#undef public_65d153d
#undef public_65d153f
#undef public_65d1598
#undef public_65d159c
#undef public_65d15aa
#undef public_65d15bd
#undef public_65d15cf
#undef public_65d15d3
#undef public_65d1603
#undef public_65d1616
#undef public_65d161e
#undef public_65d162c
#undef public_65d1651
#undef public_65d1675
#undef public_65d16bb
#undef public_65d16e2
#undef public_65d16f1
#undef public_65d16f3
