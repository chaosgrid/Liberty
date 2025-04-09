#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3770);

#define public_4f3786 _public_4f3786
#define public_4f3791 _public_4f3791
#define public_4f3795 _public_4f3795
#define public_4f37a0 _public_4f37a0
#define public_4f37ac _public_4f37ac
#define public_4f37b5 _public_4f37b5

PROC_DECLARE(0x4f3770, internal_4f3770, public_4f3770);
extern "C" NAKED register_t __cdecl internal_4f3770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x45]
        test bl, bl
        jne public_4f3795
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_4f3791
        public_4f3786 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_4f3786
        public_4f3791 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4f3795 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4f37ac
        nop 
        public_4f37a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4f37a0
        public_4f37ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4f37b5
        mov dword ptr ds : [ecx], eax
        public_4f37b5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4f3770)
    }
}

#undef public_4f3786
#undef public_4f3791
#undef public_4f3795
#undef public_4f37a0
#undef public_4f37ac
#undef public_4f37b5
