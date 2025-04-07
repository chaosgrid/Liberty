#include "Common-PCH.h"


#define public_63334da _public_63334da
#define public_63334fc _public_63334fc
#define public_633351e _public_633351e

PROC_DECLARE(0x63334b0, internal_63334b0, public_63334b0);
extern "C" NAKED register_t __cdecl internal_63334b0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, 1
        push esi
        jne public_63334da
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [esi]
        pop esi
        ret 0x10
        public_63334da : nop
        test ecx, ecx
        jne public_63334fc
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edx
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        mov ecx, eax
        call dword ptr ds : [esi]
        pop esi
        ret 0x10
        public_63334fc : nop
        cmp ecx, 2
        jne public_633351e
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [esi]
        public_633351e : nop
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x63334b0)
    }
}

#undef public_63334da
#undef public_63334fc
#undef public_633351e
