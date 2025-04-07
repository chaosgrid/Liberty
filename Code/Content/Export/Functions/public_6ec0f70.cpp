#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec0f89 _public_6ec0f89

PROC_DECLARE(0x6ec0f70, internal_6ec0f70, public_6ec0f70);
extern "C" NAKED register_t __cdecl internal_6ec0f70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        lea eax, ds:[esi+0xC]
        je public_6ec0f89
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x44], eax
        public_6ec0f89 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec0f70)
    }
}

#undef public_6ec0f89
