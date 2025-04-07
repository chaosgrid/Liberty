#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807b50);

#define public_6807b61 _public_6807b61
#define public_6807b6f _public_6807b6f
#define public_6807b74 _public_6807b74

PROC_DECLARE(0x6807b50, internal_6807b50, public_6807b50);
extern "C" NAKED register_t __cdecl internal_6807b50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        push esi
        mov eax, edx
        je public_6807b6f
        mov esi, dword ptr ss : [esp+8]
        public_6807b61 : nop
        cmp ecx, esi
        je public_6807b74
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        test ecx, ecx
        jne public_6807b61
        public_6807b6f : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6807b74 : nop
        sub eax, edx
        sar eax, 2
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807b50)
    }
}

#undef public_6807b61
#undef public_6807b6f
#undef public_6807b74
