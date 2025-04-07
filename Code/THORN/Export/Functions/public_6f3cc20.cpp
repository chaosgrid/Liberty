#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cc20);

#define public_6f3cc36 _public_6f3cc36
#define public_6f3cc41 _public_6f3cc41
#define public_6f3cc45 _public_6f3cc45
#define public_6f3cc50 _public_6f3cc50
#define public_6f3cc5c _public_6f3cc5c
#define public_6f3cc65 _public_6f3cc65

PROC_DECLARE(0x6f3cc20, internal_6f3cc20, public_6f3cc20);
extern "C" NAKED register_t __cdecl internal_6f3cc20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f3cc45
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f3cc41
        public_6f3cc36 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f3cc36
        public_6f3cc41 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3cc45 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f3cc5c
        nop 
        public_6f3cc50 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f3cc50
        public_6f3cc5c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f3cc65
        mov dword ptr ds : [ecx], eax
        public_6f3cc65 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3cc20)
    }
}

#undef public_6f3cc36
#undef public_6f3cc41
#undef public_6f3cc45
#undef public_6f3cc50
#undef public_6f3cc5c
#undef public_6f3cc65
