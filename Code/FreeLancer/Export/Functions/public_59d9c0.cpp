#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);

#define public_59d9d8 _public_59d9d8
#define public_59d9f1 _public_59d9f1
#define public_59d9f8 _public_59d9f8
#define public_59d9ff _public_59d9ff

PROC_DECLARE(0x59d9c0, internal_59d9c0, public_59d9c0);
extern "C" NAKED register_t __cdecl internal_59d9c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_67dbe8]
        test edi, edi
        je public_59d9f8
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_5c6d24]
        public_59d9d8 : nop
        mov esi, dword ptr ds : [edi+8]
        test esi, esi
        je public_59d9f1
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_59d9f1
        push ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_59d9ff
        public_59d9f1 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_59d9d8
        public_59d9f8 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_59d9ff : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59d9c0)
    }
}

#undef public_59d9d8
#undef public_59d9f1
#undef public_59d9f8
#undef public_59d9ff
