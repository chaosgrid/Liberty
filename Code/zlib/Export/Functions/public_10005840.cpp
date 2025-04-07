#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004010);
CLANG_FORWARD_PROC_SYMBOL(public_10005840);

#define public_1000587e _public_1000587e

PROC_DECLARE(0x10005840, internal_10005840, public_10005840);
extern "C" NAKED register_t __cdecl internal_10005840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        cmp eax, edx
        je public_1000587e
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, edx
        je public_1000587e
        push esi
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x18], edx
        mov esi, dword ptr ds : [ecx+0xC]
        neg esi
        sbb esi, esi
        push edx
        and esi, 7
        mov dword ptr ds : [ecx], esi
        push eax
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        push ecx
        call public_10004010
        add esp, 0xC
        xor eax, eax
        pop esi
        ret 4
        public_1000587e : nop
        mov eax, 0xFFFFFFFE
        ret 4
        UNREACHABLE_TRAP(0x10005840)
    }
}

#undef public_1000587e
