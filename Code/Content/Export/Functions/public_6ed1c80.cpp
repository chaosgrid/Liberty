#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);

#define public_6ed1c96 _public_6ed1c96
#define public_6ed1ca1 _public_6ed1ca1
#define public_6ed1ca5 _public_6ed1ca5
#define public_6ed1cb0 _public_6ed1cb0
#define public_6ed1cbc _public_6ed1cbc
#define public_6ed1cc5 _public_6ed1cc5

PROC_DECLARE(0x6ed1c80, internal_6ed1c80, public_6ed1c80);
extern "C" NAKED register_t __cdecl internal_6ed1c80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x41]
        test bl, bl
        jne public_6ed1ca5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6ed1ca1
        public_6ed1c96 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6ed1c96
        public_6ed1ca1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ed1ca5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ed1cbc
        nop 
        public_6ed1cb0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ed1cb0
        public_6ed1cbc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ed1cc5
        mov dword ptr ds : [ecx], eax
        public_6ed1cc5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed1c80)
    }
}

#undef public_6ed1c96
#undef public_6ed1ca1
#undef public_6ed1ca5
#undef public_6ed1cb0
#undef public_6ed1cbc
#undef public_6ed1cc5
