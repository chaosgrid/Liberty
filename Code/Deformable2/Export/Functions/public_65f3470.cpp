#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3470);

#define public_65f3489 _public_65f3489
#define public_65f34a0 _public_65f34a0
#define public_65f34ac _public_65f34ac
#define public_65f34b0 _public_65f34b0
#define public_65f34c0 _public_65f34c0
#define public_65f34cb _public_65f34cb

PROC_DECLARE(0x65f3470, internal_65f3470, public_65f3470);
extern "C" NAKED register_t __cdecl internal_65f3470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_65f3489
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_65f3489
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_65f3489 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_65f34b0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_65f34ac
        lea esp, ss:[esp]
        public_65f34a0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_65f34a0
        public_65f34ac : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_65f34b0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_65f34cb
        lea esp, ss:[esp]
        public_65f34c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_65f34c0
        public_65f34cb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f3470)
    }
}

#undef public_65f3489
#undef public_65f34a0
#undef public_65f34ac
#undef public_65f34b0
#undef public_65f34c0
#undef public_65f34cb
