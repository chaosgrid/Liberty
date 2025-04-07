#include "Common-PCH.h"


#define public_62febd9 _public_62febd9
#define public_62febdf _public_62febdf

PROC_DECLARE(0x62febc0, internal_62febc0, public_62febc0);
extern "C" NAKED register_t __cdecl internal_62febc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        push esi
        mov al, 1
        je public_62febdf
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        jne public_62febd9
        mov dword ptr ds : [esi], edx
        pop esi
        ret 
        public_62febd9 : nop
        cmp ecx, edx
        je public_62febdf
        xor al, al
        public_62febdf : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62febc0)
    }
}

#undef public_62febd9
#undef public_62febdf
