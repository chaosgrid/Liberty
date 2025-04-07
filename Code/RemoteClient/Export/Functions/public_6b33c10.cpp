#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33c10);

#define public_6b33c21 _public_6b33c21
#define public_6b33c29 _public_6b33c29
#define public_6b33c34 _public_6b33c34

PROC_DECLARE(0x6b33c10, internal_6b33c10, public_6b33c10);
extern "C" NAKED register_t __cdecl internal_6b33c10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6b33c34
        push esi
        public_6b33c21 : nop
        test eax, eax
        je public_6b33c29
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6b33c29 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6b33c21
        pop esi
        public_6b33c34 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6b33c10)
    }
}

#undef public_6b33c21
#undef public_6b33c29
#undef public_6b33c34
