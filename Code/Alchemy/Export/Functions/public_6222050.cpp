#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222050);

#define public_6222069 _public_6222069
#define public_622207c _public_622207c
#define public_6222088 _public_6222088
#define public_622208c _public_622208c
#define public_6222095 _public_6222095
#define public_62220a0 _public_62220a0

PROC_DECLARE(0x6222050, internal_6222050, public_6222050);
extern "C" NAKED register_t __cdecl internal_6222050()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        jne public_6222069
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6222069
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6222069 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_622208c
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6222088
        public_622207c : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_622207c
        public_6222088 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_622208c : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_62220a0
        public_6222095 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6222095
        public_62220a0 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6222050)
    }
}

#undef public_6222069
#undef public_622207c
#undef public_6222088
#undef public_622208c
#undef public_6222095
#undef public_62220a0
