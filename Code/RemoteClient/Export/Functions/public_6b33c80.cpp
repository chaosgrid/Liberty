#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33c80);

#define public_6b33c91 _public_6b33c91
#define public_6b33ca2 _public_6b33ca2

PROC_DECLARE(0x6b33c80, internal_6b33c80, public_6b33c80);
extern "C" NAKED register_t __cdecl internal_6b33c80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6b33ca2
        push esi
        public_6b33c91 : nop
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6b33c91
        pop esi
        public_6b33ca2 : nop
        ret 
        UNREACHABLE_TRAP(0x6b33c80)
    }
}

#undef public_6b33c91
#undef public_6b33ca2
