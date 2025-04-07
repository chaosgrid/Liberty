#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7ee0);

#define public_62a7ef9 _public_62a7ef9
#define public_62a7f10 _public_62a7f10
#define public_62a7f1c _public_62a7f1c
#define public_62a7f20 _public_62a7f20
#define public_62a7f30 _public_62a7f30
#define public_62a7f3b _public_62a7f3b

PROC_DECLARE(0x62a7ee0, internal_62a7ee0, public_62a7ee0);
extern "C" NAKED register_t __cdecl internal_62a7ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x68]
        test dl, dl
        push ebx
        jne public_62a7ef9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_62a7ef9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_62a7ef9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x69]
        test bl, bl
        jne public_62a7f20
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_62a7f1c
        lea esp, ss:[esp]
        public_62a7f10 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_62a7f10
        public_62a7f1c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62a7f20 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_62a7f3b
        lea esp, ss:[esp]
        public_62a7f30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_62a7f30
        public_62a7f3b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a7ee0)
    }
}

#undef public_62a7ef9
#undef public_62a7f10
#undef public_62a7f1c
#undef public_62a7f20
#undef public_62a7f30
#undef public_62a7f3b
