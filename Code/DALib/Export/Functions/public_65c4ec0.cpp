#include "DALib-PCH.h"


#define public_65c4ede _public_65c4ede
#define public_65c4efc _public_65c4efc
#define public_65c4f12 _public_65c4f12

PROC_DECLARE(0x65c4ec0, internal_65c4ec0, public_65c4ec0);
extern "C" NAKED register_t __cdecl internal_65c4ec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp word ptr ds : [eax], 0
        push esi
        mov esi, ecx
        jne public_65c4ede
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x3C], 0
        and eax, 0xFFFFFF7F
        jmp public_65c4efc
        public_65c4ede : nop
        push edi
        push eax
        lea edi, ds:[esi+0x258]
        push edi
        call dword ptr ds : [public_65c707c]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        mov dword ptr ds : [esi+0x3C], edi
        or eax, 0x80
        pop edi
        public_65c4efc : nop
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65c4f12
        mov ecx, dword ptr ds : [eax]
        push 0
        add esi, 8
        push esi
        push eax
        call dword ptr ds : [ecx+0x30]
        public_65c4f12 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c4ec0)
    }
}

#undef public_65c4ede
#undef public_65c4efc
#undef public_65c4f12
