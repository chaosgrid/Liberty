#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f580d4);

#define public_6f5819b _public_6f5819b
#define public_6f581a5 _public_6f581a5
#define public_6f581b7 _public_6f581b7
#define public_6f581c1 _public_6f581c1
#define public_6f581c3 _public_6f581c3
#define public_6f581c7 _public_6f581c7
#define public_6f581e3 _public_6f581e3
#define public_6f581ec _public_6f581ec
#define public_6f581fb _public_6f581fb
#define public_6f58212 _public_6f58212
#define public_6f58215 _public_6f58215

PROC_DECLARE(0x6f5817f, internal_6f5817f, public_6f5817f);
extern "C" NAKED register_t __cdecl internal_6f5817f()
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
        jne public_6f5819b
        cmp dword ptr ds : [public_6f61e30], 0
        jmp public_6f581c1
        public_6f5819b : nop
        cmp esi, 1
        je public_6f581a5
        cmp esi, 2
        jne public_6f581c7
        public_6f581a5 : nop
        mov eax, dword ptr ds : [public_6f61e38]
        test eax, eax
        je public_6f581b7
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6f581c3
        public_6f581b7 : nop
        push edi
        push esi
        push ebx
        call public_6f580d4
        test eax, eax
        public_6f581c1 : nop
        jne public_6f581c7
        public_6f581c3 : nop
        xor eax, eax
        jmp public_6f58215
        public_6f581c7 : nop
        push edi
        push esi
        push ebx
        call public_6f3b8b0
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6f581e3
        test eax, eax
        jne public_6f58212
        push edi
        push eax
        push ebx
        call public_6f580d4
        public_6f581e3 : nop
        test esi, esi
        je public_6f581ec
        cmp esi, 3
        jne public_6f58212
        public_6f581ec : nop
        push edi
        push esi
        push ebx
        call public_6f580d4
        test eax, eax
        jne public_6f581fb
        and dword ptr ss : [ebp+0xC], eax
        public_6f581fb : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6f58212
        mov eax, dword ptr ds : [public_6f61e38]
        test eax, eax
        je public_6f58212
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6f58212 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6f58215 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f5817f)
    }
}

#undef public_6f5819b
#undef public_6f581a5
#undef public_6f581b7
#undef public_6f581c1
#undef public_6f581c3
#undef public_6f581c7
#undef public_6f581e3
#undef public_6f581ec
#undef public_6f581fb
#undef public_6f58212
#undef public_6f58215
