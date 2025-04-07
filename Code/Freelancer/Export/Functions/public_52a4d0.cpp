#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a4d0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);

#define public_52a4e4 _public_52a4e4
#define public_52a4fe _public_52a4fe

PROC_DECLARE(0x52a4d0, internal_52a4d0, public_52a4d0);
extern "C" NAKED register_t __cdecl internal_52a4d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x34], edi
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        public_52a4e4 : nop
        cmp eax, dword ptr ds : [esi+0x14]
        je public_52a4fe
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0x24], edi
        lea ecx, ss:[esp+0xC]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_52a4e4
        public_52a4fe : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52a4d0)
    }
}

#undef public_52a4e4
#undef public_52a4fe
