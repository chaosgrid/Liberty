#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7ca0);

#define public_65f7cc6 _public_65f7cc6
#define public_65f7cd3 _public_65f7cd3
#define public_65f7ce5 _public_65f7ce5
#define public_65f7cf9 _public_65f7cf9
#define public_65f7d0d _public_65f7d0d

PROC_DECLARE(0x65f7ca0, internal_65f7ca0, public_65f7ca0);
extern "C" NAKED register_t __cdecl internal_65f7ca0()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_65f7ce5
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_65f7cd3
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_65f7cc6
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi+0xC], 0
        public_65f7cc6 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_65f7cd3 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_65f7ce5 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_65f7cf9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_65f7cf9 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_65f7d0d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_65f7d0d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f7ca0)
    }
}

#undef public_65f7cc6
#undef public_65f7cd3
#undef public_65f7ce5
#undef public_65f7cf9
#undef public_65f7d0d
