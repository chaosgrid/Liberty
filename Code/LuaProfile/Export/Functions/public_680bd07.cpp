#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801870);
CLANG_FORWARD_PROC_SYMBOL(public_680bc5c);

#define public_680bd23 _public_680bd23
#define public_680bd2d _public_680bd2d
#define public_680bd3f _public_680bd3f
#define public_680bd49 _public_680bd49
#define public_680bd4b _public_680bd4b
#define public_680bd4f _public_680bd4f
#define public_680bd6b _public_680bd6b
#define public_680bd74 _public_680bd74
#define public_680bd83 _public_680bd83
#define public_680bd9a _public_680bd9a
#define public_680bd9d _public_680bd9d

PROC_DECLARE(0x680bd07, internal_680bd07, public_680bd07);
extern "C" NAKED register_t __cdecl internal_680bd07()
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
        jne public_680bd23
        cmp dword ptr ds : [public_680e608], 0
        jmp public_680bd49
        public_680bd23 : nop
        cmp esi, 1
        je public_680bd2d
        cmp esi, 2
        jne public_680bd4f
        public_680bd2d : nop
        mov eax, dword ptr ds : [public_680e618]
        test eax, eax
        je public_680bd3f
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_680bd4b
        public_680bd3f : nop
        push edi
        push esi
        push ebx
        call public_680bc5c
        test eax, eax
        public_680bd49 : nop
        jne public_680bd4f
        public_680bd4b : nop
        xor eax, eax
        jmp public_680bd9d
        public_680bd4f : nop
        push edi
        push esi
        push ebx
        call public_6801870
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_680bd6b
        test eax, eax
        jne public_680bd9a
        push edi
        push eax
        push ebx
        call public_680bc5c
        public_680bd6b : nop
        test esi, esi
        je public_680bd74
        cmp esi, 3
        jne public_680bd9a
        public_680bd74 : nop
        push edi
        push esi
        push ebx
        call public_680bc5c
        test eax, eax
        jne public_680bd83
        and dword ptr ss : [ebp+0xC], eax
        public_680bd83 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_680bd9a
        mov eax, dword ptr ds : [public_680e618]
        test eax, eax
        je public_680bd9a
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_680bd9a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_680bd9d : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x680bd07)
    }
}

#undef public_680bd23
#undef public_680bd2d
#undef public_680bd3f
#undef public_680bd49
#undef public_680bd4b
#undef public_680bd4f
#undef public_680bd6b
#undef public_680bd74
#undef public_680bd83
#undef public_680bd9a
#undef public_680bd9d
