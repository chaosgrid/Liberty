#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f1a0);

#define public_6f3f1b9 _public_6f3f1b9
#define public_6f3f1d0 _public_6f3f1d0
#define public_6f3f1dc _public_6f3f1dc
#define public_6f3f1e0 _public_6f3f1e0
#define public_6f3f1f0 _public_6f3f1f0
#define public_6f3f1fb _public_6f3f1fb

PROC_DECLARE(0x6f3f1a0, internal_6f3f1a0, public_6f3f1a0);
extern "C" NAKED register_t __cdecl internal_6f3f1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x10]
        test dl, dl
        push ebx
        jne public_6f3f1b9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f3f1b9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f3f1b9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_6f3f1e0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6f3f1dc
        lea esp, ss:[esp]
        public_6f3f1d0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6f3f1d0
        public_6f3f1dc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3f1e0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3f1fb
        lea esp, ss:[esp]
        public_6f3f1f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f3f1f0
        public_6f3f1fb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3f1a0)
    }
}

#undef public_6f3f1b9
#undef public_6f3f1d0
#undef public_6f3f1dc
#undef public_6f3f1e0
#undef public_6f3f1f0
#undef public_6f3f1fb
