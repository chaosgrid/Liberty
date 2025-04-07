#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05660);

#define public_6f05673 _public_6f05673
#define public_6f05682 _public_6f05682
#define public_6f0568e _public_6f0568e

PROC_DECLARE(0x6f05660, internal_6f05660, public_6f05660);
extern "C" NAKED register_t __cdecl internal_6f05660()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f0568e
        push esi
        push edi
        public_6f05673 : nop
        test eax, eax
        je public_6f05682
        mov ecx, 7
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6f05682 : nop
        add edx, 0x1C
        add eax, 0x1C
        cmp edx, ebx
        jne public_6f05673
        pop edi
        pop esi
        public_6f0568e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f05660)
    }
}

#undef public_6f05673
#undef public_6f05682
#undef public_6f0568e
