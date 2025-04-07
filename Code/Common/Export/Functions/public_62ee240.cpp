#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ee240);

#define public_62ee250 _public_62ee250
#define public_62ee254 _public_62ee254
#define public_62ee25d _public_62ee25d
#define public_62ee278 _public_62ee278

PROC_DECLARE(0x62ee240, internal_62ee240, public_62ee240);
extern "C" NAKED register_t __cdecl internal_62ee240()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor eax, eax
        mov esi, offset public_63a0818
        lea ebx, ds:[ebx]
        public_62ee250 : nop
        mov bl, 1
        xor edx, edx
        public_62ee254 : nop
        mov edi, dword ptr ds : [ecx+edx*4]
        cmp edi, dword ptr ds : [esi]
        jle public_62ee25d
        xor bl, bl
        public_62ee25d : nop
        inc edx
        add esi, 4
        cmp edx, 3
        jl public_62ee254
        test bl, bl
        jne public_62ee278
        inc eax
        cmp esi, offset public_63a083c
        jl public_62ee250
        mov eax, 3
        public_62ee278 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62ee240)
    }
}

#undef public_62ee250
#undef public_62ee254
#undef public_62ee25d
#undef public_62ee278
