#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4303a0);

#define public_4303b6 _public_4303b6
#define public_4303c1 _public_4303c1
#define public_4303c5 _public_4303c5
#define public_4303d0 _public_4303d0
#define public_4303dc _public_4303dc
#define public_4303e5 _public_4303e5

PROC_DECLARE(0x4303a0, internal_4303a0, public_4303a0);
extern "C" NAKED register_t __cdecl internal_4303a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_4303c5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_4303c1
        public_4303b6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_4303b6
        public_4303c1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4303c5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4303dc
        nop 
        public_4303d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4303d0
        public_4303dc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4303e5
        mov dword ptr ds : [ecx], eax
        public_4303e5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4303a0)
    }
}

#undef public_4303b6
#undef public_4303c1
#undef public_4303c5
#undef public_4303d0
#undef public_4303dc
#undef public_4303e5
