#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6386790);

#define public_63867b5 _public_63867b5
#define public_63867c9 _public_63867c9
#define public_63867da _public_63867da

PROC_DECLARE(0x6386790, internal_6386790, public_6386790);
extern "C" NAKED register_t __cdecl internal_6386790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ds : [ecx+0x50]
        mov eax, 0x80000
        test eax, esi
        je public_63867da
        test dword ptr ds : [edx+0x50], eax
        jne public_63867b5
        mov eax, 1
        pop esi
        ret 
        public_63867b5 : nop
        fld qword ptr ds : [ecx+0x20]
        fcomp qword ptr ds : [edx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_63867c9
        mov eax, 1
        pop esi
        ret 
        public_63867c9 : nop
        fld qword ptr ds : [ecx+0x20]
        fcomp qword ptr ds : [edx+0x20]
        fnstsw ax
        test ah, 0x40
        je public_63867da
        xor eax, eax
        pop esi
        ret 
        public_63867da : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6386790)
    }
}

#undef public_63867b5
#undef public_63867c9
#undef public_63867da
