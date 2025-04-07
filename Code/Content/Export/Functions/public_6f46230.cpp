#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46230);

#define public_6f46249 _public_6f46249
#define public_6f46260 _public_6f46260
#define public_6f4626c _public_6f4626c
#define public_6f46270 _public_6f46270
#define public_6f46280 _public_6f46280
#define public_6f4628b _public_6f4628b

PROC_DECLARE(0x6f46230, internal_6f46230, public_6f46230);
extern "C" NAKED register_t __cdecl internal_6f46230()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x4C]
        test dl, dl
        push ebx
        jne public_6f46249
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f46249
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f46249 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x4D]
        test bl, bl
        jne public_6f46270
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_6f4626c
        lea esp, ss:[esp]
        public_6f46260 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_6f46260
        public_6f4626c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46270 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f4628b
        lea esp, ss:[esp]
        public_6f46280 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f46280
        public_6f4628b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46230)
    }
}

#undef public_6f46249
#undef public_6f46260
#undef public_6f4626c
#undef public_6f46270
#undef public_6f46280
#undef public_6f4628b
