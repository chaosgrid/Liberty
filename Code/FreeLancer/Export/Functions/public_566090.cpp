#include "FreeLancer-PCH.h"


#define public_5660b5 _public_5660b5

PROC_DECLARE(0x566090, internal_566090, public_566090);
extern "C" NAKED register_t __cdecl internal_566090()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x84]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, eax
        jne public_5660b5
        mov eax, dword ptr ds : [edx+0x88]
        cmp dword ptr ds : [esi+0x88], eax
        public_5660b5 : nop
        sbb eax, eax
        neg eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x566090)
    }
}

#undef public_5660b5
