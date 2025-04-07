#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d09270);

#define public_6d092a1 _public_6d092a1
#define public_6d092b5 _public_6d092b5

PROC_DECLARE(0x6d09270, internal_6d09270, public_6d09270);
extern "C" NAKED register_t __cdecl internal_6d09270()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d092b5
        public_6d092a1 : nop
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ds:[esi+8]
        call public_6cf6df0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d092a1
        public_6d092b5 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d09270)
    }
}

#undef public_6d092a1
#undef public_6d092b5
