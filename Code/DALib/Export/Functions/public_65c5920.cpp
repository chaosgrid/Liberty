#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5920);
CLANG_FORWARD_PROC_SYMBOL(public_65c5a90);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c5951 _public_65c5951
#define public_65c5953 _public_65c5953
#define public_65c5973 _public_65c5973
#define public_65c59c3 _public_65c59c3
#define public_65c59d3 _public_65c59d3
#define public_65c59ec _public_65c59ec
#define public_65c59f5 _public_65c59f5
#define public_65c5a04 _public_65c5a04
#define public_65c5a0f _public_65c5a0f
#define public_65c5a34 _public_65c5a34
#define public_65c5a4b _public_65c5a4b
#define public_65c5a63 _public_65c5a63
#define public_65c5a78 _public_65c5a78

PROC_DECLARE(0x65c5920, internal_65c5920, public_65c5920);
extern "C" NAKED register_t __cdecl internal_65c5920()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 0x14
        mov dword ptr ds : [edi], offset public_65c7570
        call public_65c6a66
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_65c5951
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov esi, eax
        jmp public_65c5953
        public_65c5951 : nop
        xor esi, esi
        public_65c5953 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [edi+0xC]
        push ebp
        mov ebp, dword ptr ds : [edi+4]
        je public_65c5973
        mov byte ptr ds : [esi+0x10], bl
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_65c5973 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 4
        push esi
/*FIXUP push offset _public_65c5a90 @0x65c597b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c5a90
        push ebx
        push ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x14], ebx
        call dword ptr ds : [public_65c7048]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_65c5a0f
        cmp byte ptr ds : [esi+0x10], bl
        jne public_65c5a04
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65c755c @0x65c59a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c755c
        push ecx
        call dword ptr ds : [public_65c7038]
        test eax, eax
        je public_65c59f5
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_65c59c3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], ebx
        public_65c59c3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_65c59d3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_65c59d3 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_65c59ec
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], ebx
        public_65c59ec : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call dword ptr ds : [public_65c7044]
        public_65c59f5 : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x10], 1
        public_65c5a04 : nop
        push esi
        call public_65c6a60
        add esp, 4
        jmp public_65c5a63
        public_65c5a0f : nop
        mov eax, dword ptr ds : [public_65ca2a4]
        mov ebp, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov dword ptr ss : [esp+0x18], eax
        call public_65c6a66
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], ecx
        jne public_65c5a34
        mov ebp, eax
        public_65c5a34 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_65c5a4b
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        public_65c5a4b : nop
        mov ecx, dword ptr ds : [public_65ca2a8]
        mov edx, dword ptr ss : [esp+0x10]
        inc ecx
        push edx
        mov dword ptr ds : [public_65ca2a8], ecx
        call dword ptr ds : [public_65c7040]
        public_65c5a63 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        pop ebp
        je public_65c5a78
        push eax
        call dword ptr ds : [public_65c70b8]
        add esp, 4
        mov dword ptr ds : [edi+0x1C], ebx
        public_65c5a78 : nop
        mov byte ptr ds : [edi+8], bl
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65c5920)
    }
}

#undef public_65c5951
#undef public_65c5953
#undef public_65c5973
#undef public_65c59c3
#undef public_65c59d3
#undef public_65c59ec
#undef public_65c59f5
#undef public_65c5a04
#undef public_65c5a0f
#undef public_65c5a34
#undef public_65c5a4b
#undef public_65c5a63
#undef public_65c5a78
