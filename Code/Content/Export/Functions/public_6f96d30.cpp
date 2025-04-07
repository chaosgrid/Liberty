#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f96d30);

#define public_6f96d49 _public_6f96d49
#define public_6f96d60 _public_6f96d60
#define public_6f96d6c _public_6f96d6c
#define public_6f96d70 _public_6f96d70
#define public_6f96d80 _public_6f96d80
#define public_6f96d8b _public_6f96d8b

PROC_DECLARE(0x6f96d30, internal_6f96d30, public_6f96d30);
extern "C" NAKED register_t __cdecl internal_6f96d30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x50]
        test dl, dl
        push ebx
        jne public_6f96d49
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f96d49
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f96d49 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x51]
        test bl, bl
        jne public_6f96d70
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_6f96d6c
        lea esp, ss:[esp]
        public_6f96d60 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_6f96d60
        public_6f96d6c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f96d70 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f96d8b
        lea esp, ss:[esp]
        public_6f96d80 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f96d80
        public_6f96d8b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f96d30)
    }
}

#undef public_6f96d49
#undef public_6f96d60
#undef public_6f96d6c
#undef public_6f96d70
#undef public_6f96d80
#undef public_6f96d8b
