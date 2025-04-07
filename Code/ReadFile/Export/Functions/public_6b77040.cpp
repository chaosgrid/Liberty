#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77040);

#define public_6b77059 _public_6b77059
#define public_6b7706c _public_6b7706c
#define public_6b77078 _public_6b77078
#define public_6b7707c _public_6b7707c
#define public_6b77085 _public_6b77085
#define public_6b77090 _public_6b77090

PROC_DECLARE(0x6b77040, internal_6b77040, public_6b77040);
extern "C" NAKED register_t __cdecl internal_6b77040()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        jne public_6b77059
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6b77059
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6b77059 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6b7707c
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6b77078
        public_6b7706c : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6b7706c
        public_6b77078 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b7707c : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6b77090
        public_6b77085 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6b77085
        public_6b77090 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b77040)
    }
}

#undef public_6b77059
#undef public_6b7706c
#undef public_6b77078
#undef public_6b7707c
#undef public_6b77085
#undef public_6b77090
