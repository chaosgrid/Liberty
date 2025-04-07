#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d3fd0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4d3fe0 _public_4d3fe0
#define public_4d4039 _public_4d4039
#define public_4d403b _public_4d403b
#define public_4d4052 _public_4d4052
#define public_4d405b _public_4d405b
#define public_4d406b _public_4d406b
#define public_4d4096 _public_4d4096
#define public_4d40a6 _public_4d40a6
#define public_4d40b6 _public_4d40b6
#define public_4d40c3 _public_4d40c3
#define public_4d40d0 _public_4d40d0
#define public_4d40e0 _public_4d40e0
#define public_4d40f0 _public_4d40f0
#define public_4d4100 _public_4d4100
#define public_4d410e _public_4d410e

PROC_DECLARE(0x4d3fd0, internal_4d3fd0, public_4d3fd0);
extern "C" NAKED register_t __cdecl internal_4d3fd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_4d3fe0
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_4d3fe0 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [esi+0xE0]
        mov edx, ecx
        and edx, 0x503
        cmp edx, 0x503
        jne public_4d40b6
        mov dl, byte ptr ds : [esi+0x2BD]
        test dl, dl
        je public_4d405b
        mov eax, dword ptr ds : [esi+0x1B4]
        test eax, eax
        je public_4d4052
        call public_54baf0
        test eax, eax
        je public_4d4052
        add eax, 0xC
        test eax, eax
        je public_4d4039
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4d4039
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4d403b
        public_4d4039 : nop
        xor eax, eax
        public_4d403b : nop
        mov edx, dword ptr ds : [eax+0x1B4]
        cmp edx, dword ptr ds : [esi+0x1B4]
        jne public_4d4052
        mov eax, 0xF
        pop esi
        ret 4
        public_4d4052 : nop
        mov eax, 0xE
        pop esi
        ret 4
        public_4d405b : nop
        test eax, 0x420000
        je public_4d406b
        mov eax, 8
        pop esi
        ret 4
        public_4d406b : nop
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4d4096
        mov esi, dword ptr ds : [esi+0x88]
        test esi, esi
        je public_4d4096
        mov cl, byte ptr ds : [esi+0x80]
        test cl, cl
        je public_4d4096
        mov eax, 0xA
        pop esi
        ret 4
        public_4d4096 : nop
        test eax, 0x100000
        je public_4d40a6
        mov eax, 9
        pop esi
        ret 4
        public_4d40a6 : nop
        and eax, 0x200000
        neg eax
        sbb eax, eax
        and eax, 5
        pop esi
        ret 4
        public_4d40b6 : nop
        test al, al
        jns public_4d40c3
        mov eax, 7
        pop esi
        ret 4
        public_4d40c3 : nop
        test al, 3
        je public_4d40d0
        mov eax, 1
        pop esi
        ret 4
        public_4d40d0 : nop
        test eax, 0xC40
        je public_4d40e0
        mov eax, 6
        pop esi
        ret 4
        public_4d40e0 : nop
        test eax, offset public_600de0
        je public_4d40f0
        mov eax, 2
        pop esi
        ret 4
        public_4d40f0 : nop
        test eax, 0x9010
        je public_4d4100
        mov eax, 0xC
        pop esi
        ret 4
        public_4d4100 : nop
        test ah, 0x20
        je public_4d410e
        mov eax, 0xD
        pop esi
        ret 4
        public_4d410e : nop
        and eax, 0x10000000
        neg eax
        sbb eax, eax
        and eax, 0xC
        dec eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4d3fd0)
    }
}

#undef public_4d3fe0
#undef public_4d4039
#undef public_4d403b
#undef public_4d4052
#undef public_4d405b
#undef public_4d406b
#undef public_4d4096
#undef public_4d40a6
#undef public_4d40b6
#undef public_4d40c3
#undef public_4d40d0
#undef public_4d40e0
#undef public_4d40f0
#undef public_4d4100
#undef public_4d410e
