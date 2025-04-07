#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1490);

#define public_6eb14ac _public_6eb14ac
#define public_6eb14c5 _public_6eb14c5
#define public_6eb14d4 _public_6eb14d4
#define public_6eb14d8 _public_6eb14d8
#define public_6eb14e1 _public_6eb14e1
#define public_6eb14ec _public_6eb14ec

PROC_DECLARE(0x6eb1490, internal_6eb1490, public_6eb1490);
extern "C" NAKED register_t __cdecl internal_6eb1490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xC4]
        test dl, dl
        push ebx
        jne public_6eb14ac
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6eb14ac
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6eb14ac : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xC5]
        test bl, bl
        jne public_6eb14d8
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        jne public_6eb14d4
        public_6eb14c5 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        je public_6eb14c5
        public_6eb14d4 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6eb14d8 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6eb14ec
        public_6eb14e1 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6eb14e1
        public_6eb14ec : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb1490)
    }
}

#undef public_6eb14ac
#undef public_6eb14c5
#undef public_6eb14d4
#undef public_6eb14d8
#undef public_6eb14e1
#undef public_6eb14ec
