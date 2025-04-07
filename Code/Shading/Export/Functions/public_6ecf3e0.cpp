#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf3e0);

#define public_6ecf3f1 _public_6ecf3f1
#define public_6ecf400 _public_6ecf400

PROC_DECLARE(0x6ecf3e0, internal_6ecf3e0, public_6ecf3e0);
extern "C" NAKED register_t __cdecl internal_6ecf3e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6ecf400
        push esi
        public_6ecf3f1 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6ecf3f1
        pop esi
        public_6ecf400 : nop
        ret 
        UNREACHABLE_TRAP(0x6ecf3e0)
    }
}

#undef public_6ecf3f1
#undef public_6ecf400
