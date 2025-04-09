#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e970);

#define public_46e986 _public_46e986
#define public_46e991 _public_46e991
#define public_46e995 _public_46e995
#define public_46e9a0 _public_46e9a0
#define public_46e9ac _public_46e9ac
#define public_46e9b5 _public_46e9b5

PROC_DECLARE(0x46e970, internal_46e970, public_46e970);
extern "C" NAKED register_t __cdecl internal_46e970()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_46e995
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_46e991
        public_46e986 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_46e986
        public_46e991 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_46e995 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_46e9ac
        nop 
        public_46e9a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_46e9a0
        public_46e9ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_46e9b5
        mov dword ptr ds : [ecx], eax
        public_46e9b5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x46e970)
    }
}

#undef public_46e986
#undef public_46e991
#undef public_46e995
#undef public_46e9a0
#undef public_46e9ac
#undef public_46e9b5
