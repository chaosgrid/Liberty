#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_62a2250);

#define public_62a1572 _public_62a1572
#define public_62a157a _public_62a157a
#define public_62a158e _public_62a158e

PROC_DECLARE(0x62a1540, internal_62a1540, public_62a1540);
extern "C" NAKED register_t __cdecl internal_62a1540()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_62a2250
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_62a1572
        mov cx, word ptr ss : [esp+0x14]
        cmp cx, word ptr ds : [eax+0xC]
        jb public_62a1572
        lea eax, ss:[esp+8]
        jmp public_62a157a
        public_62a1572 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_62a157a : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_62a158e
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        public_62a158e : nop
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62a1540)
    }
}

#undef public_62a1572
#undef public_62a157a
#undef public_62a158e
