#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3ea40);

#define public_6d3ea55 _public_6d3ea55
#define public_6d3ea64 _public_6d3ea64
#define public_6d3ea6d _public_6d3ea6d

PROC_DECLARE(0x6d3ea40, internal_6d3ea40, public_6d3ea40);
extern "C" NAKED register_t __cdecl internal_6d3ea40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6d3ea6d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6d3ea55 : nop
        test eax, eax
        je public_6d3ea64
        mov ecx, 8
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6d3ea64 : nop
        add eax, 0x20
        dec edx
        jne public_6d3ea55
        pop edi
        pop esi
        pop ebx
        public_6d3ea6d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ea40)
    }
}

#undef public_6d3ea55
#undef public_6d3ea64
#undef public_6d3ea6d
