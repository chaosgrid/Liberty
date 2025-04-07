#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a5c0);

#define public_661a5d9 _public_661a5d9
#define public_661a5ec _public_661a5ec
#define public_661a5f8 _public_661a5f8
#define public_661a5fc _public_661a5fc
#define public_661a605 _public_661a605
#define public_661a610 _public_661a610

PROC_DECLARE(0x661a5c0, internal_661a5c0, public_661a5c0);
extern "C" NAKED register_t __cdecl internal_661a5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x2C]
        test dl, dl
        jne public_661a5d9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_661a5d9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_661a5d9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_661a5fc
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_661a5f8
        public_661a5ec : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_661a5ec
        public_661a5f8 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661a5fc : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_661a610
        public_661a605 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_661a605
        public_661a610 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661a5c0)
    }
}

#undef public_661a5d9
#undef public_661a5ec
#undef public_661a5f8
#undef public_661a5fc
#undef public_661a605
#undef public_661a610
