#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6217ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6217ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6224c20);
CLANG_FORWARD_PROC_SYMBOL(public_6224fd0);
CLANG_FORWARD_PROC_SYMBOL(public_62257b0);
CLANG_FORWARD_PROC_SYMBOL(public_6225940);
CLANG_FORWARD_PROC_SYMBOL(public_6226690);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);
CLANG_FORWARD_JUMP_SYMBOL(public_6248e2d);

#define public_6224c73 _public_6224c73
#define public_6224cb8 _public_6224cb8
#define public_6224cfb _public_6224cfb
#define public_6224d35 _public_6224d35
#define public_6224e52 _public_6224e52
#define public_6224e9b _public_6224e9b
#define public_6224edc _public_6224edc
#define public_6224eee _public_6224eee
#define public_6224f6d _public_6224f6d
#define public_6224f6f _public_6224f6f
#define public_6224f90 _public_6224f90
#define public_6224f94 _public_6224f94
#define public_6224fad _public_6224fad

PROC_DECLARE(0x6224c20, internal_6224c20, public_6224c20);
extern "C" NAKED register_t __cdecl internal_6224c20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248e2d @0x6224c28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248e2d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6257a58]
        mov dword ptr fs : [0], esp
        sub esp, 0x150
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        cmp eax, ebp
        push edi
        jne public_6224c73
        mov eax, dword ptr ds : [public_6257a5c]
        mov edi, dword ptr ds : [public_6257a4c]
        sub eax, edi
        mov edx, dword ptr ds : [public_6257a48]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257a50]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_6224fd0
        public_6224c73 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_6257b9c]
        mov dword ptr ss : [esp+0x168], ebp
        cmp ecx, ebp
        je public_6224f94
        mov ebx, dword ptr ss : [esp+0x170]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [public_6257a6c]
        mov edi, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        jne public_6224cb8
        call public_623e830
        mov dword ptr ds : [public_6257a6c], eax
        public_6224cb8 : nop
        mov esi, dword ptr ss : [esp+0x174]
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x24]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_6257a6c]
        mov dword ptr ss : [esp+0x50], edx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x58], ecx
        jne public_6224cfb
        call public_623e830
        mov dword ptr ds : [public_6257a6c], eax
        public_6224cfb : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xC]
        push ecx
        lea ecx, ss:[esp+0x24]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x5C], edx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x64], ecx
        je public_6224d35
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebp
        public_6224d35 : nop
        mov eax, dword ptr ds : [ebx+0xC0]
        mov edx, dword ptr ds : [public_6257b9c]
        lea ebp, ss:[esp+0x10]
        mov ecx, dword ptr ds : [eax+0x74]
        mov eax, dword ptr ds : [eax+0x60]
        mov edi, dword ptr ds : [edx]
        push ebp
        lea ebp, ss:[esp+0x54]
        push ebp
        push ecx
        push eax
        push edx
        call dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_6224f90
        mov ecx, dword ptr ds : [ebx+0xC0]
        mov al, byte ptr ds : [ecx+0x84]
        test al, al
        je public_6224edc
        lea ecx, ss:[esp+0x70]
        call public_6206c70
        fld dword ptr ss : [esp+0x178]
        fdiv dword ptr ss : [esp+0x17C]
        mov edx, dword ptr ds : [ebx+0xC0]
        mov dword ptr ss : [esp+0x9C], 0
        mov dword ptr ss : [esp+0x98], 0
        mov dword ptr ss : [esp+0x94], 0
        mov eax, dword ptr ds : [edx+0x88]
        lea edx, ss:[esp+0x70]
        push edx
        mov edx, dword ptr ds : [ebx+0x8C]
        mov ecx, dword ptr ds : [eax]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, esi
        mov edi, dword ptr ss : [esp+0x14]
        push 0
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x48], ecx
        lea ecx, ss:[esp+0xD4]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        call public_6217ad0
        mov eax, dword ptr ds : [public_6257a6c]
        test eax, eax
        jne public_6224e52
        call public_623e830
        mov dword ptr ds : [public_6257a6c], eax
        public_6224e52 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0xD4]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xD0]
        lea ecx, ss:[esp+0x100]
        push eax
        call public_6217ab0
        push 0
        lea ecx, ss:[esp+0xA4]
        call public_6217ad0
        mov eax, dword ptr ds : [public_6257a6c]
        test eax, eax
        jne public_6224e9b
        call public_623e830
        mov dword ptr ds : [public_6257a6c], eax
        public_6224e9b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0x104]
        push edx
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xA0]
        lea ecx, ss:[esp+0x130]
        push eax
        call public_6217ab0
        lea edx, ss:[esp+0x130]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        public_6224edc : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6224eee
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6224eee : nop
        mov ecx, 6
        lea edi, ss:[esp+0x20]
        rep movsd
        lea esi, ds:[ebx+0xB4]
        mov dword ptr ss : [esp+0x1C], esi
        mov ecx, dword ptr ds : [esi+8]
        mov byte ptr ss : [esp+0x168], 1
        call public_623ec90
        mov ebp, eax
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x6C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x168], 2
        je public_6224f6d
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x178]
        lea edi, ss:[ebp+0xC]
        mov ecx, 6
        lea esi, ss:[esp+0x20]
        push eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x180]
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0x28], ecx
        lea ecx, ss:[ebp+0x30]
        mov dword ptr ss : [ebp+0x24], edx
        call public_62257b0
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [ebp+0x2C]
        jmp public_6224f6f
        public_6224f6d : nop
        xor ebp, ebp
        public_6224f6f : nop
        push ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0x16C], 1
        call public_6226690
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x168], 0
        call public_6225940
        public_6224f90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6224f94 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x15C], 0xFFFFFFFF
        test eax, eax
        pop ebx
        je public_6224fad
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6224fad : nop
        mov ecx, dword ptr ss : [esp+0x150]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x15C
        ret 0x10
        UNREACHABLE_TRAP(0x6224c20)
    }
}

#undef public_6224c73
#undef public_6224cb8
#undef public_6224cfb
#undef public_6224d35
#undef public_6224e52
#undef public_6224e9b
#undef public_6224edc
#undef public_6224eee
#undef public_6224f6d
#undef public_6224f6f
#undef public_6224f90
#undef public_6224f94
#undef public_6224fad
