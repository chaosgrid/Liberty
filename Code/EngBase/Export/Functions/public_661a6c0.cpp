#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a6c0);

#define public_661a6d9 _public_661a6d9
#define public_661a6ec _public_661a6ec
#define public_661a6f8 _public_661a6f8
#define public_661a6fc _public_661a6fc
#define public_661a705 _public_661a705
#define public_661a710 _public_661a710

PROC_DECLARE(0x661a6c0, internal_661a6c0, public_661a6c0);
extern "C" NAKED register_t __cdecl internal_661a6c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        jne public_661a6d9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_661a6d9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_661a6d9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_661a6fc
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_661a6f8
        public_661a6ec : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_661a6ec
        public_661a6f8 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661a6fc : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_661a710
        public_661a705 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_661a705
        public_661a710 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661a6c0)
    }
}

#undef public_661a6d9
#undef public_661a6ec
#undef public_661a6f8
#undef public_661a6fc
#undef public_661a705
#undef public_661a710
