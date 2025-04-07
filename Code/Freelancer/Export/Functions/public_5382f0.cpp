#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5382f0);

#define public_538338 _public_538338
#define public_538353 _public_538353

PROC_DECLARE(0x5382f0, internal_5382f0, public_5382f0);
extern "C" NAKED register_t __cdecl internal_5382f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6789a0]
        cdq 
        xor ecx, ecx
        sub eax, edx
        sar eax, 1
        push esi
        mov dword ptr ds : [public_67899c], eax
        mov dword ptr ds : [public_678980], ecx
        mov dword ptr ds : [public_678984], ecx
        mov dword ptr ds : [public_678988], ecx
        mov dword ptr ds : [public_67898c], ecx
        mov dword ptr ds : [public_678990], ecx
        mov dword ptr ds : [public_678994], ecx
        mov dword ptr ds : [public_678998], ecx
        xor edx, edx
        mov eax, offset public_675578
        mov esi, 0x100
        public_538338 : nop
        mov dword ptr ds : [eax], edx
        mov edx, eax
        add eax, 0x14
        dec esi
        jne public_538338
        mov dword ptr ds : [public_676978], edx
        mov eax, offset public_67697c
        mov edx, 0x100
        pop esi
        public_538353 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, eax
        add eax, 0x20
        dec edx
        jne public_538353
        mov dword ptr ds : [public_67897c], ecx
        ret 
        UNREACHABLE_TRAP(0x5382f0)
    }
}

#undef public_538338
#undef public_538353
