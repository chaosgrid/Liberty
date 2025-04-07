#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201e00);

#define public_6201ea6 _public_6201ea6

PROC_DECLARE(0x6201e90, internal_6201e90, public_6201e90);
extern "C" NAKED register_t __cdecl internal_6201e90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x28]
        test eax, eax
        je public_6201ea6
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6201ea6 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6201e00
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6201e90)
    }
}

#undef public_6201ea6
