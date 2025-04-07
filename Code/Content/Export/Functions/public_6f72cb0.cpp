#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f72ce0 _public_6f72ce0
#define public_6f72ce8 _public_6f72ce8
#define public_6f72cfc _public_6f72cfc

PROC_DECLARE(0x6f72cb0, internal_6f72cb0, public_6f72cb0);
extern "C" NAKED register_t __cdecl internal_6f72cb0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x70]
        push eax
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6f72ce0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f72ce0
        lea eax, ss:[esp+8]
        jmp public_6f72ce8
        public_6f72ce0 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f72ce8 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f72cfc
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        public_6f72cfc : nop
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f72cb0)
    }
}

#undef public_6f72ce0
#undef public_6f72ce8
#undef public_6f72cfc
