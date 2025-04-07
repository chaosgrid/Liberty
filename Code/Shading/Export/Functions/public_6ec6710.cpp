#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6710);

#define public_6ec6726 _public_6ec6726
#define public_6ec6731 _public_6ec6731
#define public_6ec6735 _public_6ec6735
#define public_6ec6740 _public_6ec6740
#define public_6ec674c _public_6ec674c
#define public_6ec6755 _public_6ec6755

PROC_DECLARE(0x6ec6710, internal_6ec6710, public_6ec6710);
extern "C" NAKED register_t __cdecl internal_6ec6710()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6ec6735
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6ec6731
        public_6ec6726 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6ec6726
        public_6ec6731 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ec6735 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ec674c
        nop 
        public_6ec6740 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ec6740
        public_6ec674c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ec6755
        mov dword ptr ds : [ecx], eax
        public_6ec6755 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec6710)
    }
}

#undef public_6ec6726
#undef public_6ec6731
#undef public_6ec6735
#undef public_6ec6740
#undef public_6ec674c
#undef public_6ec6755
