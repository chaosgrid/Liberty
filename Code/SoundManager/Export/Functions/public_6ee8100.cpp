#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8100);

#define public_6ee8119 _public_6ee8119
#define public_6ee8130 _public_6ee8130
#define public_6ee813c _public_6ee813c
#define public_6ee8140 _public_6ee8140
#define public_6ee8150 _public_6ee8150
#define public_6ee815b _public_6ee815b

PROC_DECLARE(0x6ee8100, internal_6ee8100, public_6ee8100);
extern "C" NAKED register_t __cdecl internal_6ee8100()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6ee8119
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ee8119
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ee8119 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6ee8140
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ee813c
        lea esp, ss:[esp]
        public_6ee8130 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ee8130
        public_6ee813c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ee8140 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ee815b
        lea esp, ss:[esp]
        public_6ee8150 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ee8150
        public_6ee815b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ee8100)
    }
}

#undef public_6ee8119
#undef public_6ee8130
#undef public_6ee813c
#undef public_6ee8140
#undef public_6ee8150
#undef public_6ee815b
