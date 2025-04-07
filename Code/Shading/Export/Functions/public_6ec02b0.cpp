#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec02b0);

#define public_6ec02d6 _public_6ec02d6
#define public_6ec02e3 _public_6ec02e3
#define public_6ec02f5 _public_6ec02f5
#define public_6ec0309 _public_6ec0309

PROC_DECLARE(0x6ec02b0, internal_6ec02b0, public_6ec02b0);
extern "C" NAKED register_t __cdecl internal_6ec02b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6ec02f5
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_6ec02e3
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6ec02d6
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi+0xC], 0
        public_6ec02d6 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6ec02e3 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6ec02f5 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ec0309
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_6ec0309 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec02b0)
    }
}

#undef public_6ec02d6
#undef public_6ec02e3
#undef public_6ec02f5
#undef public_6ec0309
