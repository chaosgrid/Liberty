#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332110);

#define public_6332125 _public_6332125
#define public_6332134 _public_6332134
#define public_633213d _public_633213d

PROC_DECLARE(0x6332110, internal_6332110, public_6332110);
extern "C" NAKED register_t __cdecl internal_6332110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_633213d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6332125 : nop
        test eax, eax
        je public_6332134
        mov ecx, 5
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6332134 : nop
        add eax, 0x14
        dec edx
        jne public_6332125
        pop edi
        pop esi
        pop ebx
        public_633213d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6332110)
    }
}

#undef public_6332125
#undef public_6332134
#undef public_633213d
