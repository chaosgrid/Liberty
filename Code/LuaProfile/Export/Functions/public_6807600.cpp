#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807600);

#define public_6807615 _public_6807615
#define public_6807621 _public_6807621
#define public_6807624 _public_6807624

PROC_DECLARE(0x6807600, internal_6807600, public_6807600);
extern "C" NAKED register_t __cdecl internal_6807600()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x14]
        dec eax
        js public_6807621
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ds:[ecx+eax*4+0x124]
        public_6807615 : nop
        cmp edx, dword ptr ds : [ecx]
        je public_6807624
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6807615
        public_6807621 : nop
        or eax, 0xFFFFFFFF
        public_6807624 : nop
        ret 
        UNREACHABLE_TRAP(0x6807600)
    }
}

#undef public_6807615
#undef public_6807621
#undef public_6807624
