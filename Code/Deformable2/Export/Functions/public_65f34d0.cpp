#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f34d0);

#define public_65f34e6 _public_65f34e6
#define public_65f34f1 _public_65f34f1
#define public_65f34f5 _public_65f34f5
#define public_65f3500 _public_65f3500
#define public_65f350c _public_65f350c
#define public_65f3515 _public_65f3515

PROC_DECLARE(0x65f34d0, internal_65f34d0, public_65f34d0);
extern "C" NAKED register_t __cdecl internal_65f34d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_65f34f5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_65f34f1
        public_65f34e6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_65f34e6
        public_65f34f1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_65f34f5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_65f350c
        nop 
        public_65f3500 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_65f3500
        public_65f350c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_65f3515
        mov dword ptr ds : [ecx], eax
        public_65f3515 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f34d0)
    }
}

#undef public_65f34e6
#undef public_65f34f1
#undef public_65f34f5
#undef public_65f3500
#undef public_65f350c
#undef public_65f3515
