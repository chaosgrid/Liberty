#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417d30);

#define public_417d46 _public_417d46
#define public_417d51 _public_417d51
#define public_417d55 _public_417d55
#define public_417d60 _public_417d60
#define public_417d6c _public_417d6c
#define public_417d75 _public_417d75

PROC_DECLARE(0x417d30, internal_417d30, public_417d30);
extern "C" NAKED register_t __cdecl internal_417d30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x29]
        test bl, bl
        jne public_417d55
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_417d51
        public_417d46 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_417d46
        public_417d51 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_417d55 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_417d6c
        nop 
        public_417d60 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_417d60
        public_417d6c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_417d75
        mov dword ptr ds : [ecx], eax
        public_417d75 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x417d30)
    }
}

#undef public_417d46
#undef public_417d51
#undef public_417d55
#undef public_417d60
#undef public_417d6c
#undef public_417d75
