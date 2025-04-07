#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48960);
CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c310);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d633a3);

#define public_6d4c36d _public_6d4c36d
#define public_6d4c379 _public_6d4c379
#define public_6d4c3a5 _public_6d4c3a5
#define public_6d4c3bd _public_6d4c3bd
#define public_6d4c3d7 _public_6d4c3d7
#define public_6d4c3e0 _public_6d4c3e0
#define public_6d4c403 _public_6d4c403
#define public_6d4c40c _public_6d4c40c

PROC_DECLARE(0x6d4c310, internal_6d4c310, public_6d4c310);
extern "C" NAKED register_t __cdecl internal_6d4c310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d633a3 @0x6d4c312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d633a3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6d6b5a0
        mov eax, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_6d4c3bd
        push ebp
        push ebx
        mov ecx, esi
        call public_6d48960
        mov ecx, esi
        call public_6d48b60
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_6d64bd0]
        je public_6d4c36d
        push eax
        call ebp
        add esp, 4
        mov dword ptr ds : [esi], ebx
        public_6d4c36d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        jne public_6d4c379
        mov eax, dword ptr ds : [public_6d64b7c]
/*FIXUP public_6d4c379 : nop
        push offset public_6d6b4e4 @0x6d4c379*/
  FIXUP public_6d4c379 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call dword ptr ds : [public_6d64bd8]
/*FIXUP push offset public_6d6b30c @0x6d4c385*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b30c
        push eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6d64c08]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        add esp, 0x10
        cmp eax, ebx
        jne public_6d4c3a5
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4c3a5 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        push ecx
        push 1
        push eax
        call dword ptr ds : [public_6d64c04]
        mov eax, dword ptr ds : [esi]
        push eax
        call ebp
        add esp, 0x14
        mov dword ptr ds : [esi], ebx
        pop ebp
        public_6d4c3bd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        je public_6d4c3e0
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d4c3d7
        cmp cl, 0xFF
        je public_6d4c3d7
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4c3e0
        public_6d4c3d7 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4c3e0 : nop
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6d4c40c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d4c403
        cmp cl, 0xFF
        je public_6d4c403
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4c40c
        public_6d4c403 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4c40c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d4c310)
    }
}

#undef public_6d4c36d
#undef public_6d4c379
#undef public_6d4c3a5
#undef public_6d4c3bd
#undef public_6d4c3d7
#undef public_6d4c3e0
#undef public_6d4c403
#undef public_6d4c40c
