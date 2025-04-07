#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46640);

#define public_6f46656 _public_6f46656
#define public_6f46661 _public_6f46661
#define public_6f46665 _public_6f46665
#define public_6f46670 _public_6f46670
#define public_6f4667c _public_6f4667c
#define public_6f46685 _public_6f46685

PROC_DECLARE(0x6f46640, internal_6f46640, public_6f46640);
extern "C" NAKED register_t __cdecl internal_6f46640()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6f46665
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f46661
        public_6f46656 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f46656
        public_6f46661 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46665 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4667c
        nop 
        public_6f46670 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46670
        public_6f4667c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46685
        mov dword ptr ds : [ecx], eax
        public_6f46685 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46640)
    }
}

#undef public_6f46656
#undef public_6f46661
#undef public_6f46665
#undef public_6f46670
#undef public_6f4667c
#undef public_6f46685
