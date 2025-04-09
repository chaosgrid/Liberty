#include "FreeLancer-PCH.h"


#define public_43d910 _public_43d910
#define public_43d920 _public_43d920

PROC_DECLARE(0x43d900, internal_43d900, public_43d900);
extern "C" NAKED register_t __cdecl internal_43d900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        test esi, esi
        je public_43d920
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea ecx, ds:[ecx]
        public_43d910 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_43d910
        pop edi
        public_43d920 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43d900)
    }
}

#undef public_43d910
#undef public_43d920
