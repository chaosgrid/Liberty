#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f117f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a4f);

#define public_6f11b16 _public_6f11b16
#define public_6f11b20 _public_6f11b20
#define public_6f11b32 _public_6f11b32
#define public_6f11b3c _public_6f11b3c
#define public_6f11b3e _public_6f11b3e
#define public_6f11b42 _public_6f11b42
#define public_6f11b5e _public_6f11b5e
#define public_6f11b67 _public_6f11b67
#define public_6f11b76 _public_6f11b76
#define public_6f11b8d _public_6f11b8d
#define public_6f11b90 _public_6f11b90

PROC_DECLARE(0x6f11afa, internal_6f11afa, public_6f11afa);
extern "C" NAKED register_t __cdecl internal_6f11afa()
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
        jne public_6f11b16
        cmp dword ptr ds : [public_6f1319c], 0
        jmp public_6f11b3c
        public_6f11b16 : nop
        cmp esi, 1
        je public_6f11b20
        cmp esi, 2
        jne public_6f11b42
        public_6f11b20 : nop
        mov eax, dword ptr ds : [public_6f131ac]
        test eax, eax
        je public_6f11b32
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6f11b3e
        public_6f11b32 : nop
        push edi
        push esi
        push ebx
        call public_6f11a4f
        test eax, eax
        public_6f11b3c : nop
        jne public_6f11b42
        public_6f11b3e : nop
        xor eax, eax
        jmp public_6f11b90
        public_6f11b42 : nop
        push edi
        push esi
        push ebx
        call public_6f117f0
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6f11b5e
        test eax, eax
        jne public_6f11b8d
        push edi
        push eax
        push ebx
        call public_6f11a4f
        public_6f11b5e : nop
        test esi, esi
        je public_6f11b67
        cmp esi, 3
        jne public_6f11b8d
        public_6f11b67 : nop
        push edi
        push esi
        push ebx
        call public_6f11a4f
        test eax, eax
        jne public_6f11b76
        and dword ptr ss : [ebp+0xC], eax
        public_6f11b76 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6f11b8d
        mov eax, dword ptr ds : [public_6f131ac]
        test eax, eax
        je public_6f11b8d
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6f11b8d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6f11b90 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f11afa)
    }
}

#undef public_6f11b16
#undef public_6f11b20
#undef public_6f11b32
#undef public_6f11b3c
#undef public_6f11b3e
#undef public_6f11b42
#undef public_6f11b5e
#undef public_6f11b67
#undef public_6f11b76
#undef public_6f11b8d
#undef public_6f11b90
