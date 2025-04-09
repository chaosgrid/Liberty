#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51e272 _public_51e272
#define public_51e274 _public_51e274
#define public_51e28b _public_51e28b
#define public_51e29e _public_51e29e

PROC_DECLARE(0x51e250, internal_51e250, public_51e250);
extern "C" NAKED register_t __cdecl internal_51e250()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_51e28b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51e28b
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_51e272
        lea ecx, ds:[eax-8]
        jmp public_51e274
        public_51e272 : nop
        xor ecx, ecx
        public_51e274 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x64]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_51e28b : nop
        mov eax, dword ptr ds : [public_6752c8]
        test eax, eax
        jne public_51e29e
        call public_5b73e0
        mov dword ptr ds : [public_6752c8], eax
        public_51e29e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x64]
        push edx
        add esi, 0x10
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x51e250)
    }
}

#undef public_51e272
#undef public_51e274
#undef public_51e28b
#undef public_51e29e
