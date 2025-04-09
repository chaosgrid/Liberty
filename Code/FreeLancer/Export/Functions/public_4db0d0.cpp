#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c81a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5520);

#define public_4db103 _public_4db103

PROC_DECLARE(0x4db0d0, internal_4db0d0, public_4db0d0);
extern "C" NAKED register_t __cdecl internal_4db0d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_4c81a0
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        mov esi, dword ptr ds : [esi+0x398]
        test esi, esi
        je public_4db103
        lea eax, ds:[esi-8]
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], eax
        mov ecx, offset public_674c0c
        jmp public_4f5520
        public_4db103 : nop
        xor eax, eax
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], eax
        mov ecx, offset public_674c0c
        jmp public_4f5520
        UNREACHABLE_TRAP(0x4db0d0)
    }
}

#undef public_4db103
