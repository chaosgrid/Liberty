#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3a50);

#define public_4a3a65 _public_4a3a65
#define public_4a3a74 _public_4a3a74
#define public_4a3a7d _public_4a3a7d

PROC_DECLARE(0x4a3a50, internal_4a3a50, public_4a3a50);
extern "C" NAKED register_t __cdecl internal_4a3a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_4a3a7d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_4a3a65 : nop
        test eax, eax
        je public_4a3a74
        mov ecx, 6
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_4a3a74 : nop
        add eax, 0x18
        dec edx
        jne public_4a3a65
        pop edi
        pop esi
        pop ebx
        public_4a3a7d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4a3a50)
    }
}

#undef public_4a3a65
#undef public_4a3a74
#undef public_4a3a7d
