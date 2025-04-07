#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d3e0);

#define public_6349b94 _public_6349b94

PROC_DECLARE(0x6349b40, internal_6349b40, public_6349b40);
extern "C" NAKED register_t __cdecl internal_6349b40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x5C]
        cmp eax, 0x100
        jge public_6349b94
        mov edx, dword ptr ss : [esp+4]
        add eax, 3
        shl eax, 5
        add eax, ecx
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx+4]
        push esi
        mov esi, dword ptr ds : [edx+8]
        fld dword ptr ds : [edx]
        mov edx, esi
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax]
        push edx
        push eax
        fstp dword ptr ds : [eax+4]
        add ecx, 0x4C
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [eax+0x1C], edx
        call public_634d3e0
        pop esi
        public_6349b94 : nop
        ret 0x14
        UNREACHABLE_TRAP(0x6349b40)
    }
}

#undef public_6349b94
