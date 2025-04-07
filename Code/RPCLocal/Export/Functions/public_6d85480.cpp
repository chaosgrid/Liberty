#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85480);

#define public_6d85491 _public_6d85491
#define public_6d854a2 _public_6d854a2

PROC_DECLARE(0x6d85480, internal_6d85480, public_6d85480);
extern "C" NAKED register_t __cdecl internal_6d85480()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d854a2
        push esi
        public_6d85491 : nop
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d85491
        pop esi
        public_6d854a2 : nop
        ret 
        UNREACHABLE_TRAP(0x6d85480)
    }
}

#undef public_6d85491
#undef public_6d854a2
