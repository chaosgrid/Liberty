#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4153b0);

#define public_4153c6 _public_4153c6
#define public_4153d1 _public_4153d1
#define public_4153d5 _public_4153d5
#define public_4153e0 _public_4153e0
#define public_4153ec _public_4153ec
#define public_4153f5 _public_4153f5

PROC_DECLARE(0x4153b0, internal_4153b0, public_4153b0);
extern "C" NAKED register_t __cdecl internal_4153b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_4153d5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_4153d1
        public_4153c6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_4153c6
        public_4153d1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4153d5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4153ec
        nop 
        public_4153e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4153e0
        public_4153ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4153f5
        mov dword ptr ds : [ecx], eax
        public_4153f5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4153b0)
    }
}

#undef public_4153c6
#undef public_4153d1
#undef public_4153d5
#undef public_4153e0
#undef public_4153ec
#undef public_4153f5
