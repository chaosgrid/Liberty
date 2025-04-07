#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408550);

#define public_408566 _public_408566
#define public_408571 _public_408571
#define public_408575 _public_408575
#define public_408580 _public_408580
#define public_40858c _public_40858c
#define public_408595 _public_408595

PROC_DECLARE(0x408550, internal_408550, public_408550);
extern "C" NAKED register_t __cdecl internal_408550()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_408575
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_408571
        public_408566 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_408566
        public_408571 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_408575 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_40858c
        nop 
        public_408580 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_408580
        public_40858c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_408595
        mov dword ptr ds : [ecx], eax
        public_408595 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x408550)
    }
}

#undef public_408566
#undef public_408571
#undef public_408575
#undef public_408580
#undef public_40858c
#undef public_408595
