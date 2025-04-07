#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_520170);
CLANG_FORWARD_PROC_SYMBOL(public_5225d0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_5201a0 _public_5201a0
#define public_5201b4 _public_5201b4

PROC_DECLARE(0x520170, internal_520170, public_520170);
extern "C" NAKED register_t __cdecl internal_520170()
{
    __asm
    {
        push esi
        push 0x21
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5201b4
        xor eax, eax
        mov dword ptr ds : [public_6753b4], eax
        mov dword ptr ds : [public_6753b8], eax
        mov dword ptr ds : [public_6753bc], eax
        mov eax, dword ptr ds : [public_6753c4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_5201b4
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_5201a0 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_5225d0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6753c4]
        jne public_5201a0
        pop edi
        public_5201b4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x520170)
    }
}

#undef public_5201a0
#undef public_5201b4
