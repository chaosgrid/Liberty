#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

#define public_6240108 _public_6240108
#define public_624012a _public_624012a

PROC_DECLARE(0x62400f0, internal_62400f0, public_62400f0);
extern "C" NAKED register_t __cdecl internal_62400f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        sub eax, 0
        push edi
        je public_624012a
        dec eax
        je public_6240108
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        ret 0xC
        public_6240108 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, 0xC
        lea edi, ds:[eax+0x1C]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        or ecx, 4
        pop esi
        mov dword ptr ds : [eax+4], ecx
        xor eax, eax
        ret 0xC
        public_624012a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, 0xC
        lea edi, ds:[eax+0x4C]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        or ecx, 8
        pop esi
        mov dword ptr ds : [eax+4], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x62400f0)
    }
}

#undef public_6240108
#undef public_624012a
