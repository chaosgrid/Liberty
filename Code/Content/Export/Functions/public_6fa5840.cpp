#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa5840);

#define public_6fa5853 _public_6fa5853
#define public_6fa5862 _public_6fa5862
#define public_6fa586e _public_6fa586e

PROC_DECLARE(0x6fa5840, internal_6fa5840, public_6fa5840);
extern "C" NAKED register_t __cdecl internal_6fa5840()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6fa586e
        push esi
        push edi
        public_6fa5853 : nop
        test eax, eax
        je public_6fa5862
        mov ecx, 0x12
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6fa5862 : nop
        add edx, 0x48
        add eax, 0x48
        cmp edx, ebx
        jne public_6fa5853
        pop edi
        pop esi
        public_6fa586e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa5840)
    }
}

#undef public_6fa5853
#undef public_6fa5862
#undef public_6fa586e
