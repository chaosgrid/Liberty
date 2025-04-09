#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e430);
CLANG_FORWARD_PROC_SYMBOL(public_58fa10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58fa20 _public_58fa20
#define public_58fa2e _public_58fa2e

PROC_DECLARE(0x58fa10, internal_58fa10, public_58fa10);
extern "C" NAKED register_t __cdecl internal_58fa10()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_58fa2e
        nop 
        public_58fa20 : nop
        mov ecx, esi
        call public_58e430
        add esi, 0xC
        cmp esi, ebx
        jne public_58fa20
        public_58fa2e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x58fa10)
    }
}

#undef public_58fa20
#undef public_58fa2e
