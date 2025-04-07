#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d11b0);
CLANG_FORWARD_PROC_SYMBOL(public_65d21e0);

#define public_65d17d9 _public_65d17d9
#define public_65d17e7 _public_65d17e7
#define public_65d17ef _public_65d17ef
#define public_65d1813 _public_65d1813

PROC_DECLARE(0x65d17c0, internal_65d17c0, public_65d17c0);
extern "C" NAKED register_t __cdecl internal_65d17c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        je public_65d17e7
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d17e7
        mov edx, dword ptr ss : [esp+0x14]
        public_65d17d9 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx+0x14], edx
        je public_65d17ef
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_65d17d9
        public_65d17e7 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        ret 0xC
        public_65d17ef : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_65d21e0
        test al, al
        jne public_65d1813
        lea ecx, ss:[esp+0xC]
        push esi
        push ecx
        lea ecx, ds:[edi-4]
        call public_65d11b0
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        ret 0xC
        public_65d1813 : nop
        pop edi
        pop esi
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x65d17c0)
    }
}

#undef public_65d17d9
#undef public_65d17e7
#undef public_65d17ef
#undef public_65d1813
