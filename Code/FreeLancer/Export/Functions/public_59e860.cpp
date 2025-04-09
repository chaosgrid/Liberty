#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59e870 _public_59e870
#define public_59e883 _public_59e883

PROC_DECLARE(0x59e860, internal_59e860, public_59e860);
extern "C" NAKED register_t __cdecl internal_59e860()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_59e883
        push esi
        nop 
        lea esp, ss:[esp]
        public_59e870 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_59e870
        pop esi
        public_59e883 : nop
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+4], 0
        pop edi
        ret 
        UNREACHABLE_TRAP(0x59e860)
    }
}

#undef public_59e870
#undef public_59e883
