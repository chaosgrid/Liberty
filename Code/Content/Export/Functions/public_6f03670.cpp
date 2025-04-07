#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);

#define public_6f03686 _public_6f03686
#define public_6f03691 _public_6f03691
#define public_6f03695 _public_6f03695
#define public_6f036a0 _public_6f036a0
#define public_6f036ac _public_6f036ac
#define public_6f036b5 _public_6f036b5

PROC_DECLARE(0x6f03670, internal_6f03670, public_6f03670);
extern "C" NAKED register_t __cdecl internal_6f03670()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6f03695
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f03691
        public_6f03686 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f03686
        public_6f03691 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f03695 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f036ac
        nop 
        public_6f036a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f036a0
        public_6f036ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f036b5
        mov dword ptr ds : [ecx], eax
        public_6f036b5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f03670)
    }
}

#undef public_6f03686
#undef public_6f03691
#undef public_6f03695
#undef public_6f036a0
#undef public_6f036ac
#undef public_6f036b5
