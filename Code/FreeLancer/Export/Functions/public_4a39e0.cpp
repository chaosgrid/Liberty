#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a39e0);

#define public_4a39f5 _public_4a39f5
#define public_4a3a04 _public_4a3a04
#define public_4a3a0d _public_4a3a0d

PROC_DECLARE(0x4a39e0, internal_4a39e0, public_4a39e0);
extern "C" NAKED register_t __cdecl internal_4a39e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_4a3a0d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_4a39f5 : nop
        test eax, eax
        je public_4a3a04
        mov ecx, 0x1F
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_4a3a04 : nop
        add eax, 0x7C
        dec edx
        jne public_4a39f5
        pop edi
        pop esi
        pop ebx
        public_4a3a0d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4a39e0)
    }
}

#undef public_4a39f5
#undef public_4a3a04
#undef public_4a3a0d
