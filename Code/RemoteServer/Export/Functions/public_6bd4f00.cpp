#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4f00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a275);

#define public_6bd4f31 _public_6bd4f31
#define public_6bd4f3a _public_6bd4f3a
#define public_6bd4f3c _public_6bd4f3c
#define public_6bd4f9b _public_6bd4f9b
#define public_6bd4fa0 _public_6bd4fa0
#define public_6bd4fa7 _public_6bd4fa7
#define public_6bd4fba _public_6bd4fba
#define public_6bd4fc3 _public_6bd4fc3
#define public_6bd4fc7 _public_6bd4fc7
#define public_6bd4fe0 _public_6bd4fe0
#define public_6bd4ff1 _public_6bd4ff1

PROC_DECLARE(0x6bd4f00, internal_6bd4f00, public_6bd4f00);
extern "C" NAKED register_t __cdecl internal_6bd4f00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a275 @0x6bd4f02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a275
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
        mov dword ptr ss : [ebp], offset public_6c0b7a4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        xor edi, edi
        public_6bd4f31 : nop
        cmp edi, ebx
        jne public_6bd4f3a
        mov edi, dword ptr ss : [ebp+4]
        jmp public_6bd4f3c
        public_6bd4f3a : nop
        mov edi, dword ptr ds : [edi]
        public_6bd4f3c : nop
        cmp edi, ebx
        je public_6bd4fa0
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6bd4f9b
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_6c0b03c]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_6c0b0e4]
        push 1
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6c0b1ac]
        push 1
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_6c0b1ac]
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd4f9b : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6bd4f31
        public_6bd4fa0 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_6bd4fc7
        public_6bd4fa7 : nop
        cmp byte ptr ss : [ebp+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6bd4fba
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_6bd4fc3
        public_6bd4fba : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd4fc3 : nop
        cmp esi, ebx
        jne public_6bd4fa7
        public_6bd4fc7 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        mov dword ptr ss : [ebp], offset public_6c0b7a8
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        je public_6bd4ff1
        nop 
        lea esp, ss:[esp]
        public_6bd4fe0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6c09aaa
        add esp, 4
        cmp esi, ebx
        jne public_6bd4fe0
        public_6bd4ff1 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6bd4f00)
    }
}

#undef public_6bd4f31
#undef public_6bd4f3a
#undef public_6bd4f3c
#undef public_6bd4f9b
#undef public_6bd4fa0
#undef public_6bd4fa7
#undef public_6bd4fba
#undef public_6bd4fc3
#undef public_6bd4fc7
#undef public_6bd4fe0
#undef public_6bd4ff1
