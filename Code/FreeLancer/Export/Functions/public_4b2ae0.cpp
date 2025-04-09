#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b2ae0);

#define public_4b2af3 _public_4b2af3
#define public_4b2b02 _public_4b2b02
#define public_4b2b0e _public_4b2b0e

PROC_DECLARE(0x4b2ae0, internal_4b2ae0, public_4b2ae0);
extern "C" NAKED register_t __cdecl internal_4b2ae0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4b2b0e
        push esi
        push edi
        public_4b2af3 : nop
        test eax, eax
        je public_4b2b02
        mov ecx, 0xB
        mov esi, edx
        mov edi, eax
        rep movsd
        public_4b2b02 : nop
        add edx, 0x2C
        add eax, 0x2C
        cmp edx, ebx
        jne public_4b2af3
        pop edi
        pop esi
        public_4b2b0e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4b2ae0)
    }
}

#undef public_4b2af3
#undef public_4b2b02
#undef public_4b2b0e
