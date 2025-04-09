#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503a80);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf96c);

#define public_503ab9 _public_503ab9
#define public_503afa _public_503afa
#define public_503b0e _public_503b0e
#define public_503b24 _public_503b24
#define public_503b65 _public_503b65
#define public_503b79 _public_503b79
#define public_503ba2 _public_503ba2
#define public_503be3 _public_503be3
#define public_503bf7 _public_503bf7
#define public_503c22 _public_503c22
#define public_503c32 _public_503c32
#define public_503c41 _public_503c41
#define public_503c57 _public_503c57
#define public_503c67 _public_503c67
#define public_503c76 _public_503c76
#define public_503c8f _public_503c8f
#define public_503c9f _public_503c9f
#define public_503cae _public_503cae

PROC_DECLARE(0x503a80, internal_503a80, public_503a80);
extern "C" NAKED register_t __cdecl internal_503a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf96c @0x503a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf96c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        lea ebp, ds:[esi+0x28]
        mov dword ptr ss : [esp+0x50], 3
        je public_503ab9
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_503ab9 : nop
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        je public_503afa
        lea ecx, ss:[esp+0x18]
        call public_4215b0
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov edx, dword ptr ds : [edi]
        push 0xFFFFFFFF
        mov ecx, edi
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_503afa : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_503b0e
        call public_5379b0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_503b0e : nop
        mov ecx, ebp
        call public_502d90
        mov ecx, dword ptr ds : [esi+0x50]
        test ecx, ecx
        lea edi, ds:[esi+0x48]
        je public_503b24
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_503b24 : nop
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        je public_503b65
        lea ecx, ss:[esp+0x18]
        call public_4215b0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov eax, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        mov ecx, ebx
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_503b65 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_503b79
        call public_5379b0
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_503b79 : nop
        mov ecx, edi
        call public_502d90
        mov ecx, dword ptr ds : [esi+0x68]
        lea eax, ds:[esi+0x58]
        push eax
        add ecx, 0x28
        mov dword ptr ss : [esp+0x14], eax
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+0x40]
        add esi, 0x38
        test ecx, ecx
        je public_503ba2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_503ba2 : nop
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_503be3
        lea ecx, ss:[esp+0x18]
        call public_4215b0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov eax, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        mov ecx, ebx
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_503be3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_503bf7
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_503bf7 : nop
        mov ecx, esi
        call public_502d90
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x50], 2
        call public_502d90
        mov ecx, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 1
        je public_503c22
        call public_4f7a90
        mov dword ptr ds : [edi+8], ebx
        public_503c22 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_503c32
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], ebx
        public_503c32 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, ebx
        je public_503c41
        call public_537ad0
        mov dword ptr ds : [edi+0xC], ebx
        public_503c41 : nop
        mov dword ptr ds : [edi], ebx
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0
        je public_503c57
        call public_4f7a90
        mov dword ptr ds : [esi+8], ebx
        public_503c57 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_503c67
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], ebx
        public_503c67 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_503c76
        call public_537ad0
        mov dword ptr ds : [esi+0xC], ebx
        public_503c76 : nop
        mov dword ptr ds : [esi], ebx
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_503c8f
        call public_4f7a90
        mov dword ptr ss : [ebp+8], ebx
        public_503c8f : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        je public_503c9f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+4], ebx
        public_503c9f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, ebx
        je public_503cae
        call public_537ad0
        mov dword ptr ss : [ebp+0xC], ebx
        public_503cae : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        mov dword ptr ss : [ebp], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x503a80)
    }
}

#undef public_503ab9
#undef public_503afa
#undef public_503b0e
#undef public_503b24
#undef public_503b65
#undef public_503b79
#undef public_503ba2
#undef public_503be3
#undef public_503bf7
#undef public_503c22
#undef public_503c32
#undef public_503c41
#undef public_503c57
#undef public_503c67
#undef public_503c76
#undef public_503c8f
#undef public_503c9f
#undef public_503cae
