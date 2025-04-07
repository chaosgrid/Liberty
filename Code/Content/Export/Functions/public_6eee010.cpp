#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee010);

#define public_6eee023 _public_6eee023
#define public_6eee032 _public_6eee032
#define public_6eee03e _public_6eee03e

PROC_DECLARE(0x6eee010, internal_6eee010, public_6eee010);
extern "C" NAKED register_t __cdecl internal_6eee010()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6eee03e
        push esi
        push edi
        public_6eee023 : nop
        test eax, eax
        je public_6eee032
        mov ecx, 6
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6eee032 : nop
        add edx, 0x18
        add eax, 0x18
        cmp edx, ebx
        jne public_6eee023
        pop edi
        pop esi
        public_6eee03e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eee010)
    }
}

#undef public_6eee023
#undef public_6eee032
#undef public_6eee03e
