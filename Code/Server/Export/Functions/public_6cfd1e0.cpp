#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);

#define public_6cfd1f4 _public_6cfd1f4
#define public_6cfd20e _public_6cfd20e

PROC_DECLARE(0x6cfd1e0, internal_6cfd1e0, public_6cfd1e0);
extern "C" NAKED register_t __cdecl internal_6cfd1e0()
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
        public_6cfd1f4 : nop
        cmp eax, dword ptr ds : [esi+0x14]
        je public_6cfd20e
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0x24], edi
        lea ecx, ss:[esp+0xC]
        call public_6d160d0
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_6cfd1f4
        public_6cfd20e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfd1e0)
    }
}

#undef public_6cfd1f4
#undef public_6cfd20e
