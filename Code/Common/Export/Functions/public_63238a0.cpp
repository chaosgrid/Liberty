#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63238a0);

#define public_63238c0 _public_63238c0
#define public_63238ce _public_63238ce
#define public_63238d2 _public_63238d2
#define public_63238e0 _public_63238e0
#define public_63238ec _public_63238ec
#define public_63238f5 _public_63238f5

PROC_DECLARE(0x63238a0, internal_63238a0, public_63238a0);
extern "C" NAKED register_t __cdecl internal_63238a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x9D]
        test bl, bl
        jne public_63238d2
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        jne public_63238ce
        lea esp, ss:[esp]
        public_63238c0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        je public_63238c0
        public_63238ce : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_63238d2 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_63238ec
        lea esp, ss:[esp]
        public_63238e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_63238e0
        public_63238ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_63238f5
        mov dword ptr ds : [ecx], eax
        public_63238f5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63238a0)
    }
}

#undef public_63238c0
#undef public_63238ce
#undef public_63238d2
#undef public_63238e0
#undef public_63238ec
#undef public_63238f5
