#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e010);

#define public_6f2e026 _public_6f2e026
#define public_6f2e031 _public_6f2e031
#define public_6f2e035 _public_6f2e035
#define public_6f2e040 _public_6f2e040
#define public_6f2e04c _public_6f2e04c
#define public_6f2e055 _public_6f2e055

PROC_DECLARE(0x6f2e010, internal_6f2e010, public_6f2e010);
extern "C" NAKED register_t __cdecl internal_6f2e010()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6f2e035
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f2e031
        public_6f2e026 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f2e026
        public_6f2e031 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f2e035 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f2e04c
        nop 
        public_6f2e040 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f2e040
        public_6f2e04c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f2e055
        mov dword ptr ds : [ecx], eax
        public_6f2e055 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2e010)
    }
}

#undef public_6f2e026
#undef public_6f2e031
#undef public_6f2e035
#undef public_6f2e040
#undef public_6f2e04c
#undef public_6f2e055
