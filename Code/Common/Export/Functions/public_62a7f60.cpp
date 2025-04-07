#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7f60);

#define public_62a7f79 _public_62a7f79
#define public_62a7f90 _public_62a7f90
#define public_62a7f9c _public_62a7f9c
#define public_62a7fa0 _public_62a7fa0
#define public_62a7fb0 _public_62a7fb0
#define public_62a7fbb _public_62a7fbb

PROC_DECLARE(0x62a7f60, internal_62a7f60, public_62a7f60);
extern "C" NAKED register_t __cdecl internal_62a7f60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x28]
        test dl, dl
        push ebx
        jne public_62a7f79
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_62a7f79
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_62a7f79 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x29]
        test bl, bl
        jne public_62a7fa0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_62a7f9c
        lea esp, ss:[esp]
        public_62a7f90 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_62a7f90
        public_62a7f9c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62a7fa0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_62a7fbb
        lea esp, ss:[esp]
        public_62a7fb0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_62a7fb0
        public_62a7fbb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a7f60)
    }
}

#undef public_62a7f79
#undef public_62a7f90
#undef public_62a7f9c
#undef public_62a7fa0
#undef public_62a7fb0
#undef public_62a7fbb
