#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_448210);

#define public_457a59 _public_457a59

PROC_DECLARE(0x457a30, internal_457a30, public_457a30);
extern "C" NAKED register_t __cdecl internal_457a30()
{
    __asm
    {
        test byte ptr ss : [esp+0xC], 1
        push esi
        je public_457a59
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x68], ecx
        call public_446be0
        test eax, eax
        je public_457a59
        mov edx, dword ptr ds : [esi+0x68]
        push edx
        mov ecx, eax
        call public_448210
        public_457a59 : nop
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x457a30)
    }
}

#undef public_457a59
