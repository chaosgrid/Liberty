#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

#define public_47fbce _public_47fbce

PROC_DECLARE(0x47fbb0, internal_47fbb0, public_47fbb0);
extern "C" NAKED register_t __cdecl internal_47fbb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_5a0880
        mov ecx, dword ptr ds : [esi+0x360]
        test ecx, ecx
        je public_47fbce
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x14]
        public_47fbce : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x47fbb0)
    }
}

#undef public_47fbce
