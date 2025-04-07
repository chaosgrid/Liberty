#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202e40);

#define public_6202e56 _public_6202e56
#define public_6202e61 _public_6202e61
#define public_6202e65 _public_6202e65
#define public_6202e6f _public_6202e6f
#define public_6202e7b _public_6202e7b
#define public_6202e84 _public_6202e84

PROC_DECLARE(0x6202e40, internal_6202e40, public_6202e40);
extern "C" NAKED register_t __cdecl internal_6202e40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6202e65
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6202e61
        public_6202e56 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6202e56
        public_6202e61 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6202e65 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6202e7b
        public_6202e6f : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6202e6f
        public_6202e7b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6202e84
        mov dword ptr ds : [ecx], eax
        public_6202e84 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6202e40)
    }
}

#undef public_6202e56
#undef public_6202e61
#undef public_6202e65
#undef public_6202e6f
#undef public_6202e7b
#undef public_6202e84
