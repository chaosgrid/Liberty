#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f35286 _public_6f35286
#define public_6f352db _public_6f352db

PROC_DECLARE(0x6f35270, internal_6f35270, public_6f35270);
extern "C" NAKED register_t __cdecl internal_6f35270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e18]
        sub esp, 0x1C
        test eax, eax
        jne public_6f35286
        call public_6f57de0
        mov dword ptr ds : [public_6f61e18], eax
        public_6f35286 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov edi, dword ptr ss : [esp+0x2C]
        add esi, 0x24
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+8]
        push ecx
        push edi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6f352db
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        pop edi
        pop esi
        add esp, 0x1C
        ret 0xC
        public_6f352db : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6f35270)
    }
}

#undef public_6f35286
#undef public_6f352db
