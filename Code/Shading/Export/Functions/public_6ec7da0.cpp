#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7da0);

#define public_6ec7db9 _public_6ec7db9
#define public_6ec7dd0 _public_6ec7dd0
#define public_6ec7ddc _public_6ec7ddc
#define public_6ec7de0 _public_6ec7de0
#define public_6ec7df0 _public_6ec7df0
#define public_6ec7dfb _public_6ec7dfb

PROC_DECLARE(0x6ec7da0, internal_6ec7da0, public_6ec7da0);
extern "C" NAKED register_t __cdecl internal_6ec7da0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6ec7db9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ec7db9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ec7db9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6ec7de0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ec7ddc
        lea esp, ss:[esp]
        public_6ec7dd0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ec7dd0
        public_6ec7ddc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ec7de0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ec7dfb
        lea esp, ss:[esp]
        public_6ec7df0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ec7df0
        public_6ec7dfb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec7da0)
    }
}

#undef public_6ec7db9
#undef public_6ec7dd0
#undef public_6ec7ddc
#undef public_6ec7de0
#undef public_6ec7df0
#undef public_6ec7dfb
