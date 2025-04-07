#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaec70);

#define public_6eaec83 _public_6eaec83
#define public_6eaec92 _public_6eaec92
#define public_6eaec9e _public_6eaec9e

PROC_DECLARE(0x6eaec70, internal_6eaec70, public_6eaec70);
extern "C" NAKED register_t __cdecl internal_6eaec70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6eaec9e
        push esi
        push edi
        public_6eaec83 : nop
        test eax, eax
        je public_6eaec92
        mov ecx, 0xB
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6eaec92 : nop
        add edx, 0x2C
        add eax, 0x2C
        cmp edx, ebx
        jne public_6eaec83
        pop edi
        pop esi
        public_6eaec9e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eaec70)
    }
}

#undef public_6eaec83
#undef public_6eaec92
#undef public_6eaec9e
