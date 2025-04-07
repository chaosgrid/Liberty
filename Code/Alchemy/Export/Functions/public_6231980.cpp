#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231980);

#define public_62319ac _public_62319ac
#define public_62319ba _public_62319ba
#define public_62319de _public_62319de
#define public_62319ec _public_62319ec

PROC_DECLARE(0x6231980, internal_6231980, public_6231980);
extern "C" NAKED register_t __cdecl internal_6231980()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, 0xE34C3C55
        jne public_62319ba
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov ecx, dword ptr ds : [eax+0xA0]
        je public_62319ac
        or ecx, 1
        mov dword ptr ds : [eax+0xA0], ecx
        xor eax, eax
        ret 0xC
        public_62319ac : nop
        and ecx, 0xFFFFFFFE
        mov dword ptr ds : [eax+0xA0], ecx
        xor eax, eax
        ret 0xC
        public_62319ba : nop
        cmp ecx, 0x49A6DBE
        jne public_62319ec
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov ecx, dword ptr ds : [eax+0xA0]
        je public_62319de
        or ecx, 2
        mov dword ptr ds : [eax+0xA0], ecx
        xor eax, eax
        ret 0xC
        public_62319de : nop
        and ecx, 0xFFFFFFFD
        mov dword ptr ds : [eax+0xA0], ecx
        xor eax, eax
        ret 0xC
        public_62319ec : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6231980)
    }
}

#undef public_62319ac
#undef public_62319ba
#undef public_62319de
#undef public_62319ec
