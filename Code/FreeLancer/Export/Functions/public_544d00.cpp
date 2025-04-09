#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_544d00);

#define public_544d27 _public_544d27
#define public_544d29 _public_544d29
#define public_544d69 _public_544d69

PROC_DECLARE(0x544d00, internal_544d00, public_544d00);
extern "C" NAKED register_t __cdecl internal_544d00()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        test esi, esi
        je public_544d27
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_544d27
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_544d27
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_544d29
        public_544d27 : nop
        xor eax, eax
        public_544d29 : nop
        push 0x100000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        je public_544d69
        xor edx, edx
        mov dx, word ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x3C]
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_544d69 : nop
        xor al, al
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x544d00)
    }
}

#undef public_544d27
#undef public_544d29
#undef public_544d69
