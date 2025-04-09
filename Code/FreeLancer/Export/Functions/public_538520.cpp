#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538520);

#define public_538530 _public_538530
#define public_53854f _public_53854f
#define public_538556 _public_538556

PROC_DECLARE(0x538520, internal_538520, public_538520);
extern "C" NAKED register_t __cdecl internal_538520()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_675570]
        test ecx, ecx
        je public_538556
        push esi
        nop 
        lea esp, ss:[esp]
        public_538530 : nop
        mov edx, dword ptr ds : [ecx+0xD0]
        mov esi, dword ptr ds : [ecx+0xC8]
        dec edx
        mov eax, edx
        test eax, eax
        mov dword ptr ds : [ecx+0xD0], edx
        jg public_53854f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_53854f : nop
        test esi, esi
        mov ecx, esi
        jne public_538530
        pop esi
        public_538556 : nop
        ret 
        UNREACHABLE_TRAP(0x538520)
    }
}

#undef public_538530
#undef public_53854f
#undef public_538556
