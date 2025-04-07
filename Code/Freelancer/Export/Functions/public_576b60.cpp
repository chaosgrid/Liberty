#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576b60);

#define public_576b78 _public_576b78
#define public_576b84 _public_576b84
#define public_576b99 _public_576b99
#define public_576b9f _public_576b9f

PROC_DECLARE(0x576b60, internal_576b60, public_576b60);
extern "C" NAKED register_t __cdecl internal_576b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c228]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_576b99
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_5c6d24]
        public_576b78 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_576b84
        mov eax, dword ptr ds : [public_5c7078]
        public_576b84 : nop
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_576b9f
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_67c228]
        jne public_576b78
        public_576b99 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_576b9f : nop
        pop edi
        lea eax, ds:[esi+8]
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x576b60)
    }
}

#undef public_576b78
#undef public_576b84
#undef public_576b99
#undef public_576b9f
