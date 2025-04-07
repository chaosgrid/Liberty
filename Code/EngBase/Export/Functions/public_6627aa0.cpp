#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627aa0);

#define public_6627ab9 _public_6627ab9
#define public_6627acc _public_6627acc
#define public_6627ad8 _public_6627ad8
#define public_6627adc _public_6627adc
#define public_6627ae5 _public_6627ae5
#define public_6627af0 _public_6627af0

PROC_DECLARE(0x6627aa0, internal_6627aa0, public_6627aa0);
extern "C" NAKED register_t __cdecl internal_6627aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        jne public_6627ab9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6627ab9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6627ab9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6627adc
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6627ad8
        public_6627acc : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6627acc
        public_6627ad8 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6627adc : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6627af0
        public_6627ae5 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6627ae5
        public_6627af0 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6627aa0)
    }
}

#undef public_6627ab9
#undef public_6627acc
#undef public_6627ad8
#undef public_6627adc
#undef public_6627ae5
#undef public_6627af0
