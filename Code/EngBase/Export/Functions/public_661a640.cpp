#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a640);

#define public_661a656 _public_661a656
#define public_661a661 _public_661a661
#define public_661a665 _public_661a665
#define public_661a66f _public_661a66f
#define public_661a67b _public_661a67b
#define public_661a684 _public_661a684

PROC_DECLARE(0x661a640, internal_661a640, public_661a640);
extern "C" NAKED register_t __cdecl internal_661a640()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x31]
        test bl, bl
        jne public_661a665
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_661a661
        public_661a656 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_661a656
        public_661a661 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661a665 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_661a67b
        public_661a66f : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_661a66f
        public_661a67b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_661a684
        mov dword ptr ds : [ecx], eax
        public_661a684 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661a640)
    }
}

#undef public_661a656
#undef public_661a661
#undef public_661a665
#undef public_661a66f
#undef public_661a67b
#undef public_661a684
