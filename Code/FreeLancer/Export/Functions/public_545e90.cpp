#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6d40);
CLANG_FORWARD_PROC_SYMBOL(public_5340b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_545ec8 _public_545ec8

PROC_DECLARE(0x545e90, internal_545e90, public_545e90);
extern "C" NAKED register_t __cdecl internal_545e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_5340b0
        call public_54baf0
        cmp esi, eax
        jne public_545ec8
        mov ecx, dword ptr ds : [public_674a10]
        test ecx, ecx
        je public_545ec8
        push edi
        call public_4d6d40
        public_545ec8 : nop
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x545e90)
    }
}

#undef public_545ec8
