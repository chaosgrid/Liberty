#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beceb0);

#define public_6becec6 _public_6becec6
#define public_6beced1 _public_6beced1
#define public_6beced5 _public_6beced5
#define public_6becee0 _public_6becee0
#define public_6beceec _public_6beceec
#define public_6becef5 _public_6becef5

PROC_DECLARE(0x6beceb0, internal_6beceb0, public_6beceb0);
extern "C" NAKED register_t __cdecl internal_6beceb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6beced5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6beced1
        public_6becec6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6becec6
        public_6beced1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6beced5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6beceec
        nop 
        public_6becee0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6becee0
        public_6beceec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6becef5
        mov dword ptr ds : [ecx], eax
        public_6becef5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6beceb0)
    }
}

#undef public_6becec6
#undef public_6beced1
#undef public_6beced5
#undef public_6becee0
#undef public_6beceec
#undef public_6becef5
