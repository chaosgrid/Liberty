#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e7c0);

#define public_55e7d3 _public_55e7d3
#define public_55e7e2 _public_55e7e2
#define public_55e7ee _public_55e7ee

PROC_DECLARE(0x55e7c0, internal_55e7c0, public_55e7c0);
extern "C" NAKED register_t __cdecl internal_55e7c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_55e7ee
        push esi
        push edi
        public_55e7d3 : nop
        test eax, eax
        je public_55e7e2
        mov ecx, 7
        mov esi, edx
        mov edi, eax
        rep movsd
        public_55e7e2 : nop
        add edx, 0x1C
        add eax, 0x1C
        cmp edx, ebx
        jne public_55e7d3
        pop edi
        pop esi
        public_55e7ee : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x55e7c0)
    }
}

#undef public_55e7d3
#undef public_55e7e2
#undef public_55e7ee
