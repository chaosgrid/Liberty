#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fb00);

#define public_57fb16 _public_57fb16
#define public_57fb21 _public_57fb21
#define public_57fb25 _public_57fb25
#define public_57fb30 _public_57fb30
#define public_57fb3c _public_57fb3c
#define public_57fb45 _public_57fb45

PROC_DECLARE(0x57fb00, internal_57fb00, public_57fb00);
extern "C" NAKED register_t __cdecl internal_57fb00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xF]
        test bl, bl
        jne public_57fb25
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xF]
        test bl, bl
        jne public_57fb21
        public_57fb16 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xF]
        test bl, bl
        je public_57fb16
        public_57fb21 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_57fb25 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_57fb3c
        nop 
        public_57fb30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_57fb30
        public_57fb3c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_57fb45
        mov dword ptr ds : [ecx], eax
        public_57fb45 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x57fb00)
    }
}

#undef public_57fb16
#undef public_57fb21
#undef public_57fb25
#undef public_57fb30
#undef public_57fb3c
#undef public_57fb45
