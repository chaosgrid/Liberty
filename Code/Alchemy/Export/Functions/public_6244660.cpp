#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244660);

#define public_6244676 _public_6244676
#define public_6244688 _public_6244688

PROC_DECLARE(0x6244660, internal_6244660, public_6244660);
extern "C" NAKED register_t __cdecl internal_6244660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0xA0]
        mov esi, dword ptr ds : [eax+0x9C]
        cmp esi, edi
        je public_6244688
        public_6244676 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xA0]
        add esi, 4
        cmp esi, edi
        jne public_6244676
        public_6244688 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6244660)
    }
}

#undef public_6244676
#undef public_6244688
