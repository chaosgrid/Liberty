#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557130);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_557148 _public_557148
#define public_557161 _public_557161

PROC_DECLARE(0x557130, internal_557130, public_557130);
extern "C" NAKED register_t __cdecl internal_557130()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_557161
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_557148
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_557148 : nop
        push esi
        mov dword ptr ds : [esi], 0
        mov byte ptr ds : [esi+4], 0
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi], 0
        public_557161 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x557130)
    }
}

#undef public_557148
#undef public_557161
