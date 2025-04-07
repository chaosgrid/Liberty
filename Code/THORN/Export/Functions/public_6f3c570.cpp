#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c570);

#define public_6f3c586 _public_6f3c586
#define public_6f3c591 _public_6f3c591
#define public_6f3c595 _public_6f3c595
#define public_6f3c5a0 _public_6f3c5a0
#define public_6f3c5ac _public_6f3c5ac
#define public_6f3c5b5 _public_6f3c5b5

PROC_DECLARE(0x6f3c570, internal_6f3c570, public_6f3c570);
extern "C" NAKED register_t __cdecl internal_6f3c570()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_6f3c595
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6f3c591
        public_6f3c586 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6f3c586
        public_6f3c591 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3c595 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f3c5ac
        nop 
        public_6f3c5a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f3c5a0
        public_6f3c5ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f3c5b5
        mov dword ptr ds : [ecx], eax
        public_6f3c5b5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3c570)
    }
}

#undef public_6f3c586
#undef public_6f3c591
#undef public_6f3c595
#undef public_6f3c5a0
#undef public_6f3c5ac
#undef public_6f3c5b5
