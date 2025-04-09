#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b2b20);

#define public_4b2b35 _public_4b2b35
#define public_4b2b44 _public_4b2b44
#define public_4b2b4d _public_4b2b4d

PROC_DECLARE(0x4b2b20, internal_4b2b20, public_4b2b20);
extern "C" NAKED register_t __cdecl internal_4b2b20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_4b2b4d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_4b2b35 : nop
        test eax, eax
        je public_4b2b44
        mov ecx, 0xB
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_4b2b44 : nop
        add eax, 0x2C
        dec edx
        jne public_4b2b35
        pop edi
        pop esi
        pop ebx
        public_4b2b4d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4b2b20)
    }
}

#undef public_4b2b35
#undef public_4b2b44
#undef public_4b2b4d
