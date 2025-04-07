#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37280);

#define public_6f37296 _public_6f37296
#define public_6f372a1 _public_6f372a1
#define public_6f372a5 _public_6f372a5
#define public_6f372b0 _public_6f372b0
#define public_6f372bc _public_6f372bc
#define public_6f372c5 _public_6f372c5

PROC_DECLARE(0x6f37280, internal_6f37280, public_6f37280);
extern "C" NAKED register_t __cdecl internal_6f37280()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6f372a5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f372a1
        public_6f37296 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f37296
        public_6f372a1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f372a5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f372bc
        nop 
        public_6f372b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f372b0
        public_6f372bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f372c5
        mov dword ptr ds : [ecx], eax
        public_6f372c5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f37280)
    }
}

#undef public_6f37296
#undef public_6f372a1
#undef public_6f372a5
#undef public_6f372b0
#undef public_6f372bc
#undef public_6f372c5
