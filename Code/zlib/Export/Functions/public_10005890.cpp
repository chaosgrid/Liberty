#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004c90);
CLANG_FORWARD_PROC_SYMBOL(public_10005890);

#define public_100058b8 _public_100058b8
#define public_100058d3 _public_100058d3

PROC_DECLARE(0x10005890, internal_10005890, public_10005890);
extern "C" NAKED register_t __cdecl internal_10005890()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_100058d3
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_100058d3
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_100058d3
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_100058b8
        push esi
        push eax
        call public_10004c90
        add esp, 8
        public_100058b8 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        push ecx
        call dword ptr ds : [esi+0x24]
        add esp, 8
        mov dword ptr ds : [esi+0x1C], 0
        xor eax, eax
        pop esi
        ret 4
        public_100058d3 : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x10005890)
    }
}

#undef public_100058b8
#undef public_100058d3
