#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce57a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f970);
CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d12900);
CLANG_FORWARD_PROC_SYMBOL(public_6d12b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d16f80);
CLANG_FORWARD_PROC_SYMBOL(public_6d17020);
CLANG_FORWARD_PROC_SYMBOL(public_6d17170);
CLANG_FORWARD_PROC_SYMBOL(public_6d171b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61ba7);

#define public_6d1294e _public_6d1294e
#define public_6d12972 _public_6d12972
#define public_6d12984 _public_6d12984
#define public_6d129a1 _public_6d129a1
#define public_6d129d0 _public_6d129d0
#define public_6d129e2 _public_6d129e2
#define public_6d129ff _public_6d129ff
#define public_6d12a37 _public_6d12a37
#define public_6d12a40 _public_6d12a40
#define public_6d12a42 _public_6d12a42
#define public_6d12a54 _public_6d12a54
#define public_6d12a59 _public_6d12a59
#define public_6d12a90 _public_6d12a90
#define public_6d12a99 _public_6d12a99
#define public_6d12a9b _public_6d12a9b
#define public_6d12aad _public_6d12aad
#define public_6d12ab2 _public_6d12ab2
#define public_6d12ad1 _public_6d12ad1
#define public_6d12ae1 _public_6d12ae1

PROC_DECLARE(0x6d12900, internal_6d12900, public_6d12900);
extern "C" NAKED register_t __cdecl internal_6d12900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61ba7 @0x6d12902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61ba7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        mov dword ptr ss : [esp+0x28], 2
        je public_6d1294e
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
/*FIXUP push offset _public_6d11c20 @0x6d12937*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d11c20
        push ecx
        push 0x68
        push eax
        call public_6d6001e
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d1294e : nop
        lea edi, ss:[ebp+0x10]
        push 1
        lea edx, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], 0
        call public_6d16120
        test al, al
        je public_6d129a1
        public_6d12972 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6d12984
        push 1
        call public_6d16f80
        public_6d12984 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx+8], 0
        push edx
        mov ecx, esi
        call public_6d16120
        test al, al
        jne public_6d12972
        public_6d129a1 : nop
        mov ecx, esi
        call public_6d17170
        mov dword ptr ds : [edi], 0
        lea edi, ss:[ebp+0x28]
        push 1
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        call public_6d16120
        test al, al
        je public_6d129ff
        mov edi, edi
        public_6d129d0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6d129e2
        push 1
        call public_6d17020
        public_6d129e2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edx+8], 0
        call public_6d16120
        test al, al
        jne public_6d129d0
        public_6d129ff : nop
        mov ecx, esi
        call public_6d17170
        lea esi, ss:[ebp+0x40]
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr ds : [edi], ebx
        call public_6ce57a0
        mov ecx, ebp
        call public_6d12b10
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6d115e0
        mov ebp, edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov byte ptr ss : [esp+0x28], 3
        xor esi, esi
        lea edi, ss:[ebp+4]
        public_6d12a37 : nop
        cmp esi, ebx
        jne public_6d12a40
        mov esi, dword ptr ds : [edi+4]
        jmp public_6d12a42
        public_6d12a40 : nop
        mov esi, dword ptr ds : [esi]
        public_6d12a42 : nop
        cmp esi, ebx
        je public_6d12a59
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6d12a54
        push 1
        call public_6d17020
        public_6d12a54 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_6d12a37
        public_6d12a59 : nop
        mov ecx, edi
        call public_6d17170
        mov dword ptr ss : [ebp], ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ds : [edi], offset public_6d683d0
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x28], 4
        xor esi, esi
        lea edi, ss:[ebp+4]
        public_6d12a90 : nop
        cmp esi, ebx
        jne public_6d12a99
        mov esi, dword ptr ds : [edi+4]
        jmp public_6d12a9b
        public_6d12a99 : nop
        mov esi, dword ptr ds : [esi]
        public_6d12a9b : nop
        cmp esi, ebx
        je public_6d12ab2
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6d12aad
        push 1
        call public_6d16f80
        public_6d12aad : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_6d12a90
        public_6d12ab2 : nop
        mov ecx, edi
        call public_6d17170
        mov dword ptr ss : [ebp], ebx
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ds : [edi], offset public_6d683d8
        je public_6d12ae1
        public_6d12ad1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d12ad1
        public_6d12ae1 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        call public_6d171b0
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d12900)
    }
}

#undef public_6d1294e
#undef public_6d12972
#undef public_6d12984
#undef public_6d129a1
#undef public_6d129d0
#undef public_6d129e2
#undef public_6d129ff
#undef public_6d12a37
#undef public_6d12a40
#undef public_6d12a42
#undef public_6d12a54
#undef public_6d12a59
#undef public_6d12a90
#undef public_6d12a99
#undef public_6d12a9b
#undef public_6d12aad
#undef public_6d12ab2
#undef public_6d12ad1
#undef public_6d12ae1
