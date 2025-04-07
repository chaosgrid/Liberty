#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);

#define public_6f47b30 _public_6f47b30
#define public_6f47b3a _public_6f47b3a
#define public_6f47b48 _public_6f47b48
#define public_6f47b68 _public_6f47b68

PROC_DECLARE(0x6f47af0, internal_6f47af0, public_6f47af0);
extern "C" NAKED register_t __cdecl internal_6f47af0()
{
    __asm
    {
        sub esp, 0x20
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        je public_6f47b30
        lea eax, ss:[esp+0x14]
        push eax
        call public_6eb70f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f47b68
        public_6f47b30 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6f47b3a
        mov ecx, dword ptr ds : [ecx+0x48]
        public_6f47b3a : nop
        mov eax, dword ptr ds : [eax+0x18]
        test eax, eax
        mov dword ptr ss : [esp], ecx
        je public_6f47b48
        mov eax, dword ptr ds : [eax+0x48]
        public_6f47b48 : nop
        mov dword ptr ss : [esp+4], eax
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [public_6fb351c]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        public_6f47b68 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, ecx
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], eax
        mov eax, ecx
        pop esi
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6f47af0)
    }
}

#undef public_6f47b30
#undef public_6f47b3a
#undef public_6f47b48
#undef public_6f47b68
