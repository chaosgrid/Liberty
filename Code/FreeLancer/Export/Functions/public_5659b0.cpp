#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5659b0);

#define public_5659d6 _public_5659d6
#define public_5659e3 _public_5659e3
#define public_5659f5 _public_5659f5
#define public_565a09 _public_565a09

PROC_DECLARE(0x5659b0, internal_5659b0, public_5659b0);
extern "C" NAKED register_t __cdecl internal_5659b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_5659f5
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_5659e3
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_5659d6
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi+0xC], 0
        public_5659d6 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_5659e3 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_5659f5 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_565a09
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_565a09 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5659b0)
    }
}

#undef public_5659d6
#undef public_5659e3
#undef public_5659f5
#undef public_565a09
