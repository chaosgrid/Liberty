#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417070);

#define public_417086 _public_417086
#define public_417091 _public_417091
#define public_417095 _public_417095
#define public_4170a0 _public_4170a0
#define public_4170ac _public_4170ac
#define public_4170b5 _public_4170b5

PROC_DECLARE(0x417070, internal_417070, public_417070);
extern "C" NAKED register_t __cdecl internal_417070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_417095
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_417091
        public_417086 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_417086
        public_417091 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_417095 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4170ac
        nop 
        public_4170a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4170a0
        public_4170ac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4170b5
        mov dword ptr ds : [ecx], eax
        public_4170b5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x417070)
    }
}

#undef public_417086
#undef public_417091
#undef public_417095
#undef public_4170a0
#undef public_4170ac
#undef public_4170b5
