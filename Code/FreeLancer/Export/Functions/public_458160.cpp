#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458160);

#define public_45819b _public_45819b

PROC_DECLARE(0x458160, internal_458160, public_458160);
extern "C" NAKED register_t __cdecl internal_458160()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        cmp ecx, 0xFFFFFFFF
        je public_45819b
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+edi*4], 0xFFFFFFFF
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+edi*4], 0
        pop edi
        pop esi
        ret 4
        public_45819b : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+edi*4], 0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x458160)
    }
}

#undef public_45819b
