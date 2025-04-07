#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c310c0);

#define public_6c2d931 _public_6c2d931
#define public_6c2d93a _public_6c2d93a
#define public_6c2d9a4 _public_6c2d9a4

PROC_DECLARE(0x6c2d920, internal_6c2d920, public_6c2d920);
extern "C" NAKED register_t __cdecl internal_6c2d920()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, 0xFFFFFFFF
        je public_6c2d931
        test esi, esi
        jne public_6c2d93a
        public_6c2d931 : nop
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 0xC
        public_6c2d93a : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        inc edx
        push esi
        mov dword ptr ds : [esi+0x14], edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0x88]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6c36320]
        fnstsw ax
        test ah, 0x41
        jp public_6c2d9a4
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_6c310c0
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0x84]
        public_6c2d9a4 : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6c2d920)
    }
}

#undef public_6c2d931
#undef public_6c2d93a
#undef public_6c2d9a4
