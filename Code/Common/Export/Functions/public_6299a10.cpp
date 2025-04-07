#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_6299a50 _public_6299a50
#define public_6299a75 _public_6299a75
#define public_6299a77 _public_6299a77
#define public_6299a7d _public_6299a7d

PROC_DECLARE(0x6299a10, internal_6299a10, public_6299a10);
extern "C" NAKED register_t __cdecl internal_6299a10()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        mov dl, byte ptr ds : [ecx+0x78]
        or eax, 0xFFFFFFFF
        test dl, dl
        push edi
        je public_6299a77
        push 0x10000
        lea ecx, ss:[esp+0xC]
        xor edi, edi
        call public_629b990
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+8]
        push edx
        add ecx, 0xE4
        call public_629b440
        test eax, eax
        je public_6299a75
        nop 
        lea esp, ss:[esp]
        public_6299a50 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, dword ptr ds : [edx+8]
        je public_6299a7d
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+8]
        push edx
        add ecx, 0xE4
        call public_629b440
        test eax, eax
        jne public_6299a50
        public_6299a75 : nop
        mov eax, edi
        public_6299a77 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 
        public_6299a7d : nop
        mov eax, dword ptr ds : [eax+0x28]
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6299a10)
    }
}

#undef public_6299a50
#undef public_6299a75
#undef public_6299a77
#undef public_6299a7d
