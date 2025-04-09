#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58a740);

#define public_58a756 _public_58a756
#define public_58a77a _public_58a77a
#define public_58a782 _public_58a782

PROC_DECLARE(0x58a740, internal_58a740, public_58a740);
extern "C" NAKED register_t __cdecl internal_58a740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+0x334]
        cmp dword ptr ds : [esi+0x1C], eax
        je public_58a782
        push edi
        mov dword ptr ds : [esi+0x1C], eax
        xor edi, edi
        public_58a756 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_58a77a
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_58a77a
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+edi*8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_58a756
        public_58a77a : nop
        mov dword ptr ds : [esi+0x28], 0
        pop edi
        public_58a782 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x58a740)
    }
}

#undef public_58a756
#undef public_58a77a
#undef public_58a782
