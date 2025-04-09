#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436a90);

#define public_436aa6 _public_436aa6
#define public_436ab1 _public_436ab1
#define public_436ab5 _public_436ab5
#define public_436ac0 _public_436ac0
#define public_436acc _public_436acc
#define public_436ad5 _public_436ad5

PROC_DECLARE(0x436a90, internal_436a90, public_436a90);
extern "C" NAKED register_t __cdecl internal_436a90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_436ab5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_436ab1
        public_436aa6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_436aa6
        public_436ab1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_436ab5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_436acc
        nop 
        public_436ac0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_436ac0
        public_436acc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_436ad5
        mov dword ptr ds : [ecx], eax
        public_436ad5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x436a90)
    }
}

#undef public_436aa6
#undef public_436ab1
#undef public_436ab5
#undef public_436ac0
#undef public_436acc
#undef public_436ad5
