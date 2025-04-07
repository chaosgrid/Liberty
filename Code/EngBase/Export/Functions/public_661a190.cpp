#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a190);

#define public_661a1a6 _public_661a1a6
#define public_661a1b1 _public_661a1b1
#define public_661a1b5 _public_661a1b5
#define public_661a1bf _public_661a1bf
#define public_661a1cb _public_661a1cb
#define public_661a1d4 _public_661a1d4

PROC_DECLARE(0x661a190, internal_661a190, public_661a190);
extern "C" NAKED register_t __cdecl internal_661a190()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_661a1b5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_661a1b1
        public_661a1a6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_661a1a6
        public_661a1b1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661a1b5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_661a1cb
        public_661a1bf : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_661a1bf
        public_661a1cb : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_661a1d4
        mov dword ptr ds : [ecx], eax
        public_661a1d4 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661a190)
    }
}

#undef public_661a1a6
#undef public_661a1b1
#undef public_661a1b5
#undef public_661a1bf
#undef public_661a1cb
#undef public_661a1d4
