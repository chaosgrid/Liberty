#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16940);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61d7b);

#define public_6d16968 _public_6d16968
#define public_6d16971 _public_6d16971
#define public_6d16973 _public_6d16973
#define public_6d16990 _public_6d16990
#define public_6d16995 _public_6d16995
#define public_6d169a0 _public_6d169a0
#define public_6d169b3 _public_6d169b3
#define public_6d169bc _public_6d169bc
#define public_6d169c0 _public_6d169c0
#define public_6d169d6 _public_6d169d6
#define public_6d169e9 _public_6d169e9
#define public_6d169f2 _public_6d169f2
#define public_6d169f6 _public_6d169f6
#define public_6d16a03 _public_6d16a03
#define public_6d16a14 _public_6d16a14

PROC_DECLARE(0x6d16940, internal_6d16940, public_6d16940);
extern "C" NAKED register_t __cdecl internal_6d16940()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61d7b @0x6d16942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61d7b
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
        public_6d16968 : nop
        cmp edi, ebx
        jne public_6d16971
        mov edi, dword ptr ds : [esi+8]
        jmp public_6d16973
        public_6d16971 : nop
        mov edi, dword ptr ds : [edi]
        public_6d16973 : nop
        cmp edi, ebx
        je public_6d16995
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_6d16990
        lea ecx, ss:[ebp+0xC]
        call dword ptr ds : [public_6d647a8]
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16990 : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d16968
        public_6d16995 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        pop ebp
        je public_6d169c0
        lea ecx, ds:[ecx]
        public_6d169a0 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d169b3
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d169bc
        public_6d169b3 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d169bc : nop
        cmp edi, ebx
        jne public_6d169a0
        public_6d169c0 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], ebx
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi+4], offset public_6d683d8
        je public_6d169f6
        public_6d169d6 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d169e9
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d169f2
        public_6d169e9 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d169f2 : nop
        cmp edi, ebx
        jne public_6d169d6
        public_6d169f6 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        je public_6d16a14
        public_6d16a03 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d16a03
        public_6d16a14 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d16940)
    }
}

#undef public_6d16968
#undef public_6d16971
#undef public_6d16973
#undef public_6d16990
#undef public_6d16995
#undef public_6d169a0
#undef public_6d169b3
#undef public_6d169bc
#undef public_6d169c0
#undef public_6d169d6
#undef public_6d169e9
#undef public_6d169f2
#undef public_6d169f6
#undef public_6d16a03
#undef public_6d16a14
