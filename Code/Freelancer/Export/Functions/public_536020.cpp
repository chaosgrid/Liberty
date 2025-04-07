#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536020);

#define public_536036 _public_536036
#define public_536041 _public_536041
#define public_536045 _public_536045
#define public_536050 _public_536050
#define public_53605c _public_53605c
#define public_536065 _public_536065

PROC_DECLARE(0x536020, internal_536020, public_536020);
extern "C" NAKED register_t __cdecl internal_536020()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_536045
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_536041
        public_536036 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_536036
        public_536041 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_536045 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_53605c
        nop 
        public_536050 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_536050
        public_53605c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_536065
        mov dword ptr ds : [ecx], eax
        public_536065 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x536020)
    }
}

#undef public_536036
#undef public_536041
#undef public_536045
#undef public_536050
#undef public_53605c
#undef public_536065
