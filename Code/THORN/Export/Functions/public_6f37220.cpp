#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37220);

#define public_6f37239 _public_6f37239
#define public_6f37250 _public_6f37250
#define public_6f3725c _public_6f3725c
#define public_6f37260 _public_6f37260
#define public_6f37270 _public_6f37270
#define public_6f3727b _public_6f3727b

PROC_DECLARE(0x6f37220, internal_6f37220, public_6f37220);
extern "C" NAKED register_t __cdecl internal_6f37220()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        push ebx
        jne public_6f37239
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f37239
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f37239 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6f37260
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f3725c
        lea esp, ss:[esp]
        public_6f37250 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f37250
        public_6f3725c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f37260 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3727b
        lea esp, ss:[esp]
        public_6f37270 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f37270
        public_6f3727b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f37220)
    }
}

#undef public_6f37239
#undef public_6f37250
#undef public_6f3725c
#undef public_6f37260
#undef public_6f37270
#undef public_6f3727b
