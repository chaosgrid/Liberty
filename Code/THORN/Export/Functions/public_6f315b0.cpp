#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f315b0);

#define public_6f315c6 _public_6f315c6
#define public_6f315d1 _public_6f315d1
#define public_6f315d5 _public_6f315d5
#define public_6f315e0 _public_6f315e0
#define public_6f315ec _public_6f315ec
#define public_6f315f5 _public_6f315f5

PROC_DECLARE(0x6f315b0, internal_6f315b0, public_6f315b0);
extern "C" NAKED register_t __cdecl internal_6f315b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f315d5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f315d1
        public_6f315c6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f315c6
        public_6f315d1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f315d5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f315ec
        nop 
        public_6f315e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f315e0
        public_6f315ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f315f5
        mov dword ptr ds : [ecx], eax
        public_6f315f5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f315b0)
    }
}

#undef public_6f315c6
#undef public_6f315d1
#undef public_6f315d5
#undef public_6f315e0
#undef public_6f315ec
#undef public_6f315f5
