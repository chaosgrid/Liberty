#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e30);

#define public_6f28e43 _public_6f28e43
#define public_6f28e52 _public_6f28e52
#define public_6f28e5e _public_6f28e5e

PROC_DECLARE(0x6f28e30, internal_6f28e30, public_6f28e30);
extern "C" NAKED register_t __cdecl internal_6f28e30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f28e5e
        push esi
        push edi
        public_6f28e43 : nop
        test eax, eax
        je public_6f28e52
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6f28e52 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ebx
        jne public_6f28e43
        pop edi
        pop esi
        public_6f28e5e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f28e30)
    }
}

#undef public_6f28e43
#undef public_6f28e52
#undef public_6f28e5e
