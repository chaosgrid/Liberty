#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f660);

#define public_6f3f671 _public_6f3f671
#define public_6f3f680 _public_6f3f680

PROC_DECLARE(0x6f3f660, internal_6f3f660, public_6f3f660);
extern "C" NAKED register_t __cdecl internal_6f3f660()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f3f680
        push esi
        public_6f3f671 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f3f671
        pop esi
        public_6f3f680 : nop
        ret 
        UNREACHABLE_TRAP(0x6f3f660)
    }
}

#undef public_6f3f671
#undef public_6f3f680
