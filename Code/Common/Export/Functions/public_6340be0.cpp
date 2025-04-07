#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340be0);

#define public_6340bf5 _public_6340bf5
#define public_6340c04 _public_6340c04
#define public_6340c0d _public_6340c0d

PROC_DECLARE(0x6340be0, internal_6340be0, public_6340be0);
extern "C" NAKED register_t __cdecl internal_6340be0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6340c0d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6340bf5 : nop
        test eax, eax
        je public_6340c04
        mov ecx, 8
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6340c04 : nop
        add eax, 0x20
        dec edx
        jne public_6340bf5
        pop edi
        pop esi
        pop ebx
        public_6340c0d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6340be0)
    }
}

#undef public_6340bf5
#undef public_6340c04
#undef public_6340c0d
