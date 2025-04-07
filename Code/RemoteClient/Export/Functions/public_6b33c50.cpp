#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33c50);

#define public_6b33c61 _public_6b33c61
#define public_6b33c70 _public_6b33c70

PROC_DECLARE(0x6b33c50, internal_6b33c50, public_6b33c50);
extern "C" NAKED register_t __cdecl internal_6b33c50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6b33c70
        push esi
        public_6b33c61 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6b33c61
        pop esi
        public_6b33c70 : nop
        ret 
        UNREACHABLE_TRAP(0x6b33c50)
    }
}

#undef public_6b33c61
#undef public_6b33c70
