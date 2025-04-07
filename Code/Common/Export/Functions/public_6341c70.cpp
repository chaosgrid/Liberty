#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6341c70);

#define public_6341cb9 _public_6341cb9
#define public_6341cc1 _public_6341cc1
#define public_6341ccd _public_6341ccd

PROC_DECLARE(0x6341c70, internal_6341c70, public_6341c70);
extern "C" NAKED register_t __cdecl internal_6341c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_658a9c0
        call public_6301640
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_658a9c4]
        je public_6341ccd
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x10]
        push edi
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6341cb9
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6341cb9
        lea eax, ss:[esp+0x10]
        jmp public_6341cc1
        public_6341cb9 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6341cc1 : nop
        mov eax, dword ptr ds : [eax]
        pop edi
        cmp eax, esi
        pop esi
        je public_6341ccd
        fld dword ptr ds : [eax+0x10]
        ret 
        public_6341ccd : nop
        fld dword ptr ds : [public_639a1d0]
        ret 
        UNREACHABLE_TRAP(0x6341c70)
    }
}

#undef public_6341cb9
#undef public_6341cc1
#undef public_6341ccd
