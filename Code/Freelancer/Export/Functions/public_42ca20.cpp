#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ca20);

#define public_42ca39 _public_42ca39
#define public_42ca50 _public_42ca50
#define public_42ca5c _public_42ca5c
#define public_42ca60 _public_42ca60
#define public_42ca70 _public_42ca70
#define public_42ca7b _public_42ca7b

PROC_DECLARE(0x42ca20, internal_42ca20, public_42ca20);
extern "C" NAKED register_t __cdecl internal_42ca20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x38]
        test dl, dl
        push ebx
        jne public_42ca39
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_42ca39
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_42ca39 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x39]
        test bl, bl
        jne public_42ca60
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_42ca5c
        lea esp, ss:[esp]
        public_42ca50 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_42ca50
        public_42ca5c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_42ca60 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_42ca7b
        lea esp, ss:[esp]
        public_42ca70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_42ca70
        public_42ca7b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x42ca20)
    }
}

#undef public_42ca39
#undef public_42ca50
#undef public_42ca5c
#undef public_42ca60
#undef public_42ca70
#undef public_42ca7b
