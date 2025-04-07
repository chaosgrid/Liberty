#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6313ede _public_6313ede
#define public_6313ee6 _public_6313ee6
#define public_6313ef7 _public_6313ef7

PROC_DECLARE(0x6313eb0, internal_6313eb0, public_6313eb0);
extern "C" NAKED register_t __cdecl internal_6313eb0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x2C]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6313ede
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6313ede
        lea eax, ss:[esp+8]
        jmp public_6313ee6
        public_6313ede : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6313ee6 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        jne public_6313ef7
        xor eax, eax
        pop ecx
        ret 4
        public_6313ef7 : nop
        add eax, 0x10
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6313eb0)
    }
}

#undef public_6313ede
#undef public_6313ee6
#undef public_6313ef7
