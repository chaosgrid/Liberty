#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426f80);

#define public_426fa7 _public_426fa7

PROC_DECLARE(0x426f80, internal_426f80, public_426f80);
extern "C" NAKED register_t __cdecl internal_426f80()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_426fa7
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x34]
        public_426fa7 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x426f80)
    }
}

#undef public_426fa7
