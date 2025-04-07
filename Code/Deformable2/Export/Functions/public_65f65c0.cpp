#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f65c0);

#define public_65f65d9 _public_65f65d9
#define public_65f65f0 _public_65f65f0
#define public_65f65fc _public_65f65fc
#define public_65f6600 _public_65f6600
#define public_65f6610 _public_65f6610
#define public_65f661b _public_65f661b

PROC_DECLARE(0x65f65c0, internal_65f65c0, public_65f65c0);
extern "C" NAKED register_t __cdecl internal_65f65c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x18]
        test dl, dl
        push ebx
        jne public_65f65d9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_65f65d9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_65f65d9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_65f6600
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_65f65fc
        lea esp, ss:[esp]
        public_65f65f0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_65f65f0
        public_65f65fc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_65f6600 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_65f661b
        lea esp, ss:[esp]
        public_65f6610 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_65f6610
        public_65f661b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f65c0)
    }
}

#undef public_65f65d9
#undef public_65f65f0
#undef public_65f65fc
#undef public_65f6600
#undef public_65f6610
#undef public_65f661b
