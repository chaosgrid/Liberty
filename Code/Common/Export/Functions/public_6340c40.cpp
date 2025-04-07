#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340c40);

#define public_6340c5c _public_6340c5c
#define public_6340c75 _public_6340c75
#define public_6340c84 _public_6340c84
#define public_6340c88 _public_6340c88
#define public_6340c91 _public_6340c91
#define public_6340c9c _public_6340c9c

PROC_DECLARE(0x6340c40, internal_6340c40, public_6340c40);
extern "C" NAKED register_t __cdecl internal_6340c40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xA8]
        test dl, dl
        push ebx
        jne public_6340c5c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6340c5c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6340c5c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xA9]
        test bl, bl
        jne public_6340c88
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xA9]
        test bl, bl
        jne public_6340c84
        public_6340c75 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xA9]
        test bl, bl
        je public_6340c75
        public_6340c84 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6340c88 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6340c9c
        public_6340c91 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6340c91
        public_6340c9c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6340c40)
    }
}

#undef public_6340c5c
#undef public_6340c75
#undef public_6340c84
#undef public_6340c88
#undef public_6340c91
#undef public_6340c9c
