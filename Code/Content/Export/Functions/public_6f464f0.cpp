#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f464f0);

#define public_6f4650c _public_6f4650c
#define public_6f46525 _public_6f46525
#define public_6f46534 _public_6f46534
#define public_6f46538 _public_6f46538
#define public_6f46541 _public_6f46541
#define public_6f4654c _public_6f4654c

PROC_DECLARE(0x6f464f0, internal_6f464f0, public_6f464f0);
extern "C" NAKED register_t __cdecl internal_6f464f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x148]
        test dl, dl
        push ebx
        jne public_6f4650c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f4650c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f4650c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x149]
        test bl, bl
        jne public_6f46538
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x149]
        test bl, bl
        jne public_6f46534
        public_6f46525 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x149]
        test bl, bl
        je public_6f46525
        public_6f46534 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46538 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f4654c
        public_6f46541 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f46541
        public_6f4654c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f464f0)
    }
}

#undef public_6f4650c
#undef public_6f46525
#undef public_6f46534
#undef public_6f46538
#undef public_6f46541
#undef public_6f4654c
