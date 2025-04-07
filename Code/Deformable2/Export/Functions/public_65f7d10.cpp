#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7d10);

#define public_65f7d36 _public_65f7d36
#define public_65f7d43 _public_65f7d43
#define public_65f7d55 _public_65f7d55
#define public_65f7d69 _public_65f7d69

PROC_DECLARE(0x65f7d10, internal_65f7d10, public_65f7d10);
extern "C" NAKED register_t __cdecl internal_65f7d10()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_65f7d55
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_65f7d43
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_65f7d36
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi+0xC], 0
        public_65f7d36 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_65f7d43 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_65f7d55 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_65f7d69
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_65f7d69 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f7d10)
    }
}

#undef public_65f7d36
#undef public_65f7d43
#undef public_65f7d55
#undef public_65f7d69
