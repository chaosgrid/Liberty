#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_629dee8 _public_629dee8
#define public_629deea _public_629deea
#define public_629def4 _public_629def4

PROC_DECLARE(0x629ded0, internal_629ded0, public_629ded0);
extern "C" NAKED register_t __cdecl internal_629ded0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        je public_629dee8
        add eax, 0x9C
        jmp public_629deea
        public_629dee8 : nop
        xor eax, eax
        public_629deea : nop
        cmp eax, dword ptr ds : [ecx]
        je public_629def4
        push eax
        call public_6341610
        public_629def4 : nop
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        pop edi
        mov dword ptr ds : [esi+4], 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629ded0)
    }
}

#undef public_629dee8
#undef public_629deea
#undef public_629def4
