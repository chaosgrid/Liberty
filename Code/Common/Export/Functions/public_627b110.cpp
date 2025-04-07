#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b110);

#define public_627b126 _public_627b126
#define public_627b131 _public_627b131
#define public_627b135 _public_627b135
#define public_627b140 _public_627b140
#define public_627b14c _public_627b14c
#define public_627b155 _public_627b155

PROC_DECLARE(0x627b110, internal_627b110, public_627b110);
extern "C" NAKED register_t __cdecl internal_627b110()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_627b135
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_627b131
        public_627b126 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_627b126
        public_627b131 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_627b135 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_627b14c
        nop 
        public_627b140 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_627b140
        public_627b14c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_627b155
        mov dword ptr ds : [ecx], eax
        public_627b155 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627b110)
    }
}

#undef public_627b126
#undef public_627b131
#undef public_627b135
#undef public_627b140
#undef public_627b14c
#undef public_627b155
