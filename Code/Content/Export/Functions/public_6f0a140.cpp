#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f0a140);
CLANG_FORWARD_PROC_SYMBOL(public_6f60da0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad062);

#define public_6f0a1a8 _public_6f0a1a8
#define public_6f0a1cc _public_6f0a1cc
#define public_6f0a200 _public_6f0a200
#define public_6f0a224 _public_6f0a224
#define public_6f0a24f _public_6f0a24f

PROC_DECLARE(0x6f0a140, internal_6f0a140, public_6f0a140);
extern "C" NAKED register_t __cdecl internal_6f0a140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad062 @0x6f0a142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad062
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_6fb8404
        mov eax, dword ptr ds : [edi+0x168]
        xor ebx, ebx
        push ebx
        push eax
        mov dword ptr ss : [esp+0x30], 3
        call dword ptr ds : [public_6fb36b4]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        call public_6f60da0
        mov ebp, dword ptr ds : [edi+0x1A4]
        mov eax, dword ptr ss : [ebp]
        lea esi, ds:[edi+0x1A0]
        add esp, 0xC
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0a1cc
        public_6f0a1a8 : nop
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6f0a1a8
        public_6f0a1cc : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ebp, dword ptr ds : [edi+0x184]
        mov eax, dword ptr ss : [ebp]
        lea esi, ds:[edi+0x180]
        add esp, 4
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0a224
        lea ebx, ds:[ebx]
        public_6f0a200 : nop
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6f0a200
        public_6f0a224 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [edi+0x170]
        add esp, 4
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_6f0a24f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x170], ebx
        public_6f0a24f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], offset public_6fb43f8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f0a140)
    }
}

#undef public_6f0a1a8
#undef public_6f0a1cc
#undef public_6f0a200
#undef public_6f0a224
#undef public_6f0a24f
