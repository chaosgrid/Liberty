#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f214e0);

#define public_6f214f3 _public_6f214f3
#define public_6f21502 _public_6f21502
#define public_6f2150e _public_6f2150e

PROC_DECLARE(0x6f214e0, internal_6f214e0, public_6f214e0);
extern "C" NAKED register_t __cdecl internal_6f214e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f2150e
        push esi
        push edi
        public_6f214f3 : nop
        test eax, eax
        je public_6f21502
        mov ecx, 0x1D
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6f21502 : nop
        add edx, 0x74
        add eax, 0x74
        cmp edx, ebx
        jne public_6f214f3
        pop edi
        pop esi
        public_6f2150e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f214e0)
    }
}

#undef public_6f214f3
#undef public_6f21502
#undef public_6f2150e
