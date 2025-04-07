#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);

#define public_6f00629 _public_6f00629
#define public_6f00640 _public_6f00640
#define public_6f0064c _public_6f0064c
#define public_6f00650 _public_6f00650
#define public_6f00660 _public_6f00660
#define public_6f0066b _public_6f0066b

PROC_DECLARE(0x6f00610, internal_6f00610, public_6f00610);
extern "C" NAKED register_t __cdecl internal_6f00610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6f00629
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f00629
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f00629 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f00650
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f0064c
        lea esp, ss:[esp]
        public_6f00640 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f00640
        public_6f0064c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f00650 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f0066b
        lea esp, ss:[esp]
        public_6f00660 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f00660
        public_6f0066b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f00610)
    }
}

#undef public_6f00629
#undef public_6f00640
#undef public_6f0064c
#undef public_6f00650
#undef public_6f00660
#undef public_6f0066b
