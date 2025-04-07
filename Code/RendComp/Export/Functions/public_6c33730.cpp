#include "RendComp-PCH.h"


#define public_6c33777 _public_6c33777

PROC_DECLARE(0x6c33730, internal_6c33730, public_6c33730);
extern "C" NAKED register_t __cdecl internal_6c33730()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        push eax
        or edi, 0xFFFFFFFF
        call dword ptr ds : [ecx+0x64]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6c33777
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x3C]
        pop edi
        pop esi
        ret 0x14
        public_6c33777 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x6c33730)
    }
}

#undef public_6c33777
