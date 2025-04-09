#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595150);

#define public_595166 _public_595166
#define public_595171 _public_595171
#define public_595175 _public_595175
#define public_595180 _public_595180
#define public_59518c _public_59518c
#define public_595195 _public_595195

PROC_DECLARE(0x595150, internal_595150, public_595150);
extern "C" NAKED register_t __cdecl internal_595150()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_595175
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_595171
        public_595166 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_595166
        public_595171 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_595175 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_59518c
        nop 
        public_595180 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_595180
        public_59518c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_595195
        mov dword ptr ds : [ecx], eax
        public_595195 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x595150)
    }
}

#undef public_595166
#undef public_595171
#undef public_595175
#undef public_595180
#undef public_59518c
#undef public_595195
