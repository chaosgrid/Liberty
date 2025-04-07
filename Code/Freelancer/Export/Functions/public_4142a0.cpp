#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142a0);

#define public_4142cd _public_4142cd
#define public_4142e4 _public_4142e4

PROC_DECLARE(0x4142a0, internal_4142a0, public_4142a0);
extern "C" NAKED register_t __cdecl internal_4142a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, eax
        jbe public_4142e4
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4142cd
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        ret 4
        public_4142cd : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [eax], 0
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        public_4142e4 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4142a0)
    }
}

#undef public_4142cd
#undef public_4142e4
