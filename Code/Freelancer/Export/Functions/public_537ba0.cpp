#include "Freelancer-PCH.h"


#define public_537bf0 _public_537bf0
#define public_537c10 _public_537c10

PROC_DECLARE(0x537ba0, internal_537ba0, public_537ba0);
extern "C" NAKED register_t __cdecl internal_537ba0()
{
    __asm
    {
        xor ecx, ecx
        push esi
        mov dword ptr ds : [public_6789a0], 0x8CA0
        mov dword ptr ds : [public_678980], ecx
        mov dword ptr ds : [public_678984], ecx
        mov dword ptr ds : [public_678988], ecx
        mov dword ptr ds : [public_67898c], ecx
        mov dword ptr ds : [public_678990], ecx
        mov dword ptr ds : [public_678994], ecx
        mov dword ptr ds : [public_678998], ecx
        mov dword ptr ds : [public_67899c], 0x4650
        xor edx, edx
        mov eax, offset public_675578
        mov esi, 0x100
        lea ecx, ds:[ecx]
        public_537bf0 : nop
        mov dword ptr ds : [eax], edx
        mov edx, eax
        add eax, 0x14
        dec esi
        jne public_537bf0
        mov dword ptr ds : [public_676978], edx
        mov eax, offset public_67697c
        mov edx, 0x100
        pop esi
        nop 
        lea esp, ss:[esp]
        public_537c10 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, eax
        add eax, 0x20
        dec edx
        jne public_537c10
        mov dword ptr ds : [public_67897c], ecx
        ret 
        UNREACHABLE_TRAP(0x537ba0)
    }
}

#undef public_537bf0
#undef public_537c10
