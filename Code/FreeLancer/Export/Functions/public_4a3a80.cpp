#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3a80);

#define public_4a3a93 _public_4a3a93
#define public_4a3aaa _public_4a3aaa

PROC_DECLARE(0x4a3a80, internal_4a3a80, public_4a3a80);
extern "C" NAKED register_t __cdecl internal_4a3a80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4a3aaa
        push esi
        push edi
        public_4a3a93 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x18
        mov ecx, 6
        add eax, 0x18
        cmp edx, ebx
        rep movsd
        jne public_4a3a93
        pop edi
        pop esi
        public_4a3aaa : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4a3a80)
    }
}

#undef public_4a3a93
#undef public_4a3aaa
