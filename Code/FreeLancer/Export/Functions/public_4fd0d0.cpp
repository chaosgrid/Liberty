#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fd0d0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4fd0f0 _public_4fd0f0
#define public_4fd107 _public_4fd107
#define public_4fd113 _public_4fd113
#define public_4fd191 _public_4fd191
#define public_4fd1a5 _public_4fd1a5
#define public_4fd1b4 _public_4fd1b4
#define public_4fd1c4 _public_4fd1c4
#define public_4fd1d3 _public_4fd1d3
#define public_4fd1d6 _public_4fd1d6
#define public_4fd1e1 _public_4fd1e1
#define public_4fd1f0 _public_4fd1f0
#define public_4fd21f _public_4fd21f

PROC_DECLARE(0x4fd0d0, internal_4fd0d0, public_4fd0d0);
extern "C" NAKED register_t __cdecl internal_4fd0d0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_4fd1e1
        mov ebx, dword ptr ss : [esp+0x44]
        xor edi, edi
        lea esp, ss:[esp]
        public_4fd0f0 : nop
        cmp ebx, edi
        je public_4fd107
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_4fd1d6
        cmp dword ptr ds : [eax], ebx
        jne public_4fd1d6
        public_4fd107 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, edi
        je public_4fd113
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4fd113 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, edi
        je public_4fd191
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_4fd191 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, edi
        je public_4fd1a5
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_4fd1a5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, edi
        je public_4fd1b4
        call public_4f7a90
        mov dword ptr ds : [esi+0x10], edi
        public_4fd1b4 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edi
        je public_4fd1c4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edi
        public_4fd1c4 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, edi
        je public_4fd1d3
        call public_537ad0
        mov dword ptr ds : [esi+0x14], edi
        public_4fd1d3 : nop
        mov dword ptr ds : [esi+8], edi
        public_4fd1d6 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+4]
        jne public_4fd0f0
        public_4fd1e1 : nop
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_4fd21f
        lea ebx, ds:[ebx]
        public_4fd1f0 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_502d90
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_4fd1f0
        public_4fd21f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4fd0d0)
    }
}

#undef public_4fd0f0
#undef public_4fd107
#undef public_4fd113
#undef public_4fd191
#undef public_4fd1a5
#undef public_4fd1b4
#undef public_4fd1c4
#undef public_4fd1d3
#undef public_4fd1d6
#undef public_4fd1e1
#undef public_4fd1f0
#undef public_4fd21f
