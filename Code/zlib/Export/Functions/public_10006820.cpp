#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006820);
CLANG_FORWARD_PROC_SYMBOL(public_1000a482);

#define public_10006838 _public_10006838
#define public_10006844 _public_10006844
#define public_1000684e _public_1000684e
#define public_10006868 _public_10006868

PROC_DECLARE(0x10006820, internal_10006820, public_10006820);
extern "C" NAKED register_t __cdecl internal_10006820()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, edx
        push esi
        and al, 3
        xor esi, esi
        xor ecx, ecx
        cmp al, 1
        jne public_10006838
        mov ecx, offset public_1000b5d8
        jmp public_1000684e
        public_10006838 : nop
        test dl, 4
        je public_10006844
        mov ecx, offset public_1000b5d4
        jmp public_1000684e
        public_10006844 : nop
        test dl, 8
        je public_1000684e
        mov ecx, offset public_1000b5d0
        public_1000684e : nop
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        je public_10006868
        test ecx, ecx
        je public_10006868
        push ecx
        push edx
        call public_1000a482
        add esp, 8
        pop esi
        ret 0xC
        public_10006868 : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x10006820)
    }
}

#undef public_10006838
#undef public_10006844
#undef public_1000684e
#undef public_10006868
