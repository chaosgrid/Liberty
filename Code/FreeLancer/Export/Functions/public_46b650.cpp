#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_46b650);

#define public_46b663 _public_46b663
#define public_46b676 _public_46b676
#define public_46b68f _public_46b68f

PROC_DECLARE(0x46b650, internal_46b650, public_46b650);
extern "C" NAKED register_t __cdecl internal_46b650()
{
    __asm
    {
        push edi
        mov edi, dword ptr ds : [public_66da80]
        test edi, edi
        je public_46b68f
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_46b676
        push esi
        public_46b663 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_46b663
        pop esi
        public_46b676 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [public_66da80], 0
        public_46b68f : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x46b650)
    }
}

#undef public_46b663
#undef public_46b676
#undef public_46b68f
