#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da3540);

#define public_6da3556 _public_6da3556
#define public_6da3561 _public_6da3561
#define public_6da3565 _public_6da3565
#define public_6da3570 _public_6da3570
#define public_6da357c _public_6da357c
#define public_6da3585 _public_6da3585

PROC_DECLARE(0x6da3540, internal_6da3540, public_6da3540);
extern "C" NAKED register_t __cdecl internal_6da3540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6da3565
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6da3561
        public_6da3556 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6da3556
        public_6da3561 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6da3565 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6da357c
        nop 
        public_6da3570 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6da3570
        public_6da357c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6da3585
        mov dword ptr ds : [ecx], eax
        public_6da3585 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6da3540)
    }
}

#undef public_6da3556
#undef public_6da3561
#undef public_6da3565
#undef public_6da3570
#undef public_6da357c
#undef public_6da3585
