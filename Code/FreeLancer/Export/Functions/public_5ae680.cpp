#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae680);

#define public_5ae699 _public_5ae699
#define public_5ae6b0 _public_5ae6b0
#define public_5ae6bc _public_5ae6bc
#define public_5ae6c0 _public_5ae6c0
#define public_5ae6d0 _public_5ae6d0
#define public_5ae6db _public_5ae6db

PROC_DECLARE(0x5ae680, internal_5ae680, public_5ae680);
extern "C" NAKED register_t __cdecl internal_5ae680()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x34]
        test dl, dl
        push ebx
        jne public_5ae699
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_5ae699
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_5ae699 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_5ae6c0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_5ae6bc
        lea esp, ss:[esp]
        public_5ae6b0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_5ae6b0
        public_5ae6bc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_5ae6c0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_5ae6db
        lea esp, ss:[esp]
        public_5ae6d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_5ae6d0
        public_5ae6db : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5ae680)
    }
}

#undef public_5ae699
#undef public_5ae6b0
#undef public_5ae6bc
#undef public_5ae6c0
#undef public_5ae6d0
#undef public_5ae6db
