#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f331d0);

#define public_6f331e9 _public_6f331e9
#define public_6f33200 _public_6f33200
#define public_6f3320c _public_6f3320c
#define public_6f33210 _public_6f33210
#define public_6f33220 _public_6f33220
#define public_6f3322b _public_6f3322b

PROC_DECLARE(0x6f331d0, internal_6f331d0, public_6f331d0);
extern "C" NAKED register_t __cdecl internal_6f331d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x38]
        test dl, dl
        push ebx
        jne public_6f331e9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f331e9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f331e9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x39]
        test bl, bl
        jne public_6f33210
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_6f3320c
        lea esp, ss:[esp]
        public_6f33200 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_6f33200
        public_6f3320c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f33210 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3322b
        lea esp, ss:[esp]
        public_6f33220 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f33220
        public_6f3322b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f331d0)
    }
}

#undef public_6f331e9
#undef public_6f33200
#undef public_6f3320c
#undef public_6f33210
#undef public_6f33220
#undef public_6f3322b
