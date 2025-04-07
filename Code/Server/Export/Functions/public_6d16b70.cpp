#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61d9b);

#define public_6d16b98 _public_6d16b98
#define public_6d16ba1 _public_6d16ba1
#define public_6d16ba3 _public_6d16ba3
#define public_6d16bc0 _public_6d16bc0
#define public_6d16bc5 _public_6d16bc5
#define public_6d16bd0 _public_6d16bd0
#define public_6d16be3 _public_6d16be3
#define public_6d16bec _public_6d16bec
#define public_6d16bf0 _public_6d16bf0
#define public_6d16c06 _public_6d16c06
#define public_6d16c19 _public_6d16c19
#define public_6d16c22 _public_6d16c22
#define public_6d16c26 _public_6d16c26
#define public_6d16c33 _public_6d16c33
#define public_6d16c44 _public_6d16c44

PROC_DECLARE(0x6d16b70, internal_6d16b70, public_6d16b70);
extern "C" NAKED register_t __cdecl internal_6d16b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61d9b @0x6d16b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61d9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor edi, edi
        push ebp
        public_6d16b98 : nop
        cmp edi, ebx
        jne public_6d16ba1
        mov edi, dword ptr ds : [esi+8]
        jmp public_6d16ba3
        public_6d16ba1 : nop
        mov edi, dword ptr ds : [edi]
        public_6d16ba3 : nop
        cmp edi, ebx
        je public_6d16bc5
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_6d16bc0
        lea ecx, ss:[ebp+0xC]
        call dword ptr ds : [public_6d647ac]
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16bc0 : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d16b98
        public_6d16bc5 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        pop ebp
        je public_6d16bf0
        lea ecx, ds:[ecx]
        public_6d16bd0 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16be3
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d16bec
        public_6d16be3 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16bec : nop
        cmp edi, ebx
        jne public_6d16bd0
        public_6d16bf0 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], ebx
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi+4], offset public_6d683d0
        je public_6d16c26
        public_6d16c06 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16c19
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d16c22
        public_6d16c19 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16c22 : nop
        cmp edi, ebx
        jne public_6d16c06
        public_6d16c26 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        je public_6d16c44
        public_6d16c33 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d16c33
        public_6d16c44 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d16b70)
    }
}

#undef public_6d16b98
#undef public_6d16ba1
#undef public_6d16ba3
#undef public_6d16bc0
#undef public_6d16bc5
#undef public_6d16bd0
#undef public_6d16be3
#undef public_6d16bec
#undef public_6d16bf0
#undef public_6d16c06
#undef public_6d16c19
#undef public_6d16c22
#undef public_6d16c26
#undef public_6d16c33
#undef public_6d16c44
