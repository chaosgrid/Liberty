#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801da0);

#define public_6801dbb _public_6801dbb
#define public_6801dc1 _public_6801dc1
#define public_6801dc6 _public_6801dc6

PROC_DECLARE(0x6801da0, internal_6801da0, public_6801da0);
extern "C" NAKED register_t __cdecl internal_6801da0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp eax, 0xFFFFFFF6
        je public_6801dc1
        cmp eax, 0xFFFFFFF7
        je public_6801dbb
        cmp eax, 0xFFFFFFF8
        jne public_6801dc6
        mov eax, 0xFFFFFFF9
        ret 
        public_6801dbb : nop
        mov eax, 0xFFFFFFFC
        ret 
        public_6801dc1 : nop
        mov eax, 0xFFFFFFFB
        public_6801dc6 : nop
        ret 
        UNREACHABLE_TRAP(0x6801da0)
    }
}

#undef public_6801dbb
#undef public_6801dc1
#undef public_6801dc6
