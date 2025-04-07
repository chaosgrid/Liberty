#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f492d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a710);

#define public_6f49303 _public_6f49303
#define public_6f4930b _public_6f4930b
#define public_6f49322 _public_6f49322

PROC_DECLARE(0x6f492d0, internal_6f492d0, public_6f492d0);
extern "C" NAKED register_t __cdecl internal_6f492d0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x84]
        push eax
        mov ecx, esi
        call public_6f4a710
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6f49303
        mov cl, byte ptr ss : [esp+0x14]
        cmp cl, byte ptr ds : [eax+0xC]
        jb public_6f49303
        lea eax, ss:[esp+8]
        jmp public_6f4930b
        public_6f49303 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f4930b : nop
        mov ecx, dword ptr ds : [edi+0x88]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f49322
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        public_6f49322 : nop
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f492d0)
    }
}

#undef public_6f49303
#undef public_6f4930b
#undef public_6f49322
