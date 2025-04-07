#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d407e0);

#define public_6d407f1 _public_6d407f1
#define public_6d40800 _public_6d40800

PROC_DECLARE(0x6d407e0, internal_6d407e0, public_6d407e0);
extern "C" NAKED register_t __cdecl internal_6d407e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d40800
        push esi
        public_6d407f1 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6d407f1
        pop esi
        public_6d40800 : nop
        ret 
        UNREACHABLE_TRAP(0x6d407e0)
    }
}

#undef public_6d407f1
#undef public_6d40800
