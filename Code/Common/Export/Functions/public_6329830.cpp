#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6329857 _public_6329857
#define public_6329859 _public_6329859

PROC_DECLARE(0x6329830, internal_6329830, public_6329830);
extern "C" NAKED register_t __cdecl internal_6329830()
{
    __asm
    {
        push esi
        push 0x10
        mov esi, ecx
        call public_6391d9c
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6329857
        mov dword ptr ds : [eax], offset public_63a420c
        mov byte ptr ds : [eax+4], cl
        mov byte ptr ds : [eax+5], cl
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        jmp public_6329859
        public_6329857 : nop
        xor eax, eax
        public_6329859 : nop
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [eax+4], cl
        mov dl, byte ptr ds : [esi+5]
        mov byte ptr ds : [eax+5], dl
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+0xC]
        pop esi
        fstp dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6329830)
    }
}

#undef public_6329857
#undef public_6329859
