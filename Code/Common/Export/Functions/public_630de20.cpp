#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630de20);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396366);

#define public_630de44 _public_630de44
#define public_630de5a _public_630de5a
#define public_630de69 _public_630de69
#define public_630de71 _public_630de71
#define public_630de81 _public_630de81
#define public_630de97 _public_630de97
#define public_630def1 _public_630def1
#define public_630df20 _public_630df20
#define public_630df27 _public_630df27
#define public_630df29 _public_630df29
#define public_630df46 _public_630df46

PROC_DECLARE(0x630de20, internal_630de20, public_630de20);
extern "C" NAKED register_t __cdecl internal_630de20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396366 @0x630de28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396366
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        push edi
        je public_630de81
        public_630de44 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        mov ebp, dword ptr ds : [esi]
        je public_630de5a
        cmp eax, 0x4E
        jne public_630de71
        mov eax, dword ptr ds : [esi+4]
        push eax
        jmp public_630de69
        public_630de5a : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_630de71
        mov ecx, edi
        call public_630e270
        push edi
        public_630de69 : nop
        call public_6391d5a
        add esp, 4
        public_630de71 : nop
        push esi
        call dword ptr ds : [public_639932c]
        add esp, 4
        test ebp, ebp
        mov esi, ebp
        jne public_630de44
        public_630de81 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        test ebp, ebp
        mov dword ptr ds : [ebx], 0
        je public_630df46
        mov dword ptr ss : [esp+0x28], ebx
        public_630de97 : nop
        push 0xC
        call dword ptr ds : [public_6399328]
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x20], 0
        je public_630df27
        mov eax, ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        movzx eax, word ptr ds : [ebx+8]
        cmp eax, 0x21
        je public_630def1
        cmp eax, 0x4E
        jne public_630df29
        push 0x14
        call public_6391d9c
        mov dword ptr ds : [ebx+4], eax
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, 5
        mov edi, eax
        add esp, 4
        rep movsd
        jmp public_630df29
        public_630def1 : nop
        push 0x18
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov byte ptr ss : [esp+0x20], 1
        je public_630df20
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        call public_630dda0
        mov dword ptr ds : [ebx+4], esi
        jmp public_630df29
        public_630df20 : nop
        xor esi, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_630df29
        public_630df27 : nop
        xor ebx, ebx
        public_630df29 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], ebx
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x28], ebx
        jne public_630de97
        public_630df46 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x630de20)
    }
}

#undef public_630de44
#undef public_630de5a
#undef public_630de69
#undef public_630de71
#undef public_630de81
#undef public_630de97
#undef public_630def1
#undef public_630df20
#undef public_630df27
#undef public_630df29
#undef public_630df46
