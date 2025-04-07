#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5424b0);

#define public_5424c0 _public_5424c0
#define public_5424d3 _public_5424d3

PROC_DECLARE(0x5424b0, internal_5424b0, public_5424b0);
extern "C" NAKED register_t __cdecl internal_5424b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        je public_5424d3
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea ecx, ds:[ecx]
        public_5424c0 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x174]
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_5424c0
        pop edi
        public_5424d3 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5424b0)
    }
}

#undef public_5424c0
#undef public_5424d3
