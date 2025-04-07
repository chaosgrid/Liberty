#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44780);
CLANG_FORWARD_PROC_SYMBOL(public_6d60230);

#define public_6d602f7 _public_6d602f7
#define public_6d60301 _public_6d60301
#define public_6d60313 _public_6d60313
#define public_6d6031d _public_6d6031d
#define public_6d6031f _public_6d6031f
#define public_6d60323 _public_6d60323
#define public_6d6033f _public_6d6033f
#define public_6d60348 _public_6d60348
#define public_6d60357 _public_6d60357
#define public_6d6036e _public_6d6036e
#define public_6d60371 _public_6d60371

PROC_DECLARE(0x6d602db, internal_6d602db, public_6d602db);
extern "C" NAKED register_t __cdecl internal_6d602db()
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
        jne public_6d602f7
        cmp dword ptr ds : [public_6d904a0], 0
        jmp public_6d6031d
        public_6d602f7 : nop
        cmp esi, 1
        je public_6d60301
        cmp esi, 2
        jne public_6d60323
        public_6d60301 : nop
        mov eax, dword ptr ds : [public_6d90738]
        test eax, eax
        je public_6d60313
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6d6031f
        public_6d60313 : nop
        push edi
        push esi
        push ebx
        call public_6d60230
        test eax, eax
        public_6d6031d : nop
        jne public_6d60323
        public_6d6031f : nop
        xor eax, eax
        jmp public_6d60371
        public_6d60323 : nop
        push edi
        push esi
        push ebx
        call public_6d44780
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6d6033f
        test eax, eax
        jne public_6d6036e
        push edi
        push eax
        push ebx
        call public_6d60230
        public_6d6033f : nop
        test esi, esi
        je public_6d60348
        cmp esi, 3
        jne public_6d6036e
        public_6d60348 : nop
        push edi
        push esi
        push ebx
        call public_6d60230
        test eax, eax
        jne public_6d60357
        and dword ptr ss : [ebp+0xC], eax
        public_6d60357 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d6036e
        mov eax, dword ptr ds : [public_6d90738]
        test eax, eax
        je public_6d6036e
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6d6036e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6d60371 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d602db)
    }
}

#undef public_6d602f7
#undef public_6d60301
#undef public_6d60313
#undef public_6d6031d
#undef public_6d6031f
#undef public_6d60323
#undef public_6d6033f
#undef public_6d60348
#undef public_6d60357
#undef public_6d6036e
#undef public_6d60371
