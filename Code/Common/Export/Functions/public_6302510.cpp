#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302510);

#define public_6302529 _public_6302529
#define public_6302540 _public_6302540
#define public_630254c _public_630254c
#define public_6302550 _public_6302550
#define public_6302560 _public_6302560
#define public_630256b _public_630256b

PROC_DECLARE(0x6302510, internal_6302510, public_6302510);
extern "C" NAKED register_t __cdecl internal_6302510()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x4C]
        test dl, dl
        push ebx
        jne public_6302529
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6302529
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6302529 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x4D]
        test bl, bl
        jne public_6302550
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_630254c
        lea esp, ss:[esp]
        public_6302540 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_6302540
        public_630254c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6302550 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_630256b
        lea esp, ss:[esp]
        public_6302560 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6302560
        public_630256b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6302510)
    }
}

#undef public_6302529
#undef public_6302540
#undef public_630254c
#undef public_6302550
#undef public_6302560
#undef public_630256b
