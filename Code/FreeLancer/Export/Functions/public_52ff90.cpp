#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_52ffbe _public_52ffbe

PROC_DECLARE(0x52ff90, internal_52ff90, public_52ff90);
extern "C" NAKED register_t __cdecl internal_52ff90()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0x17
        mov esi, ecx
        call public_539bc0
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_52ffbe
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x17
        cmp al, 0x17
        jne public_52ffbe
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        public_52ffbe : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52ff90)
    }
}

#undef public_52ffbe
