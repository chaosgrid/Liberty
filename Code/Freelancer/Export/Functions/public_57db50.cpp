#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_57db50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c40b3);

#define public_57db94 _public_57db94
#define public_57dc27 _public_57dc27
#define public_57dc92 _public_57dc92
#define public_57dd07 _public_57dd07
#define public_57dd13 _public_57dd13
#define public_57dd1a _public_57dd1a
#define public_57dd9d _public_57dd9d
#define public_57ddb7 _public_57ddb7
#define public_57de17 _public_57de17
#define public_57de20 _public_57de20
#define public_57de81 _public_57de81
#define public_57de88 _public_57de88
#define public_57de99 _public_57de99
#define public_57def3 _public_57def3
#define public_57df24 _public_57df24
#define public_57dfa4 _public_57dfa4
#define public_57dfbe _public_57dfbe
#define public_57e020 _public_57e020
#define public_57e029 _public_57e029
#define public_57e08a _public_57e08a
#define public_57e091 _public_57e091
#define public_57e0a2 _public_57e0a2
#define public_57e116 _public_57e116
#define public_57e137 _public_57e137
#define public_57e141 _public_57e141
#define public_57e1e6 _public_57e1e6
#define public_57e200 _public_57e200
#define public_57e241 _public_57e241
#define public_57e26c _public_57e26c
#define public_57e287 _public_57e287
#define public_57e29f _public_57e29f

PROC_DECLARE(0x57db50, internal_57db50, public_57db50);
extern "C" NAKED register_t __cdecl internal_57db50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
/*FIXUP push public_5c40b3 @0x57db5c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c40b3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        test ecx, ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, eax
        jbe public_57e29f
        mov esi, dword ptr ss : [esp+0x120]
        mov ebx, dword ptr ds : [public_5c62b0]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        public_57db94 : nop
        mov cx, word ptr ds : [edi]
        cmp cx, 0xD
        jne public_57dd1a
        cmp eax, edi
        je public_57dc92
        mov cl, byte ptr ss : [esp+0x124]
        test cl, cl
        mov ecx, edi
        je public_57dc27
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 1
        call public_46c800
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x110], 0
        call public_45eeb0
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62f4]
        jmp public_57dc92
        public_57dc27 : nop
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        lea ecx, ss:[esp+0xE8]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 3
        call public_46c800
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x110], 2
        call public_45eeb0
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_57dc92 : nop
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x110], 4
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 5
        call public_46c800
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x110], 4
        call public_45eeb0
        mov ecx, dword ptr ss : [esp+0x11C]
        add ebp, 2
        mov eax, ebp
        sar eax, 1
        add edi, 2
        cmp eax, ecx
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ebp
        jae public_57dd13
        cmp word ptr ds : [edi], 0xA
        public_57dd07 : nop
        jne public_57dd13
        add edi, 2
        add ebp, 2
        mov dword ptr ss : [esp+0x10], ebp
        public_57dd13 : nop
        mov eax, edi
        jmp public_57e141
        public_57dd1a : nop
        cmp cx, 0xA
        jne public_57df24
        cmp eax, edi
        je public_57de20
        mov cl, byte ptr ss : [esp+0x124]
        test cl, cl
        mov ecx, edi
        je public_57ddb7
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        lea ecx, ss:[esp+0x80]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 7
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 6
        je public_57dd9d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], 0
        public_57dd9d : nop
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62f4]
        jmp public_57de99
        public_57ddb7 : nop
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        lea ecx, ss:[esp+0xC0]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        lea edx, ss:[esp+0x78]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 9
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 8
        je public_57de17
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], 0
        public_57de17 : nop
        lea ecx, ss:[esp+0xB8]
        jmp public_57de88
        public_57de20 : nop
        push 0xFFFFFFFF
/*FIXUP push offset public_5cef90 @0x57de22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        lea ecx, ss:[esp+0x98]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        lea edx, ss:[esp+0x7C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 0xB
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x2C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 0xA
        je public_57de81
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], 0
        public_57de81 : nop
        lea ecx, ss:[esp+0x90]
        public_57de88 : nop
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_57de99 : nop
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x110], 0xC
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        lea edx, ss:[esp+0x70]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 0xD
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 0xC
        je public_57def3
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], 0
        public_57def3 : nop
        mov eax, dword ptr ss : [esp+0x11C]
        add ebp, 2
        mov ecx, ebp
        sar ecx, 1
        add edi, 2
        cmp ecx, eax
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ebp
        jae public_57dd13
        cmp word ptr ds : [edi], 0xD
        jmp public_57dd07
        public_57df24 : nop
        cmp cx, 0xB
        jne public_57e137
        cmp eax, edi
        je public_57e029
        mov cl, byte ptr ss : [esp+0x124]
        test cl, cl
        je public_57dfbe
        mov edx, edi
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        lea ecx, ss:[esp+0x58]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 0xE
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x4C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 0xF
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 0xE
        je public_57dfa4
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], 0
        public_57dfa4 : nop
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62f4]
        jmp public_57e0a2
        public_57dfbe : nop
        mov ecx, edi
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        lea ecx, ss:[esp+0xAC]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 0x11
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 0x10
        je public_57e020
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], 0
        public_57e020 : nop
        lea ecx, ss:[esp+0xA4]
        jmp public_57e091
        public_57e029 : nop
        push 0xFFFFFFFF
/*FIXUP push offset public_5cef90 @0x57e02b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        lea ecx, ss:[esp+0xD4]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x11C], 0x13
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 0x12
        je public_57e08a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], 0
        public_57e08a : nop
        lea ecx, ss:[esp+0xCC]
        public_57e091 : nop
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_57e0a2 : nop
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x40], eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x110], 0x14
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov ebp, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        push ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0x118], 0x15
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], 0x14
        je public_57e116
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        public_57e116 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 2
        add eax, 2
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        mov eax, edi
        jmp public_57e141
        public_57e137 : nop
        add edi, 2
        add ebp, 2
        mov dword ptr ss : [esp+0x10], ebp
        public_57e141 : nop
        mov edx, dword ptr ss : [esp+0x11C]
        mov ecx, ebp
        sar ecx, 1
        cmp ecx, edx
        jb public_57db94
        cmp eax, edi
        jae public_57e29f
        mov cl, byte ptr ss : [esp+0x124]
        sub edi, eax
        sar edi, 1
        test cl, cl
        push edi
        push eax
        je public_57e200
        lea ecx, ss:[esp+0x58]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x16
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x118], 0x17
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x110], bl
        je public_57e1e6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], 0
        public_57e1e6 : nop
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62f4]
        jmp public_57e29f
        public_57e200 : nop
        lea ecx, ss:[esp+0xFC]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x110], 0x18
        call dword ptr ds : [edx+0x1C]
        mov ebx, eax
        mov dword ptr ss : [esp+0x48], ebx
        mov edi, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        mov byte ptr ss : [esp+0x114], 0x19
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_57e241
        mov ebp, eax
        public_57e241 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x44], edi
        test edi, edi
        mov byte ptr ss : [esp+0x110], 0x1A
        je public_57e26c
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi], eax
        public_57e26c : nop
        mov ecx, dword ptr ds : [esi+8]
        inc ecx
        test ebx, ebx
        mov dword ptr ds : [esi+8], ecx
        mov byte ptr ss : [esp+0x110], 0x18
        je public_57e287
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_57e287 : nop
        lea ecx, ss:[esp+0xF4]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_57e29f : nop
        mov ecx, dword ptr ss : [esp+0x108]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x57db50)
    }
}

#undef public_57db94
#undef public_57dc27
#undef public_57dc92
#undef public_57dd07
#undef public_57dd13
#undef public_57dd1a
#undef public_57dd9d
#undef public_57ddb7
#undef public_57de17
#undef public_57de20
#undef public_57de81
#undef public_57de88
#undef public_57de99
#undef public_57def3
#undef public_57df24
#undef public_57dfa4
#undef public_57dfbe
#undef public_57e020
#undef public_57e029
#undef public_57e08a
#undef public_57e091
#undef public_57e0a2
#undef public_57e116
#undef public_57e137
#undef public_57e141
#undef public_57e1e6
#undef public_57e200
#undef public_57e241
#undef public_57e26c
#undef public_57e287
#undef public_57e29f
