#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342a40);

#define public_6342a56 _public_6342a56
#define public_6342a61 _public_6342a61
#define public_6342a65 _public_6342a65
#define public_6342a70 _public_6342a70
#define public_6342a7c _public_6342a7c
#define public_6342a85 _public_6342a85

PROC_DECLARE(0x6342a40, internal_6342a40, public_6342a40);
extern "C" NAKED register_t __cdecl internal_6342a40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6342a65
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6342a61
        public_6342a56 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6342a56
        public_6342a61 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6342a65 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6342a7c
        nop 
        public_6342a70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6342a70
        public_6342a7c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6342a85
        mov dword ptr ds : [ecx], eax
        public_6342a85 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6342a40)
    }
}

#undef public_6342a56
#undef public_6342a61
#undef public_6342a65
#undef public_6342a70
#undef public_6342a7c
#undef public_6342a85
