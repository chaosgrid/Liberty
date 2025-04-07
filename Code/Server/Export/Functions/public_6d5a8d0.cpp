#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a8d0);

#define public_6d5a8e9 _public_6d5a8e9
#define public_6d5a900 _public_6d5a900
#define public_6d5a90c _public_6d5a90c
#define public_6d5a910 _public_6d5a910
#define public_6d5a920 _public_6d5a920
#define public_6d5a92b _public_6d5a92b

PROC_DECLARE(0x6d5a8d0, internal_6d5a8d0, public_6d5a8d0);
extern "C" NAKED register_t __cdecl internal_6d5a8d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6d5a8e9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6d5a8e9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6d5a8e9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6d5a910
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6d5a90c
        lea esp, ss:[esp]
        public_6d5a900 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6d5a900
        public_6d5a90c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d5a910 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6d5a92b
        lea esp, ss:[esp]
        public_6d5a920 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6d5a920
        public_6d5a92b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5a8d0)
    }
}

#undef public_6d5a8e9
#undef public_6d5a900
#undef public_6d5a90c
#undef public_6d5a910
#undef public_6d5a920
#undef public_6d5a92b
