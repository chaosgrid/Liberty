#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);

#define public_6c304b6 _public_6c304b6
#define public_6c304c1 _public_6c304c1
#define public_6c304c5 _public_6c304c5
#define public_6c304d0 _public_6c304d0
#define public_6c304dc _public_6c304dc
#define public_6c304e5 _public_6c304e5

PROC_DECLARE(0x6c304a0, internal_6c304a0, public_6c304a0);
extern "C" NAKED register_t __cdecl internal_6c304a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6c304c5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6c304c1
        public_6c304b6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6c304b6
        public_6c304c1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6c304c5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6c304dc
        nop 
        public_6c304d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6c304d0
        public_6c304dc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6c304e5
        mov dword ptr ds : [ecx], eax
        public_6c304e5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c304a0)
    }
}

#undef public_6c304b6
#undef public_6c304c1
#undef public_6c304c5
#undef public_6c304d0
#undef public_6c304dc
#undef public_6c304e5
