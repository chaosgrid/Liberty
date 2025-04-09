#include "FreeLancer-PCH.h"


#define public_50973a _public_50973a
#define public_50975f _public_50975f
#define public_509763 _public_509763

PROC_DECLARE(0x509710, internal_509710, public_509710);
extern "C" NAKED register_t __cdecl internal_509710()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x40]
        fadd dword ptr ds : [public_5d9668]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [esi+0x2BC]
        fnstsw ax
        test ah, 5
        jp public_50973a
        mov ecx, dword ptr ds : [esi+0x2BC]
        mov dword ptr ss : [esp+4], ecx
        public_50973a : nop
        mov esi, dword ptr ds : [esi+0x24]
        test esi, esi
        je public_50975f
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        fadd st(0), st
        fadd qword ptr ds : [public_5db0c0]
        fld dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_509763
        fstp st(0)
        public_50975f : nop
        fld dword ptr ss : [esp+4]
        public_509763 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x509710)
    }
}

#undef public_50973a
#undef public_50975f
#undef public_509763
