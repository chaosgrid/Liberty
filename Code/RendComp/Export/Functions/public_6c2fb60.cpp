#include "RendComp-PCH.h"


#define public_6c2fba2 _public_6c2fba2

PROC_DECLARE(0x6c2fb60, internal_6c2fb60, public_6c2fb60);
extern "C" NAKED register_t __cdecl internal_6c2fb60()
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
        je public_6c2fba2
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        ret 0x10
        public_6c2fba2 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6c2fb60)
    }
}

#undef public_6c2fba2
