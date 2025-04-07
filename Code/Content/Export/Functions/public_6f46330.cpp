#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46330);

#define public_6f46349 _public_6f46349
#define public_6f46360 _public_6f46360
#define public_6f4636c _public_6f4636c
#define public_6f46370 _public_6f46370
#define public_6f46380 _public_6f46380
#define public_6f4638b _public_6f4638b

PROC_DECLARE(0x6f46330, internal_6f46330, public_6f46330);
extern "C" NAKED register_t __cdecl internal_6f46330()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x44]
        test dl, dl
        push ebx
        jne public_6f46349
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f46349
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f46349 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x45]
        test bl, bl
        jne public_6f46370
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_6f4636c
        lea esp, ss:[esp]
        public_6f46360 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_6f46360
        public_6f4636c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46370 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f4638b
        lea esp, ss:[esp]
        public_6f46380 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f46380
        public_6f4638b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46330)
    }
}

#undef public_6f46349
#undef public_6f46360
#undef public_6f4636c
#undef public_6f46370
#undef public_6f46380
#undef public_6f4638b
