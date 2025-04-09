#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52afa0);

#define public_52afb6 _public_52afb6
#define public_52afc1 _public_52afc1
#define public_52afc5 _public_52afc5
#define public_52afd0 _public_52afd0
#define public_52afdc _public_52afdc
#define public_52afe5 _public_52afe5

PROC_DECLARE(0x52afa0, internal_52afa0, public_52afa0);
extern "C" NAKED register_t __cdecl internal_52afa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_52afc5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_52afc1
        public_52afb6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_52afb6
        public_52afc1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_52afc5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_52afdc
        nop 
        public_52afd0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_52afd0
        public_52afdc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_52afe5
        mov dword ptr ds : [ecx], eax
        public_52afe5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x52afa0)
    }
}

#undef public_52afb6
#undef public_52afc1
#undef public_52afc5
#undef public_52afd0
#undef public_52afdc
#undef public_52afe5
