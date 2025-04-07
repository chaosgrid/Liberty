#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30bc9);

#define public_6d30c11 _public_6d30c11
#define public_6d30c31 _public_6d30c31
#define public_6d30c3e _public_6d30c3e
#define public_6d30c49 _public_6d30c49
#define public_6d30c52 _public_6d30c52
#define public_6d30c58 _public_6d30c58

PROC_DECLARE(0x6d30bc9, internal_6d30bc9, public_6d30bc9);
extern "C" NAKED register_t __cdecl internal_6d30bc9()
{
    __asm
    {
        cmp dword ptr ds : [public_6d72918], 0
        jne public_6d30c3e
        cmp dword ptr ds : [public_6d72914], 0
        jne public_6d30c52
        push ebx
        mov ebx, dword ptr ds : [public_6d5e054]
        push ebp
        push esi
        push edi
        mov esi, offset public_6d5f56c
        push esi
        call ebx
        test eax, eax
        mov ebp, dword ptr ds : [public_6d5e058]
        mov edi, dword ptr ds : [public_6d5e05c]
        je public_6d30c11
        push esi
        call edi
        test eax, eax
        je public_6d30c11
/*FIXUP push offset public_6d5f55c @0x6d30c04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f55c
        push eax
        call ebp
        mov dword ptr ds : [public_6d72918], eax
        public_6d30c11 : nop
        mov esi, offset public_6d5f550
        push esi
        call ebx
        test eax, eax
        je public_6d30c31
        push esi
        call edi
        test eax, eax
        je public_6d30c31
/*FIXUP push offset public_6d5f55c @0x6d30c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f55c
        push eax
        call ebp
        mov dword ptr ds : [public_6d72914], eax
        public_6d30c31 : nop
        cmp dword ptr ds : [public_6d72918], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_6d30c49
        public_6d30c3e : nop
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6d72918]
        pop ecx
        public_6d30c49 : nop
        cmp dword ptr ds : [public_6d72914], 0
        je public_6d30c58
        public_6d30c52 : nop
        jmp dword ptr ds : [public_6d72914]
        public_6d30c58 : nop
        ret 
        UNREACHABLE_TRAP(0x6d30bc9)
    }
}

#undef public_6d30c11
#undef public_6d30c31
#undef public_6d30c3e
#undef public_6d30c49
#undef public_6d30c52
#undef public_6d30c58
