#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_520130);
CLANG_FORWARD_PROC_SYMBOL(public_522070);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_520156 _public_520156
#define public_520168 _public_520168

PROC_DECLARE(0x520130, internal_520130, public_520130);
extern "C" NAKED register_t __cdecl internal_520130()
{
    __asm
    {
        push esi
        push edi
        push 0x21
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_520168
        mov edi, dword ptr ds : [public_6753c4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_520168
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        public_520156 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ebp
        call public_522070
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_520156
        pop ebp
        pop ebx
        public_520168 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x520130)
    }
}

#undef public_520156
#undef public_520168
