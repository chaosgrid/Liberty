#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd7e0);

#define public_66fd7f6 _public_66fd7f6
#define public_66fd801 _public_66fd801
#define public_66fd805 _public_66fd805
#define public_66fd810 _public_66fd810
#define public_66fd81c _public_66fd81c
#define public_66fd825 _public_66fd825

PROC_DECLARE(0x66fd7e0, internal_66fd7e0, public_66fd7e0);
extern "C" NAKED register_t __cdecl internal_66fd7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_66fd805
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_66fd801
        public_66fd7f6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_66fd7f6
        public_66fd801 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_66fd805 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_66fd81c
        nop 
        public_66fd810 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_66fd810
        public_66fd81c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_66fd825
        mov dword ptr ds : [ecx], eax
        public_66fd825 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66fd7e0)
    }
}

#undef public_66fd7f6
#undef public_66fd801
#undef public_66fd805
#undef public_66fd810
#undef public_66fd81c
#undef public_66fd825
