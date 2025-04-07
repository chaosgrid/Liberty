#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8370);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9340);
CLANG_FORWARD_PROC_SYMBOL(public_6eaa3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9b06);

#define public_6eaa420 _public_6eaa420
#define public_6eaa440 _public_6eaa440
#define public_6eaa44f _public_6eaa44f
#define public_6eaa4a3 _public_6eaa4a3
#define public_6eaa4b1 _public_6eaa4b1
#define public_6eaa4cb _public_6eaa4cb
#define public_6eaa4f4 _public_6eaa4f4
#define public_6eaa513 _public_6eaa513
#define public_6eaa52d _public_6eaa52d
#define public_6eaa535 _public_6eaa535
#define public_6eaa610 _public_6eaa610
#define public_6eaa628 _public_6eaa628
#define public_6eaa671 _public_6eaa671
#define public_6eaa68e _public_6eaa68e
#define public_6eaa6af _public_6eaa6af
#define public_6eaa6b1 _public_6eaa6b1
#define public_6eaa73f _public_6eaa73f
#define public_6eaa752 _public_6eaa752
#define public_6eaa769 _public_6eaa769

PROC_DECLARE(0x6eaa3e0, internal_6eaa3e0, public_6eaa3e0);
extern "C" NAKED register_t __cdecl internal_6eaa3e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9b06 @0x6eaa3e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9b06
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xAC]
        push edi
        mov edi, dword ptr ss : [ebp+0xA8]
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_6eaa769
        push ebx
        push esi
        xor ebx, ebx
        nop 
        public_6eaa420 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[edi+8]
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        je public_6eaa752
        lea esp, ss:[esp]
        public_6eaa440 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eaa44f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6eaa44f : nop
        push edi
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[ebp+0x70]
        mov dword ptr ss : [esp+0x118], ebx
        call public_6f7b0f0
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, eax
        je public_6eaa535
        lea esi, ds:[ecx+0x10]
        cmp esi, ebx
        je public_6eaa535
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+0xC]
        mov ebp, dword ptr ss : [esp+0x118]
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        je public_6eaa4cb
        public_6eaa4a3 : nop
        cmp dword ptr ds : [eax+8], ebp
        jne public_6eaa4b1
        cmp dword ptr ds : [eax+0xC], edi
        je public_6eaa68e
        public_6eaa4b1 : nop
        push ebx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        jne public_6eaa4a3
        public_6eaa4cb : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x118]
        lea edx, ss:[esp+0x1C]
        lea edi, ds:[ecx+0x54]
        push edx
        lea ecx, ds:[esi+0xC]
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        je public_6eaa52d
        add edi, 4
        public_6eaa4f4 : nop
        add eax, 0x28
        push eax
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6eaa513
        mov eax, dword ptr ss : [esp+0x1C]
        cmp ebp, dword ptr ds : [eax+0x48]
        je public_6eaa671
        public_6eaa513 : nop
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6eaa4f4
        public_6eaa52d : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        public_6eaa535 : nop
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x50], ebx
        call public_6eac5b0
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x9C], ebx
        mov byte ptr ss : [esp+0xA0], bl
        mov dword ptr ss : [esp+0xC0], ebx
        mov byte ptr ss : [esp+0xC4], bl
        call dword ptr ds : [public_6fb3030]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+0x38]
        mov dword ptr ss : [esp+0x58], edx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x94], edx
        mov ecx, dword ptr ds : [eax+0xC]
        add eax, 0x58
        mov dword ptr ss : [esp+0x98], ecx
        push eax
        lea ecx, ss:[esp+0xA0]
        call public_6ead6c0
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 0x14
        push edx
        lea ecx, ss:[esp+0xC4]
        call public_6ead640
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x5C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x60], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x68], edx
        mov ecx, dword ptr ds : [eax+0x30]
        xor edx, edx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x8C], ecx
        jle public_6eaa628
        lea ebp, ss:[esp+0x5C]
        lea ecx, ss:[esp+0x6C]
        sub eax, ebp
        lea esp, ss:[esp]
        public_6eaa610 : nop
        mov ebp, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ss : [esp+0x8C]
        inc edx
        add ecx, 4
        cmp edx, ebp
        jl public_6eaa610
        mov ebp, dword ptr ss : [esp+0x14]
        public_6eaa628 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [esp+0x104], ecx
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x34]
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x98], eax
        call public_6ea9340
        push edi
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[ebp+0x70]
        call public_6f7b0f0
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, eax
        je public_6eaa6af
        lea eax, ds:[ecx+0x10]
        jmp public_6eaa6b1
        public_6eaa671 : nop
        mov dword ptr ss : [esp+0x3C], eax
        inc dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x18]
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_6f1e390
        public_6eaa68e : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call public_6f28e10
        mov ebp, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        jmp public_6eaa73f
        public_6eaa6af : nop
        xor eax, eax
        public_6eaa6b1 : nop
        lea ecx, ds:[eax+0x18]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x4C]
        push eax
        call public_6f1e390
        mov dword ptr ss : [esp+0x34], ebx
        mov esi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x118]
        push ecx
        mov byte ptr ss : [esp+0x114], 1
        call public_6f49b00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        call public_6ea8370
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x34]
        push eax
        add ecx, 0x5C
        call public_6ea8cd0
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_6f00b60
        add esp, 4
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x110], bl
        call public_6ea7c30
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        je public_6eaa73f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ebx
        public_6eaa73f : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x28], eax
        jne public_6eaa440
        public_6eaa752 : nop
        mov eax, dword ptr ss : [ebp+0xAC]
        add edi, 0x14
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], edi
        jne public_6eaa420
        pop esi
        pop ebx
        public_6eaa769 : nop
        mov ecx, dword ptr ss : [esp+0x100]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 4
        UNREACHABLE_TRAP(0x6eaa3e0)
    }
}

#undef public_6eaa420
#undef public_6eaa440
#undef public_6eaa44f
#undef public_6eaa4a3
#undef public_6eaa4b1
#undef public_6eaa4cb
#undef public_6eaa4f4
#undef public_6eaa513
#undef public_6eaa52d
#undef public_6eaa535
#undef public_6eaa610
#undef public_6eaa628
#undef public_6eaa671
#undef public_6eaa68e
#undef public_6eaa6af
#undef public_6eaa6b1
#undef public_6eaa73f
#undef public_6eaa752
#undef public_6eaa769
