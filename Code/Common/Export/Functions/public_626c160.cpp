#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c160);

#define public_626c171 _public_626c171
#define public_626c182 _public_626c182

PROC_DECLARE(0x626c160, internal_626c160, public_626c160);
extern "C" NAKED register_t __cdecl internal_626c160()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_626c182
        push esi
        public_626c171 : nop
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_626c171
        pop esi
        public_626c182 : nop
        ret 
        UNREACHABLE_TRAP(0x626c160)
    }
}

#undef public_626c171
#undef public_626c182
