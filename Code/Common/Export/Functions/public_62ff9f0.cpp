#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff9f0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62ffa11 _public_62ffa11
#define public_62ffa43 _public_62ffa43
#define public_62ffa4b _public_62ffa4b
#define public_62ffa5f _public_62ffa5f

PROC_DECLARE(0x62ff9f0, internal_62ff9f0, public_62ff9f0);
extern "C" NAKED register_t __cdecl internal_62ff9f0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        mov edi, ecx
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ffa11
        push esi
        call public_630d3f0
        add esp, 4
        public_62ffa11 : nop
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x94]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_62ffa43
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62ffa43
        lea eax, ss:[esp+0xC]
        jmp public_62ffa4b
        public_62ffa43 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_62ffa4b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x98]
        je public_62ffa5f
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        pop ecx
        ret 4
        public_62ffa5f : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ff9f0)
    }
}

#undef public_62ffa11
#undef public_62ffa43
#undef public_62ffa4b
#undef public_62ffa5f
