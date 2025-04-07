#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6f7a0);

#define public_6f6f7b3 _public_6f6f7b3
#define public_6f6f7c2 _public_6f6f7c2
#define public_6f6f7ce _public_6f6f7ce

PROC_DECLARE(0x6f6f7a0, internal_6f6f7a0, public_6f6f7a0);
extern "C" NAKED register_t __cdecl internal_6f6f7a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f6f7ce
        push esi
        push edi
        public_6f6f7b3 : nop
        test eax, eax
        je public_6f6f7c2
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6f6f7c2 : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_6f6f7b3
        pop edi
        pop esi
        public_6f6f7ce : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f6f7a0)
    }
}

#undef public_6f6f7b3
#undef public_6f6f7c2
#undef public_6f6f7ce
