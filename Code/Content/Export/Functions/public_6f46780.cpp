#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46780);

#define public_6f46796 _public_6f46796
#define public_6f467a1 _public_6f467a1
#define public_6f467a5 _public_6f467a5
#define public_6f467b0 _public_6f467b0
#define public_6f467bc _public_6f467bc
#define public_6f467c5 _public_6f467c5

PROC_DECLARE(0x6f46780, internal_6f46780, public_6f46780);
extern "C" NAKED register_t __cdecl internal_6f46780()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_6f467a5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6f467a1
        public_6f46796 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6f46796
        public_6f467a1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f467a5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f467bc
        nop 
        public_6f467b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f467b0
        public_6f467bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f467c5
        mov dword ptr ds : [ecx], eax
        public_6f467c5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46780)
    }
}

#undef public_6f46796
#undef public_6f467a1
#undef public_6f467a5
#undef public_6f467b0
#undef public_6f467bc
#undef public_6f467c5
