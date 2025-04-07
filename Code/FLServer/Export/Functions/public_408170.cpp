#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408170);
CLANG_FORWARD_PROC_SYMBOL(public_4085a0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4081d9 _public_4081d9
#define public_4081ed _public_4081ed
#define public_4081f3 _public_4081f3
#define public_408201 _public_408201
#define public_408242 _public_408242
#define public_40825b _public_40825b
#define public_40826e _public_40826e
#define public_408279 _public_408279
#define public_40827c _public_40827c
#define public_408281 _public_408281
#define public_4082aa _public_4082aa
#define public_4082c3 _public_4082c3
#define public_4082d6 _public_4082d6
#define public_4082e0 _public_4082e0
#define public_408303 _public_408303
#define public_40831b _public_40831b
#define public_40832e _public_40832e
#define public_40833b _public_40833b
#define public_40833d _public_40833d
#define public_408343 _public_408343
#define public_40836c _public_40836c
#define public_40837f _public_40837f
#define public_40838a _public_40838a
#define public_40838d _public_40838d
#define public_40838f _public_40838f
#define public_408392 _public_408392
#define public_40839e _public_40839e

PROC_DECLARE(0x408170, internal_408170, public_408170);
extern "C" NAKED register_t __cdecl internal_408170()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_418a9e
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x10], 0
        mov byte ptr ds : [ebx+0x11], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_4085a0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4081d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4081d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4081d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4081f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_4081f3
        public_4081d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4081ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_4081f3
        public_4081ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_4081f3
        mov dword ptr ds : [eax], ebx
        public_4081f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_40839e
        public_408201 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_40839e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4082e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_408242
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_408392
        public_408242 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_408281
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_40825b
        mov dword ptr ds : [edx+4], eax
        public_40825b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_40826e
        mov dword ptr ds : [edx+4], ecx
        jmp public_40827c
        public_40826e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_408279
        mov dword ptr ds : [edx], ecx
        jmp public_40827c
        public_408279 : nop
        mov dword ptr ds : [edx+8], ecx
        public_40827c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_408281 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_4082aa
        mov dword ptr ds : [edi+4], ecx
        public_4082aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4082c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_40838f
        public_4082c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4082d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_40838f
        public_4082d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_40838f
        public_4082e0 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_408303
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_408392
        public_408303 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_408343
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_40831b
        mov dword ptr ds : [edx+4], eax
        public_40831b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_40832e
        mov dword ptr ds : [edx+4], ecx
        jmp public_40833d
        public_40832e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_40833b
        mov dword ptr ds : [edx+8], ecx
        jmp public_40833d
        public_40833b : nop
        mov dword ptr ds : [edx], ecx
        public_40833d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_408343 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_40836c
        mov dword ptr ds : [edi+4], ecx
        public_40836c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_40837f
        mov dword ptr ds : [edi+4], edx
        jmp public_40838d
        public_40837f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_40838a
        mov dword ptr ds : [edi], edx
        jmp public_40838d
        public_40838a : nop
        mov dword ptr ds : [edi+8], edx
        public_40838d : nop
        mov dword ptr ds : [edx], ecx
        public_40838f : nop
        mov dword ptr ds : [ecx+4], edx
        public_408392 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_408201
        public_40839e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x408170)
    }
}

#undef public_4081d9
#undef public_4081ed
#undef public_4081f3
#undef public_408201
#undef public_408242
#undef public_40825b
#undef public_40826e
#undef public_408279
#undef public_40827c
#undef public_408281
#undef public_4082aa
#undef public_4082c3
#undef public_4082d6
#undef public_4082e0
#undef public_408303
#undef public_40831b
#undef public_40832e
#undef public_40833b
#undef public_40833d
#undef public_408343
#undef public_40836c
#undef public_40837f
#undef public_40838a
#undef public_40838d
#undef public_40838f
#undef public_408392
#undef public_40839e
