#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d02b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d02c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d07170);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d613cb);

#define public_6d071b0 _public_6d071b0
#define public_6d071e0 _public_6d071e0
#define public_6d071e2 _public_6d071e2
#define public_6d07201 _public_6d07201
#define public_6d07203 _public_6d07203
#define public_6d0723f _public_6d0723f
#define public_6d07249 _public_6d07249
#define public_6d07263 _public_6d07263
#define public_6d07266 _public_6d07266
#define public_6d0728b _public_6d0728b
#define public_6d072af _public_6d072af

PROC_DECLARE(0x6d07170, internal_6d07170, public_6d07170);
extern "C" NAKED register_t __cdecl internal_6d07170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d613cb @0x6d07172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d613cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push edi
        push 0x303
        mov ebp, ecx
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_6d64000]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6d0728b
        push esi
        lea ecx, ds:[ecx]
        public_6d071b0 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64614]
        push 0x90
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d071e0
        mov ecx, eax
        call public_6d02b70
        mov esi, eax
        jmp public_6d071e2
        public_6d071e0 : nop
        xor esi, esi
        public_6d071e2 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6d07201
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        jne public_6d07201
        mov eax, edi
        jmp public_6d07203
        public_6d07201 : nop
        xor eax, eax
        public_6d07203 : nop
        push eax
        mov ecx, esi
        call public_6d02c20
        mov edx, dword ptr ds : [esi]
        push 0
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1BC]
        mov ecx, edi
        call dword ptr ds : [public_6d64364]
        mov al, byte ptr ss : [ebp+0x68]
        test al, al
        je public_6d0723f
        mov eax, dword ptr ss : [ebp+0x6C]
        test eax, eax
        je public_6d0723f
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x6C], ecx
        jmp public_6d07249
        public_6d0723f : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d07249 : nop
        mov edx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ss : [ebp+0x64]
        test ecx, ecx
        je public_6d07263
        mov dword ptr ds : [ecx], eax
        jmp public_6d07266
        public_6d07263 : nop
        mov dword ptr ss : [ebp+0x60], eax
        public_6d07266 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        inc ecx
        mov dword ptr ss : [ebp+0x64], eax
        mov dword ptr ss : [esp+0xC], ecx
        call dword ptr ds : [public_6d6466c]
        mov edi, eax
        test edi, edi
        jne public_6d071b0
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        pop esi
        jne public_6d072af
/*FIXUP public_6d0728b : nop
        push offset public_6d67d40 @0x6d0728b*/
  FIXUP public_6d0728b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d40
        push 0x129
/*FIXUP push offset public_6d67d10 @0x6d07295*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100002
/*FIXUP push offset public_6d65494 @0x6d0729f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65494
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d072af : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d07170)
    }
}

#undef public_6d071b0
#undef public_6d071e0
#undef public_6d071e2
#undef public_6d07201
#undef public_6d07203
#undef public_6d0723f
#undef public_6d07249
#undef public_6d07263
#undef public_6d07266
#undef public_6d0728b
#undef public_6d072af
