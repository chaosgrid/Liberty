#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6317300);

#define public_6317316 _public_6317316
#define public_6317321 _public_6317321
#define public_6317325 _public_6317325
#define public_6317330 _public_6317330
#define public_631733c _public_631733c
#define public_6317345 _public_6317345

PROC_DECLARE(0x6317300, internal_6317300, public_6317300);
extern "C" NAKED register_t __cdecl internal_6317300()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x61]
        test bl, bl
        jne public_6317325
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_6317321
        public_6317316 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_6317316
        public_6317321 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6317325 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_631733c
        nop 
        public_6317330 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6317330
        public_631733c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6317345
        mov dword ptr ds : [ecx], eax
        public_6317345 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6317300)
    }
}

#undef public_6317316
#undef public_6317321
#undef public_6317325
#undef public_6317330
#undef public_631733c
#undef public_6317345
