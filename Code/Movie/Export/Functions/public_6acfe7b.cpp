#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acfda2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2db2);

#define public_6acfe97 _public_6acfe97
#define public_6acfea1 _public_6acfea1
#define public_6acfeb3 _public_6acfeb3
#define public_6acfebd _public_6acfebd
#define public_6acfebf _public_6acfebf
#define public_6acfec3 _public_6acfec3
#define public_6acfedf _public_6acfedf
#define public_6acfee8 _public_6acfee8
#define public_6acfef7 _public_6acfef7
#define public_6acff0e _public_6acff0e
#define public_6acff11 _public_6acff11

PROC_DECLARE(0x6acfe7b, internal_6acfe7b, public_6acfe7b);
extern "C" NAKED register_t __cdecl internal_6acfe7b()
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
        jne public_6acfe97
        cmp dword ptr ds : [public_6ae0e94], 0
        jmp public_6acfebd
        public_6acfe97 : nop
        cmp esi, 1
        je public_6acfea1
        cmp esi, 2
        jne public_6acfec3
        public_6acfea1 : nop
        mov eax, dword ptr ds : [public_6ae25a0]
        test eax, eax
        je public_6acfeb3
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6acfebf
        public_6acfeb3 : nop
        push edi
        push esi
        push ebx
        call public_6acfda2
        test eax, eax
        public_6acfebd : nop
        jne public_6acfec3
        public_6acfebf : nop
        xor eax, eax
        jmp public_6acff11
        public_6acfec3 : nop
        push edi
        push esi
        push ebx
        call public_6ad2db2
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6acfedf
        test eax, eax
        jne public_6acff0e
        push edi
        push eax
        push ebx
        call public_6acfda2
        public_6acfedf : nop
        test esi, esi
        je public_6acfee8
        cmp esi, 3
        jne public_6acff0e
        public_6acfee8 : nop
        push edi
        push esi
        push ebx
        call public_6acfda2
        test eax, eax
        jne public_6acfef7
        and dword ptr ss : [ebp+0xC], eax
        public_6acfef7 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6acff0e
        mov eax, dword ptr ds : [public_6ae25a0]
        test eax, eax
        je public_6acff0e
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6acff0e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6acff11 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6acfe7b)
    }
}

#undef public_6acfe97
#undef public_6acfea1
#undef public_6acfeb3
#undef public_6acfebd
#undef public_6acfebf
#undef public_6acfec3
#undef public_6acfedf
#undef public_6acfee8
#undef public_6acfef7
#undef public_6acff0e
#undef public_6acff11
