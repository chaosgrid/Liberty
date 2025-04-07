#include "Freelancer-PCH.h"


#define public_429e2e _public_429e2e
#define public_429e42 _public_429e42

PROC_DECLARE(0x429de0, internal_429de0, public_429de0);
extern "C" NAKED register_t __cdecl internal_429de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x60]
        sub esp, 0xC
        cmp ecx, 0xFFFFFFFF
        je public_429e42
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        xor ecx, ecx
        cmp eax, ecx
        je public_429e2e
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 8
        public_429e2e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        add esp, 0xC
        ret 8
        public_429e42 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x48
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x429de0)
    }
}

#undef public_429e2e
#undef public_429e42
