#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46820);

#define public_6f46840 _public_6f46840
#define public_6f4684e _public_6f4684e
#define public_6f46852 _public_6f46852
#define public_6f46860 _public_6f46860
#define public_6f4686c _public_6f4686c
#define public_6f46875 _public_6f46875

PROC_DECLARE(0x6f46820, internal_6f46820, public_6f46820);
extern "C" NAKED register_t __cdecl internal_6f46820()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x149]
        test bl, bl
        jne public_6f46852
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x149]
        test bl, bl
        jne public_6f4684e
        lea esp, ss:[esp]
        public_6f46840 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x149]
        test bl, bl
        je public_6f46840
        public_6f4684e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46852 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4686c
        lea esp, ss:[esp]
        public_6f46860 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46860
        public_6f4686c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46875
        mov dword ptr ds : [ecx], eax
        public_6f46875 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46820)
    }
}

#undef public_6f46840
#undef public_6f4684e
#undef public_6f46852
#undef public_6f46860
#undef public_6f4686c
#undef public_6f46875
