#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716b26);
CLANG_FORWARD_PROC_SYMBOL(public_6716c80);

#define public_6716bed _public_6716bed
#define public_6716bf7 _public_6716bf7
#define public_6716c09 _public_6716c09
#define public_6716c13 _public_6716c13
#define public_6716c15 _public_6716c15
#define public_6716c19 _public_6716c19
#define public_6716c35 _public_6716c35
#define public_6716c3e _public_6716c3e
#define public_6716c4d _public_6716c4d
#define public_6716c64 _public_6716c64
#define public_6716c67 _public_6716c67

PROC_DECLARE(0x6716bd1, internal_6716bd1, public_6716bd1);
extern "C" NAKED register_t __cdecl internal_6716bd1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6716bed
        cmp dword ptr ds : [public_671cfec], 0
        jmp public_6716c13
        public_6716bed : nop
        cmp esi, 1
        je public_6716bf7
        cmp esi, 2
        jne public_6716c19
        public_6716bf7 : nop
        mov eax, dword ptr ds : [public_671d040]
        test eax, eax
        je public_6716c09
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6716c15
        public_6716c09 : nop
        push edi
        push esi
        push ebx
        call public_6716b26
        test eax, eax
        public_6716c13 : nop
        jne public_6716c19
        public_6716c15 : nop
        xor eax, eax
        jmp public_6716c67
        public_6716c19 : nop
        push edi
        push esi
        push ebx
        call public_6716c80
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6716c35
        test eax, eax
        jne public_6716c64
        push edi
        push eax
        push ebx
        call public_6716b26
        public_6716c35 : nop
        test esi, esi
        je public_6716c3e
        cmp esi, 3
        jne public_6716c64
        public_6716c3e : nop
        push edi
        push esi
        push ebx
        call public_6716b26
        test eax, eax
        jne public_6716c4d
        and dword ptr ss : [ebp+0xC], eax
        public_6716c4d : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6716c64
        mov eax, dword ptr ds : [public_671d040]
        test eax, eax
        je public_6716c64
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6716c64 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6716c67 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6716bd1)
    }
}

#undef public_6716bed
#undef public_6716bf7
#undef public_6716c09
#undef public_6716c13
#undef public_6716c15
#undef public_6716c19
#undef public_6716c35
#undef public_6716c3e
#undef public_6716c4d
#undef public_6716c64
#undef public_6716c67
