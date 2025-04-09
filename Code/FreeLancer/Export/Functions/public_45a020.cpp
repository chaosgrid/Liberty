#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a020);

#define public_45a039 _public_45a039
#define public_45a050 _public_45a050
#define public_45a05c _public_45a05c
#define public_45a060 _public_45a060
#define public_45a070 _public_45a070
#define public_45a07b _public_45a07b

PROC_DECLARE(0x45a020, internal_45a020, public_45a020);
extern "C" NAKED register_t __cdecl internal_45a020()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        push ebx
        jne public_45a039
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_45a039
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_45a039 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_45a060
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_45a05c
        lea esp, ss:[esp]
        public_45a050 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_45a050
        public_45a05c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_45a060 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_45a07b
        lea esp, ss:[esp]
        public_45a070 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_45a070
        public_45a07b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x45a020)
    }
}

#undef public_45a039
#undef public_45a050
#undef public_45a05c
#undef public_45a060
#undef public_45a070
#undef public_45a07b
