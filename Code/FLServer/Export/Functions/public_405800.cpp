#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405800);

#define public_405816 _public_405816
#define public_405821 _public_405821
#define public_405825 _public_405825
#define public_405830 _public_405830
#define public_40583c _public_40583c
#define public_405845 _public_405845

PROC_DECLARE(0x405800, internal_405800, public_405800);
extern "C" NAKED register_t __cdecl internal_405800()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_405825
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_405821
        public_405816 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_405816
        public_405821 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_405825 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_40583c
        nop 
        public_405830 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_405830
        public_40583c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_405845
        mov dword ptr ds : [ecx], eax
        public_405845 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x405800)
    }
}

#undef public_405816
#undef public_405821
#undef public_405825
#undef public_405830
#undef public_40583c
#undef public_405845
