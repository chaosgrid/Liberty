#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6f7e0);

#define public_6f6f7f5 _public_6f6f7f5
#define public_6f6f804 _public_6f6f804
#define public_6f6f80d _public_6f6f80d

PROC_DECLARE(0x6f6f7e0, internal_6f6f7e0, public_6f6f7e0);
extern "C" NAKED register_t __cdecl internal_6f6f7e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f6f80d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6f6f7f5 : nop
        test eax, eax
        je public_6f6f804
        mov ecx, 5
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6f6f804 : nop
        add eax, 0x14
        dec edx
        jne public_6f6f7f5
        pop edi
        pop esi
        pop ebx
        public_6f6f80d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f6f7e0)
    }
}

#undef public_6f6f7f5
#undef public_6f6f804
#undef public_6f6f80d
