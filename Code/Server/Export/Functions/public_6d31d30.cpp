#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31d30);

#define public_6d31d43 _public_6d31d43
#define public_6d31d52 _public_6d31d52
#define public_6d31d5e _public_6d31d5e

PROC_DECLARE(0x6d31d30, internal_6d31d30, public_6d31d30);
extern "C" NAKED register_t __cdecl internal_6d31d30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6d31d5e
        push esi
        push edi
        public_6d31d43 : nop
        test eax, eax
        je public_6d31d52
        mov ecx, 8
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6d31d52 : nop
        add edx, 0x20
        add eax, 0x20
        cmp edx, ebx
        jne public_6d31d43
        pop edi
        pop esi
        public_6d31d5e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d31d30)
    }
}

#undef public_6d31d43
#undef public_6d31d52
#undef public_6d31d5e
