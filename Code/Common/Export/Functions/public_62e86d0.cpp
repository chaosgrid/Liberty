#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e86d0);

#define public_62e870c _public_62e870c

PROC_DECLARE(0x62e86d0, internal_62e86d0, public_62e86d0);
extern "C" NAKED register_t __cdecl internal_62e86d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        mov edi, ecx
        je public_62e870c
        mov eax, dword ptr ds : [edi+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [esi+8], eax
        jne public_62e870c
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 2
        jl public_62e870c
        cmp eax, 7
        jg public_62e870c
        fld dword ptr ds : [esi+0x18]
        fadd dword ptr ds : [edi+0x24]
        fstp dword ptr ds : [edi+0x24]
        public_62e870c : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62e86d0)
    }
}

#undef public_62e870c
