#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45b3c0);

#define public_45b3fd _public_45b3fd
#define public_45b405 _public_45b405
#define public_45b418 _public_45b418
#define public_45b427 _public_45b427

PROC_DECLARE(0x45b3c0, internal_45b3c0, public_45b3c0);
extern "C" NAKED register_t __cdecl internal_45b3c0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ds : [public_66d398]
        test edi, edi
        je public_45b427
        fld dword ptr ds : [edi+0x334]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_45b3fd
        fld dword ptr ds : [edi+0x334]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_45b427
        mov dword ptr ds : [edi+0x334], 0x3F800000
        pop edi
        ret 
        public_45b3fd : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_45b418
        push esi
        public_45b405 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_45b405
        pop esi
        public_45b418 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_45b427 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x45b3c0)
    }
}

#undef public_45b3fd
#undef public_45b405
#undef public_45b418
#undef public_45b427
