#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414640);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);
CLANG_FORWARD_PROC_SYMBOL(public_415850);
CLANG_FORWARD_PROC_SYMBOL(public_418180);
CLANG_FORWARD_PROC_SYMBOL(public_418610);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5b88a4);

#define public_41564d _public_41564d
#define public_415682 _public_415682
#define public_4156a1 _public_4156a1
#define public_4156b4 _public_4156b4
#define public_4156c9 _public_4156c9
#define public_4156ee _public_4156ee
#define public_415719 _public_415719
#define public_41573b _public_41573b
#define public_415743 _public_415743
#define public_415753 _public_415753
#define public_41575b _public_41575b
#define public_415770 _public_415770
#define public_415790 _public_415790
#define public_4157a4 _public_4157a4
#define public_4157b1 _public_4157b1
#define public_4157c5 _public_4157c5
#define public_4157c8 _public_4157c8
#define public_4157cc _public_4157cc
#define public_4157e5 _public_4157e5
#define public_4157f0 _public_4157f0
#define public_41581f _public_41581f
#define public_41582e _public_41582e

PROC_DECLARE(0x4155c0, internal_4155c0, public_4155c0);
extern "C" NAKED register_t __cdecl internal_4155c0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5b88a4 @0x4155c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b88a4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2014
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ds : [public_6105b0]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+0x28], eax
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, ebp
        je public_41582e
        cmp word ptr ds : [eax], bp
        je public_41582e
        mov ecx, dword ptr ds : [edi+0x1C]
        cmp ecx, ebp
        je public_41582e
        mov dl, byte ptr ds : [edi+0x30]
        test dl, dl
        mov dword ptr ss : [esp+0x10], ebp
        je public_4156ee
/*FIXUP push offset _public_444e20 @0x41561c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444e20
/*FIXUP push offset _public_415850 @0x415621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_415850
        push 0x400
        push 8
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_5b7fba
        mov eax, dword ptr ds : [edi+8]
        cmp eax, 0x400
        mov dword ptr ss : [esp+0x202C], ebp
        jb public_41564d
        mov eax, 0x400
        public_41564d : nop
        mov ecx, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [edi+0x2C]
        lea eax, ss:[esp+0x2C]
        push eax
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], ebp
        fild qword ptr ss : [esp+0x20]
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        push eax
        call public_418180
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x18
        cmp eax, ebp
        jle public_4156c9
        public_415682 : nop
        push 0
        push ebp
        mov ecx, edi
        call public_414640
        mov esi, dword ptr ss : [esp+ebp*8+0x24]
        push esi
        mov ebx, eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        cmp eax, 1
        jle public_4156b4
        public_4156a1 : nop
        dec eax
        cmp word ptr ds : [esi+eax*2], 0x20
        jne public_4156b4
        cmp eax, 1
        mov word ptr ds : [esi+eax*2], 0
        jg public_4156a1
        public_4156b4 : nop
        mov eax, dword ptr ss : [esp+ebp*8+0x24]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        cmp ebp, eax
        jl public_415682
/*FIXUP public_4156c9 : nop
        push offset _public_444e20 @0x4156c9*/
  FIXUP public_4156c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444e20
        push 0x400
        push 8
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x203C], 0xFFFFFFFF
        call public_5b7ec6
        xor ebp, ebp
        jmp public_415719
        public_4156ee : nop
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr ds : [edi+0x2C]
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, ebp
        jle public_415719
        push ebp
        push ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        call public_414640
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        public_415719 : nop
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebp
        lea ebx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x202C], 1
        jne public_41573b
        xor ecx, ecx
        jmp public_415743
        public_41573b : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 3
        public_415743 : nop
        mov esi, dword ptr ss : [esp+0x10]
        cmp ecx, esi
        jae public_415770
        test eax, eax
        jne public_415753
        xor ecx, ecx
        jmp public_41575b
        public_415753 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 3
        public_41575b : nop
        mov eax, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x14]
        push edx
        sub esi, ecx
        push esi
        push eax
        mov ecx, ebx
        call public_418610
        jmp public_4157c8
        public_415770 : nop
        test eax, eax
        je public_4157cc
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, ecx
        sub edx, eax
        sar edx, 3
        cmp esi, edx
        jae public_4157cc
        cmp ecx, ecx
        lea esi, ds:[eax+esi*8]
        mov eax, ecx
        je public_4157a4
        nop 
        lea esp, ss:[esp]
        public_415790 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        add eax, 8
        add esi, 8
        cmp eax, ecx
        jne public_415790
        public_4157a4 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, esi
        je public_4157c5
        public_4157b1 : nop
        push 0
        mov ecx, ebp
        call public_418f70
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 8
        cmp ebp, eax
        jne public_4157b1
        public_4157c5 : nop
        mov dword ptr ds : [ebx+8], esi
        public_4157c8 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_4157cc : nop
        xor esi, esi
        cmp ebp, esi
        mov dword ptr ss : [esp+0x202C], 0xFFFFFFFF
        je public_4157e5
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        public_4157e5 : nop
        mov dword ptr ds : [edi+0x20], esi
        mov dword ptr ds : [edi+0x24], esi
        nop 
        lea esp, ss:[esp]
        public_4157f0 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_41582e
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        cmp esi, eax
        jae public_41582e
        mov ecx, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [ecx+esi*8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [edi+0x20]
        jbe public_41581f
        mov dword ptr ds : [edi+0x20], eax
        public_41581f : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        add edx, ecx
        mov dword ptr ds : [edi+0x24], edx
        inc esi
        jmp public_4157f0
        public_41582e : nop
        mov ecx, dword ptr ss : [esp+0x2024]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2020
        ret 
        UNREACHABLE_TRAP(0x4155c0)
    }
}

#undef public_41564d
#undef public_415682
#undef public_4156a1
#undef public_4156b4
#undef public_4156c9
#undef public_4156ee
#undef public_415719
#undef public_41573b
#undef public_415743
#undef public_415753
#undef public_41575b
#undef public_415770
#undef public_415790
#undef public_4157a4
#undef public_4157b1
#undef public_4157c5
#undef public_4157c8
#undef public_4157cc
#undef public_4157e5
#undef public_4157f0
#undef public_41581f
#undef public_41582e
