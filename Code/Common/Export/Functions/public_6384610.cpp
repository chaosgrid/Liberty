#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6384610);

#define public_638465c _public_638465c

PROC_DECLARE(0x6384610, internal_6384610, public_6384610);
extern "C" NAKED register_t __cdecl internal_6384610()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_63f69f4]
        mov eax, 0x834E0B5F
        imul ecx
        add edx, ecx
        sar edx, 0x10
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea eax, ds:[edx+edx*8]
        shl eax, 3
        sub eax, edx
        lea eax, ds:[eax+eax*4]
        shl eax, 1
        sub eax, edx
        shl eax, 2
        push esi
        mov esi, eax
        mov eax, ecx
        cdq 
        mov ecx, 0x1F31D
        idiv ecx
        mov eax, edx
        imul eax, 0x41A7
        sub eax, esi
        test eax, eax
        pop esi
        jg public_638465c
        add eax, 0x7FFFFFFF
        public_638465c : nop
        mov dword ptr ds : [public_63f69f4], eax
        ret 
        UNREACHABLE_TRAP(0x6384610)
    }
}

#undef public_638465c
