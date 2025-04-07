#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62f15);

#define public_6d45cf1 _public_6d45cf1
#define public_6d45cfa _public_6d45cfa
#define public_6d45cfc _public_6d45cfc
#define public_6d45d5b _public_6d45d5b
#define public_6d45d60 _public_6d45d60
#define public_6d45d67 _public_6d45d67
#define public_6d45d7a _public_6d45d7a
#define public_6d45d83 _public_6d45d83
#define public_6d45d87 _public_6d45d87
#define public_6d45da0 _public_6d45da0
#define public_6d45db1 _public_6d45db1

PROC_DECLARE(0x6d45cc0, internal_6d45cc0, public_6d45cc0);
extern "C" NAKED register_t __cdecl internal_6d45cc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62f15 @0x6d45cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62f15
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6d6ada8
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        xor edi, edi
        public_6d45cf1 : nop
        cmp edi, ebx
        jne public_6d45cfa
        mov edi, dword ptr ss : [ebp+4]
        jmp public_6d45cfc
        public_6d45cfa : nop
        mov edi, dword ptr ds : [edi]
        public_6d45cfc : nop
        cmp edi, ebx
        je public_6d45d60
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6d45d5b
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_6d6438c]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_6d643fc]
        push 1
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6d64b58]
        push 1
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_6d64b58]
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d45d5b : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d45cf1
        public_6d45d60 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_6d45d87
        public_6d45d67 : nop
        cmp byte ptr ss : [ebp+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d45d7a
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_6d45d83
        public_6d45d7a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d45d83 : nop
        cmp esi, ebx
        jne public_6d45d67
        public_6d45d87 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        mov dword ptr ss : [ebp], offset public_6d6ada0
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        je public_6d45db1
        nop 
        lea esp, ss:[esp]
        public_6d45da0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp esi, ebx
        jne public_6d45da0
        public_6d45db1 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d45cc0)
    }
}

#undef public_6d45cf1
#undef public_6d45cfa
#undef public_6d45cfc
#undef public_6d45d5b
#undef public_6d45d60
#undef public_6d45d67
#undef public_6d45d7a
#undef public_6d45d83
#undef public_6d45d87
#undef public_6d45da0
#undef public_6d45db1
