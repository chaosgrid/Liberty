#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac2e0);

#define public_62b020d _public_62b020d
#define public_62b020f _public_62b020f
#define public_62b022c _public_62b022c
#define public_62b022e _public_62b022e
#define public_62b0243 _public_62b0243
#define public_62b0245 _public_62b0245
#define public_62b025c _public_62b025c

PROC_DECLARE(0x62b01f0, internal_62b01f0, public_62b01f0);
extern "C" NAKED register_t __cdecl internal_62b01f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62b025c
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b025c
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62b020d
        lea ecx, ds:[eax-8]
        jmp public_62b020f
        public_62b020d : nop
        xor ecx, ecx
        public_62b020f : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b022c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62b022e
        public_62b022c : nop
        xor eax, eax
        public_62b022e : nop
        push 0
        mov ecx, eax
        call public_62ac2e0
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62b0243
        add eax, 0xFFFFFFF8
        jmp public_62b0245
        public_62b0243 : nop
        xor eax, eax
        public_62b0245 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax+0xB0]
        push eax
        call dword ptr ds : [edx+0x70]
        mov byte ptr ds : [esi+0x35], 1
        public_62b025c : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b01f0)
    }
}

#undef public_62b020d
#undef public_62b020f
#undef public_62b022c
#undef public_62b022e
#undef public_62b0243
#undef public_62b0245
#undef public_62b025c
