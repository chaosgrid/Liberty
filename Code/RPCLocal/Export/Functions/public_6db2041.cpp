#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8ed90);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f96);

#define public_6db205d _public_6db205d
#define public_6db2067 _public_6db2067
#define public_6db2079 _public_6db2079
#define public_6db2083 _public_6db2083
#define public_6db2085 _public_6db2085
#define public_6db2089 _public_6db2089
#define public_6db20a5 _public_6db20a5
#define public_6db20ae _public_6db20ae
#define public_6db20bd _public_6db20bd
#define public_6db20d4 _public_6db20d4
#define public_6db20d7 _public_6db20d7

PROC_DECLARE(0x6db2041, internal_6db2041, public_6db2041);
extern "C" NAKED register_t __cdecl internal_6db2041()
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
        jne public_6db205d
        cmp dword ptr ds : [public_6dbc62c], 0
        jmp public_6db2083
        public_6db205d : nop
        cmp esi, 1
        je public_6db2067
        cmp esi, 2
        jne public_6db2089
        public_6db2067 : nop
        mov eax, dword ptr ds : [public_6dbc634]
        test eax, eax
        je public_6db2079
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6db2085
        public_6db2079 : nop
        push edi
        push esi
        push ebx
        call public_6db1f96
        test eax, eax
        public_6db2083 : nop
        jne public_6db2089
        public_6db2085 : nop
        xor eax, eax
        jmp public_6db20d7
        public_6db2089 : nop
        push edi
        push esi
        push ebx
        call public_6d8ed90
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6db20a5
        test eax, eax
        jne public_6db20d4
        push edi
        push eax
        push ebx
        call public_6db1f96
        public_6db20a5 : nop
        test esi, esi
        je public_6db20ae
        cmp esi, 3
        jne public_6db20d4
        public_6db20ae : nop
        push edi
        push esi
        push ebx
        call public_6db1f96
        test eax, eax
        jne public_6db20bd
        and dword ptr ss : [ebp+0xC], eax
        public_6db20bd : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6db20d4
        mov eax, dword ptr ds : [public_6dbc634]
        test eax, eax
        je public_6db20d4
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6db20d4 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6db20d7 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6db2041)
    }
}

#undef public_6db205d
#undef public_6db2067
#undef public_6db2079
#undef public_6db2083
#undef public_6db2085
#undef public_6db2089
#undef public_6db20a5
#undef public_6db20ae
#undef public_6db20bd
#undef public_6db20d4
#undef public_6db20d7
