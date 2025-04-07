#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);

#define public_6ce5766 _public_6ce5766
#define public_6ce5771 _public_6ce5771
#define public_6ce5775 _public_6ce5775
#define public_6ce5780 _public_6ce5780
#define public_6ce578c _public_6ce578c
#define public_6ce5795 _public_6ce5795

PROC_DECLARE(0x6ce5750, internal_6ce5750, public_6ce5750);
extern "C" NAKED register_t __cdecl internal_6ce5750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6ce5775
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6ce5771
        public_6ce5766 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6ce5766
        public_6ce5771 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ce5775 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ce578c
        nop 
        public_6ce5780 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ce5780
        public_6ce578c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ce5795
        mov dword ptr ds : [ecx], eax
        public_6ce5795 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ce5750)
    }
}

#undef public_6ce5766
#undef public_6ce5771
#undef public_6ce5775
#undef public_6ce5780
#undef public_6ce578c
#undef public_6ce5795
