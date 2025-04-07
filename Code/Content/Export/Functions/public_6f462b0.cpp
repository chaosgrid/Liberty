#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f462b0);

#define public_6f462c9 _public_6f462c9
#define public_6f462e0 _public_6f462e0
#define public_6f462ec _public_6f462ec
#define public_6f462f0 _public_6f462f0
#define public_6f46300 _public_6f46300
#define public_6f4630b _public_6f4630b

PROC_DECLARE(0x6f462b0, internal_6f462b0, public_6f462b0);
extern "C" NAKED register_t __cdecl internal_6f462b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x70]
        test dl, dl
        push ebx
        jne public_6f462c9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f462c9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f462c9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x71]
        test bl, bl
        jne public_6f462f0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        jne public_6f462ec
        lea esp, ss:[esp]
        public_6f462e0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        je public_6f462e0
        public_6f462ec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f462f0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f4630b
        lea esp, ss:[esp]
        public_6f46300 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f46300
        public_6f4630b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f462b0)
    }
}

#undef public_6f462c9
#undef public_6f462e0
#undef public_6f462ec
#undef public_6f462f0
#undef public_6f46300
#undef public_6f4630b
