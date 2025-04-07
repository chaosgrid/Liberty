#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203b60);
CLANG_FORWARD_PROC_SYMBOL(public_624629a);

#define public_6246361 _public_6246361
#define public_624636b _public_624636b
#define public_624637d _public_624637d
#define public_6246387 _public_6246387
#define public_6246389 _public_6246389
#define public_624638d _public_624638d
#define public_62463a9 _public_62463a9
#define public_62463b2 _public_62463b2
#define public_62463c1 _public_62463c1
#define public_62463d8 _public_62463d8
#define public_62463db _public_62463db

PROC_DECLARE(0x6246345, internal_6246345, public_6246345);
extern "C" NAKED register_t __cdecl internal_6246345()
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
        jne public_6246361
        cmp dword ptr ds : [public_6257c60], 0
        jmp public_6246387
        public_6246361 : nop
        cmp esi, 1
        je public_624636b
        cmp esi, 2
        jne public_624638d
        public_624636b : nop
        mov eax, dword ptr ds : [public_6258388]
        test eax, eax
        je public_624637d
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6246389
        public_624637d : nop
        push edi
        push esi
        push ebx
        call public_624629a
        test eax, eax
        public_6246387 : nop
        jne public_624638d
        public_6246389 : nop
        xor eax, eax
        jmp public_62463db
        public_624638d : nop
        push edi
        push esi
        push ebx
        call public_6203b60
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_62463a9
        test eax, eax
        jne public_62463d8
        push edi
        push eax
        push ebx
        call public_624629a
        public_62463a9 : nop
        test esi, esi
        je public_62463b2
        cmp esi, 3
        jne public_62463d8
        public_62463b2 : nop
        push edi
        push esi
        push ebx
        call public_624629a
        test eax, eax
        jne public_62463c1
        and dword ptr ss : [ebp+0xC], eax
        public_62463c1 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_62463d8
        mov eax, dword ptr ds : [public_6258388]
        test eax, eax
        je public_62463d8
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_62463d8 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_62463db : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6246345)
    }
}

#undef public_6246361
#undef public_624636b
#undef public_624637d
#undef public_6246387
#undef public_6246389
#undef public_624638d
#undef public_62463a9
#undef public_62463b2
#undef public_62463c1
#undef public_62463d8
#undef public_62463db
