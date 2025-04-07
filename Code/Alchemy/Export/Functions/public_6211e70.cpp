#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211e70);

#define public_6211e96 _public_6211e96
#define public_6211ea1 _public_6211ea1
#define public_6211ebf _public_6211ebf
#define public_6211eca _public_6211eca
#define public_6211ee8 _public_6211ee8
#define public_6211ef3 _public_6211ef3

PROC_DECLARE(0x6211e70, internal_6211e70, public_6211e70);
extern "C" NAKED register_t __cdecl internal_6211e70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, 0xE2F60EEB
        jne public_6211ea1
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov ecx, dword ptr ds : [eax+0x60]
        je public_6211e96
        or ecx, 8
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6211e96 : nop
        and ecx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6211ea1 : nop
        cmp ecx, 0xF3D52EE4
        jne public_6211eca
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov ecx, dword ptr ds : [eax+0x60]
        je public_6211ebf
        or ch, 0x10
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6211ebf : nop
        and ch, 0xEF
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6211eca : nop
        cmp ecx, 0xE8DC7F5E
        jne public_6211ef3
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov ecx, dword ptr ds : [eax+0x60]
        je public_6211ee8
        or ch, 0x20
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6211ee8 : nop
        and ch, 0xDF
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6211ef3 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6211e70)
    }
}

#undef public_6211e96
#undef public_6211ea1
#undef public_6211ebf
#undef public_6211eca
#undef public_6211ee8
#undef public_6211ef3
