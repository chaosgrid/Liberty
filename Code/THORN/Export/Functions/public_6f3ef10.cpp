#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ef10);

#define public_6f3ef29 _public_6f3ef29
#define public_6f3ef40 _public_6f3ef40
#define public_6f3ef4c _public_6f3ef4c
#define public_6f3ef50 _public_6f3ef50
#define public_6f3ef60 _public_6f3ef60
#define public_6f3ef6b _public_6f3ef6b

PROC_DECLARE(0x6f3ef10, internal_6f3ef10, public_6f3ef10);
extern "C" NAKED register_t __cdecl internal_6f3ef10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6f3ef29
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f3ef29
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f3ef29 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f3ef50
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f3ef4c
        lea esp, ss:[esp]
        public_6f3ef40 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f3ef40
        public_6f3ef4c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3ef50 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3ef6b
        lea esp, ss:[esp]
        public_6f3ef60 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f3ef60
        public_6f3ef6b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3ef10)
    }
}

#undef public_6f3ef29
#undef public_6f3ef40
#undef public_6f3ef4c
#undef public_6f3ef50
#undef public_6f3ef60
#undef public_6f3ef6b
