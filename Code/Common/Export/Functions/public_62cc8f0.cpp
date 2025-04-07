#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62cc92b _public_62cc92b
#define public_62cc92d _public_62cc92d
#define public_62cc958 _public_62cc958

PROC_DECLARE(0x62cc8f0, internal_62cc8f0, public_62cc8f0);
extern "C" NAKED register_t __cdecl internal_62cc8f0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        push edi
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xAC]
        mov esi, dword ptr ds : [esi+0x2C]
        test esi, esi
        je public_62cc92b
        lea eax, ds:[esi-8]
        jmp public_62cc92d
        public_62cc92b : nop
        xor eax, eax
        public_62cc92d : nop
        push eax
        call public_62e61f0
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc538]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        pop edi
        pop esi
        jne public_62cc958
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cc958 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x62cc8f0)
    }
}

#undef public_62cc92b
#undef public_62cc92d
#undef public_62cc958
