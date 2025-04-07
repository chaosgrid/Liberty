#include "Common-PCH.h"


#define public_63265d0 _public_63265d0
#define public_63265d5 _public_63265d5
#define public_63265e4 _public_63265e4

PROC_DECLARE(0x63265c0, internal_63265c0, public_63265c0);
extern "C" NAKED register_t __cdecl internal_63265c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_639907c]
        push esi
        push edi
        mov esi, offset public_64019a8
        mov edi, edi
        public_63265d0 : nop
        mov edi, 8
        public_63265d5 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_63265e4
        push eax
        call ebx
        mov dword ptr ds : [esi], 0
        public_63265e4 : nop
        add esi, 0x7C
        dec edi
        jne public_63265d5
        cmp esi, offset public_64095a8
        jl public_63265d0
        pop edi
        pop esi
        mov byte ptr ds : [public_640a708], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63265c0)
    }
}

#undef public_63265d0
#undef public_63265d5
#undef public_63265e4
