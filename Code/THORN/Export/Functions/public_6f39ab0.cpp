#include "THORN-PCH.h"


#define public_6f39ad0 _public_6f39ad0
#define public_6f39ade _public_6f39ade
#define public_6f39aef _public_6f39aef

PROC_DECLARE(0x6f39ab0, internal_6f39ab0, public_6f39ab0);
extern "C" NAKED register_t __cdecl internal_6f39ab0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xBC]
        mov ecx, dword ptr ds : [ecx+0xC0]
        cmp eax, ecx
        push esi
        je public_6f39ade
        mov edx, dword ptr ss : [esp+0xC]
        lea esp, ss:[esp]
        public_6f39ad0 : nop
        mov esi, dword ptr ds : [eax]
        cmp dword ptr ds : [esi+0xC], edx
        je public_6f39ade
        add eax, 4
        cmp eax, ecx
        jne public_6f39ad0
        public_6f39ade : nop
        cmp eax, ecx
        pop esi
        je public_6f39aef
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        ret 8
        public_6f39aef : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f39ab0)
    }
}

#undef public_6f39ad0
#undef public_6f39ade
#undef public_6f39aef
