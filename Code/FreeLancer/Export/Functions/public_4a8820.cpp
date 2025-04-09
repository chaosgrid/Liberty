#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a8750);
CLANG_FORWARD_PROC_SYMBOL(public_4a8820);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4a8913 _public_4a8913
#define public_4a8944 _public_4a8944
#define public_4a895e _public_4a895e
#define public_4a8972 _public_4a8972
#define public_4a8979 _public_4a8979
#define public_4a898f _public_4a898f
#define public_4a8b10 _public_4a8b10
#define public_4a8b26 _public_4a8b26
#define public_4a8b3d _public_4a8b3d
#define public_4a8b45 _public_4a8b45
#define public_4a8b70 _public_4a8b70
#define public_4a8b84 _public_4a8b84
#define public_4a8ba3 _public_4a8ba3
#define public_4a8c21 _public_4a8c21
#define public_4a8c26 _public_4a8c26
#define public_4a8c2e _public_4a8c2e
#define public_4a8c33 _public_4a8c33
#define public_4a8c3f _public_4a8c3f
#define public_4a8c60 _public_4a8c60
#define public_4a8c74 _public_4a8c74
#define public_4a8c91 _public_4a8c91
#define public_4a8ca5 _public_4a8ca5
#define public_4a8ce0 _public_4a8ce0
#define public_4a8cfa _public_4a8cfa
#define public_4a8d10 _public_4a8d10
#define public_4a8d23 _public_4a8d23
#define public_4a8d40 _public_4a8d40
#define public_4a8d54 _public_4a8d54
#define public_4a8d62 _public_4a8d62
#define public_4a8d78 _public_4a8d78
#define public_4a8d83 _public_4a8d83
#define public_4a8da3 _public_4a8da3
#define public_4a8db0 _public_4a8db0
#define public_4a8dc5 _public_4a8dc5
#define public_4a8dd0 _public_4a8dd0
#define public_4a8de4 _public_4a8de4
#define public_4a8ded _public_4a8ded
#define public_4a8dfd _public_4a8dfd
#define public_4a8e13 _public_4a8e13

PROC_DECLARE(0x4a8820, internal_4a8820, public_4a8820);
extern "C" NAKED register_t __cdecl internal_4a8820()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c70ec]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a8835*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a883a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov esi, ecx
        call edi
        mov ecx, dword ptr ds : [esi+0x3B0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a8850*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x18]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a8861*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8866*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3B4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a887a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x1C]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a888b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3B8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a88a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ds : [ebx+0x10]
        call public_5b7ec0
        cdq 
        mov ecx, 0x3C
        idiv ecx
        mov ebp, 0x3C
        mov ecx, edx
        cdq 
        idiv ebp
        push ecx
        push edx
        push eax
/*FIXUP push offset public_5d49b4 @0x4a88ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d49b4
/*FIXUP push offset public_66fc60 @0x4a88d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3AC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x14
        push 0
/*FIXUP push offset public_66fc60 @0x4a88e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x20]
        xor ecx, ecx
        xor ebp, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x24], ecx
        jle public_4a898f
        mov dword ptr ss : [esp+0x1C], eax
        public_4a8913 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        test eax, eax
        je public_4a8979
        mov eax, dword ptr ds : [eax+0x10]
        test eax, 0x20000
        je public_4a8944
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+4]
        add ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_4a8979
        public_4a8944 : nop
        test eax, 0x100000
        je public_4a895e
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        add eax, edx
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4a8979
        public_4a895e : nop
        test eax, 0x280000
        je public_4a8972
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+4]
        add dword ptr ss : [esp+0x24], ecx
        jmp public_4a8979
        public_4a8972 : nop
        mov edx, dword ptr ss : [esp+0x28]
        add ebp, dword ptr ds : [edx+4]
        public_4a8979 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, 8
        dec eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4a8913
        public_4a898f : nop
        push ebp
/*FIXUP push offset public_5d0ec4 @0x4a8990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8995*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3BC]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a89a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
/*FIXUP push offset public_5d0ec4 @0x4a89bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a89c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3C0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a89d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a89e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a89eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a89ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a8a11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8a16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a8a2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        add eax, ecx
        add eax, edx
        add eax, ebp
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a8a4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8a4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3A8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a8a63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a8a73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8a78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x3A4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a8a8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x24]
        push eax
/*FIXUP push offset public_5d0ec4 @0x4a8a9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66fc60 @0x4a8aa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov ecx, dword ptr ds : [esi+0x398]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a8ab6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x28]
        push 0xFFFFFFFF
        push eax
/*FIXUP push offset public_66fc60 @0x4a8ac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x39C]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4a8ae0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [ebx+0x2C]
        cmp eax, 0x7FFFFFFF
        jne public_4a8b10
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66fc60 @0x4a8b03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x3E4
        push ecx
        jmp public_4a8b3d
        public_4a8b10 : nop
        test eax, eax
        jle public_4a8b26
        push 0xFFFFFFFF
        push eax
/*FIXUP push offset public_66fc60 @0x4a8b17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_4779a0
        add esp, 0xC
        jmp public_4a8b45
        public_4a8b26 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x4a8b32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x620
        push eax
        public_4a8b3d : nop
        call public_4347e0
        add esp, 0x10
        public_4a8b45 : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x4a8b4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi+0x414]
        mov ecx, dword ptr ds : [esi+0x410]
        mov eax, edx
        cmp eax, edx
        je public_4a8b84
        mov edi, edi
        public_4a8b70 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_4a8b70
        public_4a8b84 : nop
        mov dword ptr ds : [esi+0x414], ecx
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        mov dword ptr ds : [esi+0x41C], 0
        jle public_4a8e13
        mov dword ptr ss : [esp+0x1C], ebx
        public_4a8ba3 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi]
        push 1
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call public_4c4da0
        add esp, 0x10
        test al, al
        je public_4a8dfd
        test byte ptr ss : [esp+0x28], 1
        je public_4a8dfd
        mov edx, dword ptr ds : [edi]
        push edx
        call dword ptr ds : [public_5c63f4]
        add esp, 4
        test al, al
        jne public_4a8dfd
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [esi+0x414]
        mov ecx, dword ptr ds : [esi+0x418]
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, edi
        jae public_4a8cfa
        mov ecx, dword ptr ds : [esi+0x410]
        test ecx, ecx
        je public_4a8c21
        mov eax, edi
        sub eax, ecx
        sar eax, 3
        cmp eax, 1
        ja public_4a8c26
        public_4a8c21 : nop
        mov eax, 1
        public_4a8c26 : nop
        test ecx, ecx
        jne public_4a8c2e
        xor edi, edi
        jmp public_4a8c33
        public_4a8c2e : nop
        sub edi, ecx
        sar edi, 3
        public_4a8c33 : nop
        add eax, edi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_4a8c3f
        xor eax, eax
        public_4a8c3f : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+0x410]
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], eax
        mov edi, eax
        je public_4a8c74
        nop 
        public_4a8c60 : nop
        push ebp
        push edi
        call public_4e5fc0
        add ebp, 8
        add esp, 8
        add edi, 8
        cmp ebp, ebx
        jne public_4a8c60
        public_4a8c74 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_4e5fc0
        mov ebp, dword ptr ds : [esi+0x414]
        add esp, 8
        cmp ebx, ebp
        je public_4a8ca5
        sub edi, ebx
        add edi, 8
        public_4a8c91 : nop
        lea ecx, ds:[ebx+edi]
        push ebx
        push ecx
        call public_4e5fc0
        add ebx, 8
        add esp, 8
        cmp ebx, ebp
        jne public_4a8c91
        public_4a8ca5 : nop
        mov edx, dword ptr ds : [esi+0x410]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+0x418], edx
        mov edx, dword ptr ds : [esi+0x410]
        add esp, 4
        test edx, edx
        jne public_4a8ce0
        xor eax, eax
        lea eax, ds:[ecx+eax*8+8]
        mov dword ptr ds : [esi+0x410], ecx
        jmp public_4a8ded
        public_4a8ce0 : nop
        mov eax, dword ptr ds : [esi+0x414]
        sub eax, edx
        sar eax, 3
        lea eax, ds:[ecx+eax*8+8]
        mov dword ptr ds : [esi+0x410], ecx
        jmp public_4a8ded
        public_4a8cfa : nop
        mov ecx, edi
        sub ecx, ebx
        sar ecx, 3
        cmp ecx, 1
        jae public_4a8d78
        cmp ebx, edi
        mov eax, ebx
        je public_4a8d23
        lea esp, ss:[esp]
        public_4a8d10 : nop
        lea ebp, ds:[eax+8]
        push eax
        push ebp
        call public_4e5fc0
        mov eax, ebp
        add esp, 8
        cmp eax, edi
        jne public_4a8d10
        public_4a8d23 : nop
        mov ecx, dword ptr ds : [esi+0x414]
        mov edx, ecx
        sub edx, ebx
        sar edx, 3
        mov eax, 1
        sub eax, edx
        mov edi, ecx
        je public_4a8d54
        mov ebp, eax
        lea ecx, ds:[ecx]
        public_4a8d40 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_4e5fc0
        add esp, 8
        add edi, 8
        dec ebp
        jne public_4a8d40
        public_4a8d54 : nop
        mov eax, dword ptr ds : [esi+0x414]
        cmp ebx, eax
        je public_4a8de4
        public_4a8d62 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+4], edx
        add ebx, 8
        cmp ebx, eax
        jne public_4a8d62
        jmp public_4a8de4
        public_4a8d78 : nop
        lea ebp, ds:[edi-8]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x24], edi
        je public_4a8da3
        public_4a8d83 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push ebp
        push eax
        call public_4e5fc0
        mov edx, dword ptr ss : [esp+0x2C]
        add edx, 8
        add ebp, 8
        add esp, 8
        cmp ebp, edi
        mov dword ptr ss : [esp+0x24], edx
        jne public_4a8d83
        public_4a8da3 : nop
        mov ecx, dword ptr ds : [esi+0x414]
        lea eax, ds:[ecx-8]
        cmp ebx, eax
        je public_4a8dc5
        public_4a8db0 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_4a8db0
        public_4a8dc5 : nop
        lea eax, ds:[ebx+8]
        cmp ebx, eax
        je public_4a8de4
        lea esp, ss:[esp]
        public_4a8dd0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+4], edx
        add ebx, 8
        cmp ebx, eax
        jne public_4a8dd0
        public_4a8de4 : nop
        mov eax, dword ptr ds : [esi+0x414]
        add eax, 8
        public_4a8ded : nop
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x414], eax
        inc dword ptr ds : [esi+0x41C]
        public_4a8dfd : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 8
        dec eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4a8ba3
        public_4a8e13 : nop
        mov ecx, esi
        call public_4a8750
        mov edx, dword ptr ds : [esi+0x41C]
        mov ecx, dword ptr ds : [esi+0x394]
        mov eax, dword ptr ds : [ecx]
        dec edx
        push edx
        push 0
        push 0x37
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x4a8820)
    }
}

#undef public_4a8913
#undef public_4a8944
#undef public_4a895e
#undef public_4a8972
#undef public_4a8979
#undef public_4a898f
#undef public_4a8b10
#undef public_4a8b26
#undef public_4a8b3d
#undef public_4a8b45
#undef public_4a8b70
#undef public_4a8b84
#undef public_4a8ba3
#undef public_4a8c21
#undef public_4a8c26
#undef public_4a8c2e
#undef public_4a8c33
#undef public_4a8c3f
#undef public_4a8c60
#undef public_4a8c74
#undef public_4a8c91
#undef public_4a8ca5
#undef public_4a8ce0
#undef public_4a8cfa
#undef public_4a8d10
#undef public_4a8d23
#undef public_4a8d40
#undef public_4a8d54
#undef public_4a8d62
#undef public_4a8d78
#undef public_4a8d83
#undef public_4a8da3
#undef public_4a8db0
#undef public_4a8dc5
#undef public_4a8dd0
#undef public_4a8de4
#undef public_4a8ded
#undef public_4a8dfd
#undef public_4a8e13
