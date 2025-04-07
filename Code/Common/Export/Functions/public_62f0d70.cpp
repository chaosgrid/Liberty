#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0d70);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62f0d9e _public_62f0d9e
#define public_62f0da6 _public_62f0da6
#define public_62f0db8 _public_62f0db8

PROC_DECLARE(0x62f0d70, internal_62f0d70, public_62f0d70);
extern "C" NAKED register_t __cdecl internal_62f0d70()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x48]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_62f0d9e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62f0d9e
        lea eax, ss:[esp+8]
        jmp public_62f0da6
        public_62f0d9e : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_62f0da6 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_62f0db8
        add eax, 0x10
        pop ecx
        ret 4
        public_62f0db8 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62f0d70)
    }
}

#undef public_62f0d9e
#undef public_62f0da6
#undef public_62f0db8
