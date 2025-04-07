#include "Content-PCH.h"


#define public_6f27c98 _public_6f27c98

PROC_DECLARE(0x6f27c80, internal_6f27c80, public_6f27c80);
extern "C" NAKED register_t __cdecl internal_6f27c80()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edi, ds:[esi+0x11C]
        mov edx, edi
        public_6f27c98 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6f27c98
        mov dword ptr ds : [esi+0x118], edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f27c80)
    }
}

#undef public_6f27c98
