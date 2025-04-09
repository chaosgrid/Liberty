#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_518f20);
CLANG_FORWARD_PROC_SYMBOL(public_51cbb0);

#define public_518bc9 _public_518bc9
#define public_518bd8 _public_518bd8
#define public_518bda _public_518bda
#define public_518bff _public_518bff
#define public_518c01 _public_518c01
#define public_518c55 _public_518c55
#define public_518c57 _public_518c57
#define public_518c7b _public_518c7b
#define public_518c7d _public_518c7d
#define public_518ccc _public_518ccc
#define public_518d39 _public_518d39
#define public_518d3b _public_518d3b
#define public_518e00 _public_518e00

PROC_DECLARE(0x518af0, internal_518af0, public_518af0);
extern "C" NAKED register_t __cdecl internal_518af0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov ebp, ecx
        call public_51cbb0
        xor esi, esi
        mov dword ptr ss : [ebp+0x14C], esi
        mov dword ptr ss : [ebp+0x150], esi
        mov dword ptr ss : [ebp+0x154], esi
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, esi
        je public_518d3b
        add eax, 0xFFFFFFF8
        cmp eax, esi
        je public_518d3b
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, esi
        je public_518bc9
        add eax, 0xFFFFFFF8
        cmp eax, esi
        je public_518bc9
        add eax, 0xC
        cmp eax, esi
        je public_518bc9
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, esi
        je public_518bc9
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_518bc9
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_518bc9
        mov ecx, dword ptr ds : [eax+0x74]
        mov dword ptr ss : [ebp+0x1D8], ecx
        mov edx, dword ptr ds : [eax+0x70]
        mov dword ptr ss : [ebp+0x1D4], edx
        mov ecx, dword ptr ds : [eax+0x78]
        mov dword ptr ss : [ebp+0x1DC], ecx
        mov edx, dword ptr ds : [eax+0x7C]
        mov dword ptr ss : [ebp+0x1E0], edx
        mov ecx, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [ebp+0x1E4], ecx
        mov edx, dword ptr ds : [eax+0x84]
        mov dword ptr ss : [ebp+0x1E8], edx
        fld dword ptr ds : [eax+0x6C]
        fld dword ptr ds : [eax+0x68]
        mov dword ptr ss : [ebp+0x140], esi
        fstp dword ptr ss : [ebp+0x144]
        fstp dword ptr ss : [ebp+0x148]
        public_518bc9 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, esi
        je public_518bd8
        lea ecx, ds:[eax-8]
        jmp public_518bda
        public_518bd8 : nop
        xor ecx, ecx
        public_518bda : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        lea ebx, ss:[ebp+0x1B0]
        mov esi, eax
        mov ecx, 9
        mov edi, ebx
        rep movsd
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        je public_518bff
        lea ecx, ds:[eax-8]
        jmp public_518c01
        public_518bff : nop
        xor ecx, ecx
        public_518c01 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        lea edi, ss:[ebp+0x17C]
        mov ecx, 9
        rep movsd
        fld dword ptr ds : [ebx+4]
        lea eax, ss:[ebp+0x204]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [ebp+0xC0]
        xor ebx, ebx
        cmp eax, ebx
        je public_518c55
        lea ecx, ds:[eax-8]
        jmp public_518c57
        public_518c55 : nop
        xor ecx, ecx
        public_518c57 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov byte ptr ss : [ebp+0x34], 1
        lea edi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, ebx
        je public_518c7b
        lea ecx, ds:[eax-8]
        jmp public_518c7d
        public_518c7b : nop
        xor ecx, ecx
        public_518c7d : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x6C]
        push edx
/*FIXUP push offset public_5dbafc @0x518c89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbafc
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_518ccc
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[ebp+0x100]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea edi, ss:[ebp+0x10C]
        mov ecx, 9
        lea esi, ss:[esp+0x2C]
        rep movsd
        jmp public_518d39
        public_518ccc : nop
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[ebp+0x100]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x18], 0xC0800000
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x12C], eax
        mov dword ptr ss : [ebp+0x11C], eax
        mov dword ptr ss : [ebp+0x10C], eax
        mov dword ptr ss : [ebp+0x128], ebx
        mov dword ptr ss : [ebp+0x124], ebx
        mov dword ptr ss : [ebp+0x120], ebx
        mov dword ptr ss : [ebp+0x118], ebx
        mov dword ptr ss : [ebp+0x114], ebx
        mov dword ptr ss : [ebp+0x110], ebx
        public_518d39 : nop
        xor esi, esi
        public_518d3b : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, esi
        je public_518e00
        add eax, 0xFFFFFFF8
        cmp eax, esi
        je public_518e00
        push 1
        push esi
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        call public_518f20
        mov edx, dword ptr ss : [esp+0x44]
        lea edi, ss:[ebp+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[ebp+0x130]
        pop edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        pop esi
        mov byte ptr ss : [ebp+0x34], 1
        mov byte ptr ss : [ebp+0x214], 1
        mov dword ptr ds : [eax+4], edx
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 0x54
        ret 4
        public_518e00 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dbc20 @0x518e06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbc20
        push 0x3C9
/*FIXUP push offset public_5dbacc @0x518e10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x518e1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x214], 1
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x518af0)
    }
}

#undef public_518bc9
#undef public_518bd8
#undef public_518bda
#undef public_518bff
#undef public_518c01
#undef public_518c55
#undef public_518c57
#undef public_518c7b
#undef public_518c7d
#undef public_518ccc
#undef public_518d39
#undef public_518d3b
#undef public_518e00
