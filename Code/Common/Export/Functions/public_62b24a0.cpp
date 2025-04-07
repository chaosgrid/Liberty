#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b24a0);

#define public_62b24b3 _public_62b24b3
#define public_62b24c4 _public_62b24c4
#define public_62b24cb _public_62b24cb

PROC_DECLARE(0x62b24a0, internal_62b24a0, public_62b24a0);
extern "C" NAKED register_t __cdecl internal_62b24a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x208]
        push esi
        mov esi, dword ptr ds : [ecx+0x20C]
        xor eax, eax
        cmp edx, esi
        je public_62b24cb
        public_62b24b3 : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_62b24c4
        add ecx, 0xFFFFFF64
        test ecx, ecx
        je public_62b24c4
        inc eax
        public_62b24c4 : nop
        add edx, 8
        cmp edx, esi
        jne public_62b24b3
        public_62b24cb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b24a0)
    }
}

#undef public_62b24b3
#undef public_62b24c4
#undef public_62b24cb
