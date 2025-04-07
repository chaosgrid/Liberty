#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53a50);

#define public_6f53a61 _public_6f53a61
#define public_6f53a6f _public_6f53a6f
#define public_6f53a74 _public_6f53a74

PROC_DECLARE(0x6f53a50, internal_6f53a50, public_6f53a50);
extern "C" NAKED register_t __cdecl internal_6f53a50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        push esi
        mov eax, edx
        je public_6f53a6f
        mov esi, dword ptr ss : [esp+8]
        public_6f53a61 : nop
        cmp ecx, esi
        je public_6f53a74
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        test ecx, ecx
        jne public_6f53a61
        public_6f53a6f : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6f53a74 : nop
        sub eax, edx
        sar eax, 2
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53a50)
    }
}

#undef public_6f53a61
#undef public_6f53a6f
#undef public_6f53a74
