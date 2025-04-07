#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a140);

#define public_661a156 _public_661a156
#define public_661a161 _public_661a161
#define public_661a165 _public_661a165
#define public_661a16f _public_661a16f
#define public_661a17b _public_661a17b
#define public_661a184 _public_661a184

PROC_DECLARE(0x661a140, internal_661a140, public_661a140);
extern "C" NAKED register_t __cdecl internal_661a140()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_661a165
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_661a161
        public_661a156 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_661a156
        public_661a161 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661a165 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_661a17b
        public_661a16f : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_661a16f
        public_661a17b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_661a184
        mov dword ptr ds : [ecx], eax
        public_661a184 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661a140)
    }
}

#undef public_661a156
#undef public_661a161
#undef public_661a165
#undef public_661a16f
#undef public_661a17b
#undef public_661a184
