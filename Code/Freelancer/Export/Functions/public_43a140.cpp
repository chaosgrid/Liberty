#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a140);
CLANG_FORWARD_PROC_SYMBOL(public_43ce50);
CLANG_FORWARD_PROC_SYMBOL(public_43cef0);
CLANG_FORWARD_PROC_SYMBOL(public_43cf20);
CLANG_FORWARD_PROC_SYMBOL(public_43cf40);
CLANG_FORWARD_PROC_SYMBOL(public_43cf60);
CLANG_FORWARD_PROC_SYMBOL(public_43d010);
CLANG_FORWARD_JUMP_SYMBOL(public_5b93fb);

#define public_43a176 _public_43a176
#define public_43a17f _public_43a17f
#define public_43a181 _public_43a181
#define public_43a193 _public_43a193
#define public_43a198 _public_43a198
#define public_43a1b4 _public_43a1b4
#define public_43a1c4 _public_43a1c4
#define public_43a1e0 _public_43a1e0
#define public_43a1e9 _public_43a1e9
#define public_43a1eb _public_43a1eb
#define public_43a1fd _public_43a1fd
#define public_43a202 _public_43a202
#define public_43a230 _public_43a230
#define public_43a239 _public_43a239
#define public_43a23b _public_43a23b
#define public_43a24d _public_43a24d
#define public_43a252 _public_43a252
#define public_43a272 _public_43a272
#define public_43a282 _public_43a282

PROC_DECLARE(0x43a140, internal_43a140, public_43a140);
extern "C" NAKED register_t __cdecl internal_43a140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b93fb @0x43a142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b93fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea edi, ss:[ebp+0x30]
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x20], 2
        xor esi, esi
        public_43a176 : nop
        cmp esi, ebx
        jne public_43a17f
        mov esi, dword ptr ds : [edi+4]
        jmp public_43a181
        public_43a17f : nop
        mov esi, dword ptr ds : [esi]
        public_43a181 : nop
        cmp esi, ebx
        je public_43a198
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_43a193
        push 1
        call public_43cf60
        public_43a193 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43a176
        public_43a198 : nop
        mov ecx, edi
        call public_43ce50
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ds : [edi], offset public_5cb044
        je public_43a1c4
        public_43a1b4 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_43d010
        cmp esi, ebx
        jne public_43a1b4
        public_43a1c4 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        call public_43cef0
        lea edi, ss:[ebp+0x18]
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x20], 3
        xor esi, esi
        nop 
        public_43a1e0 : nop
        cmp esi, ebx
        jne public_43a1e9
        mov esi, dword ptr ds : [edi+4]
        jmp public_43a1eb
        public_43a1e9 : nop
        mov esi, dword ptr ds : [esi]
        public_43a1eb : nop
        cmp esi, ebx
        je public_43a202
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_43a1fd
        push 1
        call public_43cf40
        public_43a1fd : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43a1e0
        public_43a202 : nop
        mov ecx, edi
        call public_43ce50
        mov ecx, edi
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ds : [edi], offset public_5cb03c
        call public_43ce50
        mov ecx, edi
        call public_43cef0
        mov dword ptr ss : [esp+0x20], 4
        xor esi, esi
        mov edi, edi
        public_43a230 : nop
        cmp esi, ebx
        jne public_43a239
        mov esi, dword ptr ss : [ebp+4]
        jmp public_43a23b
        public_43a239 : nop
        mov esi, dword ptr ds : [esi]
        public_43a23b : nop
        cmp esi, ebx
        je public_43a252
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_43a24d
        push 1
        call public_43cf20
        public_43a24d : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43a230
        public_43a252 : nop
        mov ecx, ebp
        call public_43ce50
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        mov byte ptr ss : [ebp+0x14], bl
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [ebp], offset public_5cb034
        je public_43a282
        public_43a272 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, ebp
        call public_43d010
        cmp esi, ebx
        jne public_43a272
        public_43a282 : nop
        mov ecx, ebp
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        call public_43cef0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x43a140)
    }
}

#undef public_43a176
#undef public_43a17f
#undef public_43a181
#undef public_43a193
#undef public_43a198
#undef public_43a1b4
#undef public_43a1c4
#undef public_43a1e0
#undef public_43a1e9
#undef public_43a1eb
#undef public_43a1fd
#undef public_43a202
#undef public_43a230
#undef public_43a239
#undef public_43a23b
#undef public_43a24d
#undef public_43a252
#undef public_43a272
#undef public_43a282
