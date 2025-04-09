#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_47c740);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);

#define public_47c765 _public_47c765
#define public_47c77c _public_47c77c
#define public_47c7a9 _public_47c7a9
#define public_47c7c2 _public_47c7c2
#define public_47c7de _public_47c7de
#define public_47c801 _public_47c801
#define public_47c809 _public_47c809
#define public_47c833 _public_47c833
#define public_47c855 _public_47c855
#define public_47c86f _public_47c86f
#define public_47c881 _public_47c881
#define public_47c8c2 _public_47c8c2
#define public_47c8e9 _public_47c8e9
#define public_47c914 _public_47c914
#define public_47c930 _public_47c930
#define public_47c939 _public_47c939
#define public_47c957 _public_47c957
#define public_47c95c _public_47c95c
#define public_47ca31 _public_47ca31
#define public_47ca3b _public_47ca3b
#define public_47ca45 _public_47ca45
#define public_47ca4f _public_47ca4f
#define public_47ca59 _public_47ca59
#define public_47ca63 _public_47ca63
#define public_47ca6d _public_47ca6d
#define public_47ca77 _public_47ca77
#define public_47ca81 _public_47ca81
#define public_47ca8b _public_47ca8b
#define public_47cab8 _public_47cab8
#define public_47cac3 _public_47cac3
#define public_47cacd _public_47cacd
#define public_47caea _public_47caea
#define public_47cb10 _public_47cb10
#define public_47cb23 _public_47cb23
#define public_47cb27 _public_47cb27
#define public_47cb3a _public_47cb3a
#define public_47cb8a _public_47cb8a
#define public_47cbbb _public_47cbbb
#define public_47cbbd _public_47cbbd
#define public_47cbd4 _public_47cbd4
#define public_47cc11 _public_47cc11
#define public_47cc2a _public_47cc2a
#define public_47cc30 _public_47cc30
#define public_47cc3f _public_47cc3f
#define public_47ccdd _public_47ccdd
#define public_47ccee _public_47ccee
#define public_47ccfe _public_47ccfe
#define public_47cd0a _public_47cd0a
#define public_47cd0d _public_47cd0d
#define public_47cd1e _public_47cd1e
#define public_47cd48 _public_47cd48
#define public_47cd71 _public_47cd71
#define public_47cd7b _public_47cd7b
#define public_47cd9d _public_47cd9d
#define public_47cdac _public_47cdac
#define public_47cde2 _public_47cde2
#define public_47cdf8 _public_47cdf8
#define public_47ce07 _public_47ce07
#define public_47ce52 _public_47ce52
#define public_47ce8c _public_47ce8c
#define public_47ce98 _public_47ce98
#define public_47cead _public_47cead
#define public_47ceb1 _public_47ceb1
#define public_47ceb5 _public_47ceb5
#define public_47cef3 _public_47cef3
#define public_47ceff _public_47ceff
#define public_47cf66 _public_47cf66
#define public_47cf7c _public_47cf7c
#define public_47cf88 _public_47cf88
#define public_47cfbc _public_47cfbc
#define public_47cfd2 _public_47cfd2
#define public_47cfdc _public_47cfdc
#define public_47d040 _public_47d040
#define public_47d05d _public_47d05d
#define public_47d0c3 _public_47d0c3
#define public_47d0d3 _public_47d0d3
#define public_47d0ee _public_47d0ee
#define public_47d0f7 _public_47d0f7
#define public_47d126 _public_47d126
#define public_47d167 _public_47d167
#define public_47d1c6 _public_47d1c6
#define public_47d1c8 _public_47d1c8
#define public_47d239 _public_47d239
#define public_47d25e _public_47d25e
#define public_47d27b _public_47d27b
#define public_47d285 _public_47d285

PROC_DECLARE(0x47c740, internal_47c740, public_47c740);
extern "C" NAKED register_t __cdecl internal_47c740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        cmp edx, edi
        mov esi, ecx
        jne public_47c765
        cmp dword ptr ss : [esp+0x4C], edi
        jne public_47c765
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 0x34
        public_47c765 : nop
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        jne public_47c77c
        cmp dword ptr ds : [esi+0x360], edi
        je public_47c7a9
        public_47c77c : nop
        cmp dword ptr ds : [esi+0x36C], edi
        je public_47c7a9
        cmp dword ptr ds : [esi+0x370], edi
        je public_47c7a9
        cmp dword ptr ds : [esi+0x374], edi
        je public_47c7a9
        cmp dword ptr ds : [esi+0x378], edi
        je public_47c7a9
        cmp dword ptr ds : [esi+0x37C], edi
        je public_47c7a9
        mov byte ptr ss : [esp+0x13], 1
        public_47c7a9 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ds : [esi+0x32C]
        xor al, al
        cmp ecx, ebx
        je public_47c7c2
        cmp ecx, 0xFFFFFFFF
        jne public_47d285
        public_47c7c2 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0x3A4]
        sete al
        test al, al
        mov byte ptr ss : [esp+0x2C], al
        jne public_47c7de
        mov byte ptr ss : [esp+0x13], al
        public_47c7de : nop
        cmp edx, edi
        mov ebx, dword ptr ss : [esp+0x30]
        jne public_47c809
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        je public_47c855
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, edi
        jne public_47c801
        mov dword ptr ds : [esi+0x390], edi
        jmp public_47c855
        public_47c801 : nop
        mov dword ptr ds : [eax+0x390], edi
        jmp public_47c855
        public_47c809 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47c855
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, edi
        jne public_47c833
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x38C], ebx
        mov dword ptr ds : [esi+0x390], edx
        mov dword ptr ds : [esi+0x388], ecx
        jmp public_47c855
        public_47c833 : nop
        mov dword ptr ds : [eax+0x390], edx
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+0x38C], ebx
        mov ecx, dword ptr ds : [esi+0x360]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+0x388], eax
        public_47c855 : nop
        cmp edx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_47c86f
        push edx
        call dword ptr ds : [public_5c629c]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        jne public_47c881
        public_47c86f : nop
        cmp dword ptr ss : [esp+0x4C], edi
        jne public_47c881
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 0x34
        public_47c881 : nop
        mov edi, dword ptr ss : [ebp]
        sub edi, dword ptr ds : [esi+0x3C4]
        cmp edi, 5
        jae public_47d27b
        mov ecx, dword ptr ds : [esi+edi*4+0x3E8]
        test ecx, ecx
        je public_47caea
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_47c8c2
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_47cacd
        push 0
        push 0x38A
        jmp public_47cac3
        public_47c8c2 : nop
        push eax
        call dword ptr ds : [public_5c603c]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_47cab8
        mov eax, dword ptr ds : [esi+0x32C]
        test eax, eax
        je public_47c8e9
        cmp eax, 2
        jne public_47ca8b
        public_47c8e9 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x11
        jne public_47c939
        mov ecx, ebp
        call dword ptr ds : [public_5c6378]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jle public_47c939
        public_47c914 : nop
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c6374]
        cmp eax, dword ptr ss : [esp+0x18]
        jle public_47c930
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c6374]
        mov dword ptr ss : [esp+0x18], eax
        public_47c930 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc ebx
        cmp ebx, eax
        jl public_47c914
        public_47c939 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0xFFFFFFF1
        cmp eax, 0x33
        ja public_47ca8b
/*FIXUP movzx ecx, byte ptr ds : [eax+public_47d2bc] @0x47c949*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_47d290] @0x47c950*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_47c957
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_47ca31
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_47ca3b
  JMPTB cmp eax, 3
  JMPTB mov ecx, 3
  JMPTB je public_47ca45
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_47ca4f
  JMPTB cmp eax, 5
  JMPTB mov ecx, 5
  JMPTB je public_47ca59
  JMPTB cmp eax, 6
  JMPTB mov ecx, 6
  JMPTB je public_47ca63
  JMPTB cmp eax, 7
  JMPTB mov ecx, 7
  JMPTB je public_47ca6d
  JMPTB cmp eax, 8
  JMPTB mov ecx, 8
  JMPTB je public_47ca77
  JMPTB cmp eax, 9
  JMPTB mov ecx, 9
  JMPTB je public_47ca81
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0
  JMPTB je public_47c957
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 1
  JMPTB je public_47ca31
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 2
  JMPTB je public_47ca3b
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 3
  JMPTB je public_47ca45
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_47ca4f
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 5
  JMPTB je public_47ca59
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 6
  JMPTB je public_47ca63
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_47ca6d
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 8
  JMPTB je public_47ca77
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 9
  JMPTB je public_47ca81
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0xA
  JMPTB je public_47ca8b
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xA
  JMPTB je public_47ca8b
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 0
  JMPTB je public_47c957
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 1
  JMPTB je public_47ca31
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 2
  JMPTB je public_47ca3b
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 3
  JMPTB je public_47ca45
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 4
  JMPTB je public_47ca4f
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 5
  JMPTB je public_47ca59
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 6
  JMPTB je public_47ca63
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 7
  JMPTB je public_47ca6d
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 8
  JMPTB je public_47ca77
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 9
  JMPTB je public_47ca81
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 0
  JMPTB je public_47c957
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 1
  JMPTB je public_47ca31
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 2
  JMPTB je public_47ca3b
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 3
  JMPTB je public_47ca45
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 4
  JMPTB je public_47ca4f
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 5
  JMPTB je public_47ca59
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 6
  JMPTB je public_47ca63
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 7
  JMPTB je public_47ca6d
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 8
  JMPTB je public_47ca77
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 9
  JMPTB je public_47ca81
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 0
  JMPTB je public_47c957
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 1
  JMPTB je public_47ca31
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 2
  JMPTB je public_47ca3b
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 3
  JMPTB je public_47ca45
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 4
  JMPTB je public_47ca4f
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 5
  JMPTB je public_47ca59
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 6
  JMPTB je public_47ca63
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 7
  JMPTB je public_47ca6d
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 8
  JMPTB je public_47ca77
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 9
  JMPTB je public_47ca81
  JMPTB int 3
        public_47c957 : nop
        mov ebx, 1
        public_47c95c : nop
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66fc60 @0x47c96b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push edx
        push eax
        call public_4347e0
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x47c984*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x3DF
        push edx
        call public_4347e0
        mov ebp, dword ptr ds : [public_5c70ac]
/*FIXUP push offset public_66dc60 @0x47c99a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47c99f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        push ebx
/*FIXUP push offset public_5d0ec4 @0x47c9a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
/*FIXUP push offset public_66dc60 @0x47c9ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c70ec]
/*FIXUP push offset public_66dc60 @0x47c9b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47c9bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x47c9cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x3E0
        push ecx
        call public_4347e0
        add esp, 0x4C
/*FIXUP push offset public_66dc60 @0x47c9e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47c9e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        mov ecx, dword ptr ds : [esi+edi*4+0x3E8]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        push 0
/*FIXUP push offset public_66fc60 @0x47c9fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47cacd
        mov ecx, dword ptr ds : [esi+0x370]
        mov eax, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x47ca1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        jmp public_47cacd
        public_47ca31 : nop
        mov ebx, 2
        jmp public_47c95c
        public_47ca3b : nop
        mov ebx, 3
        jmp public_47c95c
        public_47ca45 : nop
        mov ebx, 4
        jmp public_47c95c
        public_47ca4f : nop
        mov ebx, 5
        jmp public_47c95c
        public_47ca59 : nop
        mov ebx, 6
        jmp public_47c95c
        public_47ca63 : nop
        mov ebx, 7
        jmp public_47c95c
        public_47ca6d : nop
        mov ebx, 8
        jmp public_47c95c
        public_47ca77 : nop
        mov ebx, 9
        jmp public_47c95c
        public_47ca81 : nop
        mov ebx, 0xA
        jmp public_47c95c
        public_47ca8b : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [esi+edi*4+0x3E8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47cacd
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [esi+0x370]
        push 0
        push eax
        jmp public_47cac3
        public_47cab8 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x3E8]
        push 0
        push 0
        public_47cac3 : nop
        mov edx, dword ptr ds : [ecx]
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_47cacd : nop
        movzx edx, byte ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+edi*4+0x3E8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ebx, dword ptr ss : [esp+0x30]
        public_47caea : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        test ecx, ecx
        je public_47cc3f
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        je public_47cb23
        cmp dword ptr ds : [esi+0x978], 2
        je public_47cb10
        xor ebx, ebx
        jmp public_47cb27
        public_47cb10 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_47cb23
        mov dl, byte ptr ds : [eax+0x70]
        test dl, dl
        jne public_47cb23
        xor ebx, ebx
        jmp public_47cb27
        public_47cb23 : nop
        test ebx, ebx
        jg public_47cb3a
        public_47cb27 : nop
        mov al, byte ptr ss : [esp+0x54]
        test al, al
        jne public_47cb3a
        push 0
/*FIXUP push offset public_5c8ce0 @0x47cb31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        jmp public_47cb8a
        public_47cb3a : nop
        push ebx
        lea ebp, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x47cb41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push ebp
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push ebp
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        movzx edx, byte ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        push 0
        push 0
        push 1
        public_47cb8a : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xA8]
        cmp dword ptr ds : [esi+0x32C], 3
        jne public_47cbd4
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, dword ptr ds : [public_674a8c]
        mov al, 1
        je public_47cbbb
        cmp ecx, dword ptr ds : [public_674a88]
        je public_47cbbb
        mov cl, byte ptr ds : [esi+0x35C]
        test cl, cl
        je public_47cbbd
        public_47cbbb : nop
        xor al, al
        public_47cbbd : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        public_47cbd4 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_47cc11
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        movzx eax, byte ptr ss : [esp+0x2C]
        push 0
        push eax
        push 0xC
        jmp public_47cc30
        public_47cc11 : nop
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        jne public_47cc3f
        mov eax, dword ptr ds : [esi+0x32C]
        test eax, eax
        je public_47cc2a
        cmp eax, 2
        jne public_47cc3f
        public_47cc2a : nop
        push 0
        push 1
        push 1
        public_47cc30 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x424]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        public_47cc3f : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x410]
        test ecx, ecx
        mov bl, byte ptr ss : [esp+0x44]
        je public_47cd7b
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jle public_47cd1e
        test bl, bl
        jne public_47cd1e
        push 0xFFFFFFFF
        push eax
        lea ebp, ds:[esi+0x508]
        push ebp
        call public_4779a0
        mov ecx, dword ptr ds : [esi+edi*4+0x410]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push ebp
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        movzx edx, byte ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+edi*4+0x410]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47cd0d
        mov ecx, dword ptr ds : [esi+0x378]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x37C]
        or byte ptr ds : [eax+0x6C], 3
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        je public_47ccdd
        cmp dword ptr ds : [esi+0x978], 1
        jmp public_47ccee
        public_47ccdd : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47ccfe
        cmp dword ptr ds : [eax+0x978], 1
        public_47ccee : nop
        je public_47ccfe
        mov eax, dword ptr ds : [esi+0x37C]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        jmp public_47cd0a
        public_47ccfe : nop
        mov eax, dword ptr ds : [esi+0x37C]
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        public_47cd0a : nop
        mov byte ptr ds : [eax+0x6C], cl
        public_47cd0d : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x460]
        test ecx, ecx
        je public_47cd7b
        push 0
        push 0
        jmp public_47cd71
        public_47cd1e : nop
        mov eax, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_5c8ce0 @0x47cd22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x460]
        test ecx, ecx
        je public_47cd48
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        public_47cd48 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47cd7b
        mov ecx, dword ptr ds : [esi+0x378]
        mov eax, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_5c8ce0 @0x47cd5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x37C]
        push 0
        push 1
        public_47cd71 : nop
        mov edx, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [edx+0xA8]
        public_47cd7b : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x49C]
        test ecx, ecx
        je public_47cdac
        test bl, bl
        push 0
        je public_47cd9d
        mov eax, dword ptr ds : [ecx]
        push 0x576
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        jmp public_47cdac
        public_47cd9d : nop
        mov edx, dword ptr ds : [ecx]
/*FIXUP push offset public_5c8ce0 @0x47cd9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_47cdac : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x474]
        test ecx, ecx
        je public_47ce52
        mov ebx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 0x64
        push 0x40
        call dword ptr ds : [eax+0xA8]
        cmp ebx, 0x46
        jl public_47cde2
        mov byte ptr ss : [esp+0x54], 0x4B
        mov byte ptr ss : [esp+0x55], 0xC2
        mov byte ptr ss : [esp+0x56], 0x30
        jmp public_47ce07
        public_47cde2 : nop
        cmp ebx, 0x1E
        jl public_47cdf8
        mov byte ptr ss : [esp+0x54], 0xF5
        mov byte ptr ss : [esp+0x55], 0xEA
        mov byte ptr ss : [esp+0x56], 0x26
        jmp public_47ce07
        public_47cdf8 : nop
        mov al, 0x26
        mov byte ptr ss : [esp+0x54], 0xFF
        mov byte ptr ss : [esp+0x55], al
        mov byte ptr ss : [esp+0x56], al
        public_47ce07 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x474]
        mov edx, dword ptr ds : [ecx]
        push 0
        mov byte ptr ss : [esp+0x5B], 0xFF
        mov ebp, dword ptr ss : [esp+0x58]
        push ebp
        push 0x3F
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47ce52
        mov ecx, dword ptr ds : [esi+0x374]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 0x64
        push 0x40
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ds : [ecx]
        push 0
        push ebp
        push 0x3F
        call dword ptr ds : [edx+0xA8]
        public_47ce52 : nop
        mov eax, dword ptr ds : [esi+edi*4+0x488]
        test eax, eax
        je public_47ceff
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [public_674a8c]
        je public_47cead
        cmp eax, dword ptr ds : [public_674a88]
        je public_47cead
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        jne public_47ceb1
        mov eax, dword ptr ds : [esi+0x32C]
        test eax, eax
        je public_47ce8c
        cmp eax, 2
        jne public_47ceb1
        public_47ce8c : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_47ce98
        xor bl, bl
        jmp public_47ceb5
        public_47ce98 : nop
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [esi+0x330]
        push 0
        push eax
        call public_585f20
        test eax, eax
        jne public_47ceb1
        public_47cead : nop
        xor bl, bl
        jmp public_47ceb5
        public_47ceb1 : nop
        mov bl, byte ptr ss : [esp+0x3C]
        public_47ceb5 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x488]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        test bl, bl
        je public_47ceff
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        mov ecx, dword ptr ds : [esi+edi*4+0x488]
        push 0
        je public_47cef3
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x30
        call dword ptr ds : [eax+0xA8]
        jmp public_47ceff
        public_47cef3 : nop
        mov edx, dword ptr ds : [ecx]
        push 1
        push 0x30
        call dword ptr ds : [edx+0xA8]
        public_47ceff : nop
        mov eax, dword ptr ds : [esi+edi*4+0x460]
        test eax, eax
        je public_47d040
        mov eax, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        test eax, eax
        je public_47d040
        mov eax, dword ptr ds : [public_66873c]
        xor ebp, ebp
        test eax, eax
        jbe public_47cfdc
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47cf88
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x48]
        push eax
        mov ecx, ebx
        call public_438060
        fcom dword ptr ss : [ebp+0x64]
        fnstsw ax
        test ah, 1
        jne public_47cf66
        fstp st(0)
        mov ebp, 0x41A
        xor ebx, ebx
        jmp public_47cfdc
        public_47cf66 : nop
        fcomp dword ptr ss : [ebp+0x68]
        fnstsw ax
        test ah, 0x41
        jne public_47cf7c
        mov ebp, 0x41C
        mov ebx, 2
        jmp public_47cfdc
        public_47cf7c : nop
        mov ebp, 0x41B
        mov ebx, 1
        jmp public_47cfdc
        public_47cf88 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [public_5c632c]
        add esp, 4
        push eax
        mov ecx, ebx
        call public_438060
        fld st(0)
        mov ecx, dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [ecx+0x5C]
        fnstsw ax
        test ah, 0x41
        jp public_47cfbc
        fstp st(0)
        mov ebp, 0x417
        mov ebx, 3
        jmp public_47cfdc
        public_47cfbc : nop
        fcomp dword ptr ds : [ecx+0x60]
        fnstsw ax
        test ah, 5
        jp public_47cfd2
        mov ebp, 0x419
        mov ebx, 5
        jmp public_47cfdc
        public_47cfd2 : nop
        mov ebp, 0x418
        mov ebx, 4
        public_47cfdc : nop
        mov eax, dword ptr ds : [ebx*4+public_611a4c]
        mov ecx, dword ptr ds : [esi+edi*4+0x460]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x460]
        mov edx, dword ptr ds : [ecx]
        push 0
        push ebp
        push 3
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47d040
        mov ecx, dword ptr ds : [esi+0x37C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        push 3
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [ebx*4+public_611a4c]
        mov ecx, dword ptr ds : [esi+0x37C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        public_47d040 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x3FC]
        test ecx, ecx
        je public_47d05d
        movzx eax, byte ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        public_47d05d : nop
        mov ebp, dword ptr ds : [esi+edi*4+0x44C]
        test ebp, ebp
        je public_47d167
        mov eax, dword ptr ds : [esi+edi*4+0x438]
        test eax, eax
        je public_47d167
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x40], 0
        je public_47d0d3
        mov dword ptr ss : [ebp+0x2EC], edi
        mov ebx, dword ptr ds : [eax+0x78]
        test ebx, ebx
        je public_47d0c3
        mov edx, dword ptr ss : [ebp]
        push 0
        push ebx
        push 4
        mov ecx, ebp
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_47d0c3
        mov ecx, dword ptr ds : [esi+0x36C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebx
        push 4
        call dword ptr ds : [eax+0xA8]
        public_47d0c3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x88]
        mov dword ptr ss : [esp+0x40], edx
        jmp public_47d0f7
        public_47d0d3 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        push 0
        push 0xFFFFFFFF
        mov ecx, ebp
        push 0x17
        je public_47d0ee
        mov eax, dword ptr ss : [ebp]
        call dword ptr ds : [eax+0xA8]
        jmp public_47d0f7
        public_47d0ee : nop
        mov edx, dword ptr ss : [ebp]
        call dword ptr ds : [edx+0xA8]
        public_47d0f7 : nop
        mov eax, dword ptr ss : [ebp]
        push 0x10000
        push 0x10000
        push 0x19
        mov ecx, ebp
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x4C4]
        test ecx, ecx
        je public_47d126
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x19
        call dword ptr ds : [edx+0xA8]
        public_47d126 : nop
        movzx ebx, byte ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        push 0
        push ebx
        push 0xC
        mov ecx, ebp
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x438]
        mov edx, dword ptr ds : [ecx]
        push 0
        push ebx
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [esi+edi*4+0x438]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 3
        call dword ptr ds : [eax+0xA8]
        public_47d167 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x438]
        test ecx, ecx
        je public_47d27b
        mov eax, dword ptr ds : [esi+edi*4+0x3FC]
        test eax, eax
        je public_47d27b
        mov eax, dword ptr ds : [esi+edi*4+0x3E8]
        test eax, eax
        je public_47d27b
        mov eax, dword ptr ds : [esi+edi*4+0x410]
        test eax, eax
        je public_47d27b
        mov eax, dword ptr ds : [esi+edi*4+0x424]
        test eax, eax
        je public_47d27b
        mov al, byte ptr ss : [esp+0x48]
        test al, al
        jne public_47d1c6
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        jne public_47d1c6
        mov bl, 1
        jmp public_47d1c8
        public_47d1c6 : nop
        xor bl, bl
        public_47d1c8 : nop
        movzx ebp, bl
        mov al, 0x80
        push ebp
        lea edx, ss:[esp+0x58]
        push edx
        mov byte ptr ss : [esp+0x5C], al
        mov byte ptr ss : [esp+0x5D], al
        mov byte ptr ss : [esp+0x5E], al
        mov byte ptr ss : [esp+0x5F], 0xFF
        mov eax, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x3FC]
        mov eax, dword ptr ds : [ecx]
        push ebp
        lea edx, ss:[esp+0x58]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+edi*4+0x410]
        mov al, 0xC0
        push ebp
        lea edx, ss:[esp+0x44]
        push edx
        mov byte ptr ss : [esp+0x48], al
        mov byte ptr ss : [esp+0x49], al
        mov byte ptr ss : [esp+0x4A], al
        mov byte ptr ss : [esp+0x4B], 0xFF
        mov eax, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_47d239
        mov bl, 1
        public_47d239 : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x3E8]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        mov dl, bl
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_47d25e
        mov bl, 1
        public_47d25e : nop
        mov esi, dword ptr ds : [esi+edi*4+0x424]
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        mov cl, bl
        lea edx, ss:[esp+0x40]
        push ecx
        push edx
        push 0x33
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        public_47d27b : nop
        mov eax, dword ptr ss : [esp+0x24]
        inc dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x2C]
        public_47d285 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x34
        UNREACHABLE_TRAP(0x47c740)
        ASM_EXPORT_ENTRY_SINGLE(0x47ca8b, public_47ca8b)
    }
}

#undef public_47c765
#undef public_47c77c
#undef public_47c7a9
#undef public_47c7c2
#undef public_47c7de
#undef public_47c801
#undef public_47c809
#undef public_47c833
#undef public_47c855
#undef public_47c86f
#undef public_47c881
#undef public_47c8c2
#undef public_47c8e9
#undef public_47c914
#undef public_47c930
#undef public_47c939
#undef public_47c957
#undef public_47c95c
#undef public_47ca31
#undef public_47ca3b
#undef public_47ca45
#undef public_47ca4f
#undef public_47ca59
#undef public_47ca63
#undef public_47ca6d
#undef public_47ca77
#undef public_47ca81
#undef public_47ca8b
#undef public_47cab8
#undef public_47cac3
#undef public_47cacd
#undef public_47caea
#undef public_47cb10
#undef public_47cb23
#undef public_47cb27
#undef public_47cb3a
#undef public_47cb8a
#undef public_47cbbb
#undef public_47cbbd
#undef public_47cbd4
#undef public_47cc11
#undef public_47cc2a
#undef public_47cc30
#undef public_47cc3f
#undef public_47ccdd
#undef public_47ccee
#undef public_47ccfe
#undef public_47cd0a
#undef public_47cd0d
#undef public_47cd1e
#undef public_47cd48
#undef public_47cd71
#undef public_47cd7b
#undef public_47cd9d
#undef public_47cdac
#undef public_47cde2
#undef public_47cdf8
#undef public_47ce07
#undef public_47ce52
#undef public_47ce8c
#undef public_47ce98
#undef public_47cead
#undef public_47ceb1
#undef public_47ceb5
#undef public_47cef3
#undef public_47ceff
#undef public_47cf66
#undef public_47cf7c
#undef public_47cf88
#undef public_47cfbc
#undef public_47cfd2
#undef public_47cfdc
#undef public_47d040
#undef public_47d05d
#undef public_47d0c3
#undef public_47d0d3
#undef public_47d0ee
#undef public_47d0f7
#undef public_47d126
#undef public_47d167
#undef public_47d1c6
#undef public_47d1c8
#undef public_47d239
#undef public_47d25e
#undef public_47d27b
#undef public_47d285

#pragma init_seg(compiler)
extern "C" void const* const public_47ca8b = __AsmFindLabelExport(&internal_47c740, 0x47ca8b);
