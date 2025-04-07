#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4eb60);

#define public_6f4eb6b _public_6f4eb6b
#define public_6f4eb78 _public_6f4eb78
#define public_6f4eb8d _public_6f4eb8d
#define public_6f4eb94 _public_6f4eb94

PROC_DECLARE(0x6f4eb60, internal_6f4eb60, public_6f4eb60);
extern "C" NAKED register_t __cdecl internal_6f4eb60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        test edx, edx
        je public_6f4eb94
        push edi
        public_6f4eb6b : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        mov dword ptr ds : [edx+4], 0
        je public_6f4eb8d
        public_6f4eb78 : nop
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        jne public_6f4eb8d
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        jne public_6f4eb78
        public_6f4eb8d : nop
        test ecx, ecx
        mov edx, ecx
        jne public_6f4eb6b
        pop edi
        public_6f4eb94 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4eb60)
    }
}

#undef public_6f4eb6b
#undef public_6f4eb78
#undef public_6f4eb8d
#undef public_6f4eb94
