#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_58a790);

#define public_58a7b5 _public_58a7b5
#define public_58a7d7 _public_58a7d7
#define public_58a7df _public_58a7df

PROC_DECLARE(0x58a790, internal_58a790, public_58a790);
extern "C" NAKED register_t __cdecl internal_58a790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_4177b0
        add esp, 4
        test eax, eax
        je public_58a7df
        mov esi, dword ptr ds : [esi+0x334]
        cmp dword ptr ds : [esi+0x1C], eax
        je public_58a7df
        push edi
        mov dword ptr ds : [esi+0x1C], eax
        xor edi, edi
        public_58a7b5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_58a7d7
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_58a7d7
        mov ecx, dword ptr ds : [ecx+edi*8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_58a7b5
        public_58a7d7 : nop
        mov dword ptr ds : [esi+0x28], 0
        pop edi
        public_58a7df : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x58a790)
    }
}

#undef public_58a7b5
#undef public_58a7d7
#undef public_58a7df
