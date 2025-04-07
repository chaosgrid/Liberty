#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecef90);

#define public_6ecefa9 _public_6ecefa9
#define public_6ecefc0 _public_6ecefc0
#define public_6ecefcc _public_6ecefcc
#define public_6ecefd0 _public_6ecefd0
#define public_6ecefe0 _public_6ecefe0
#define public_6ecefeb _public_6ecefeb

PROC_DECLARE(0x6ecef90, internal_6ecef90, public_6ecef90);
extern "C" NAKED register_t __cdecl internal_6ecef90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        push ebx
        jne public_6ecefa9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6ecefa9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6ecefa9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6ecefd0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6ecefcc
        lea esp, ss:[esp]
        public_6ecefc0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6ecefc0
        public_6ecefcc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ecefd0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6ecefeb
        lea esp, ss:[esp]
        public_6ecefe0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6ecefe0
        public_6ecefeb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecef90)
    }
}

#undef public_6ecefa9
#undef public_6ecefc0
#undef public_6ecefcc
#undef public_6ecefd0
#undef public_6ecefe0
#undef public_6ecefeb
