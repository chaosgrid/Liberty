#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_578d27 _public_578d27
#define public_578d30 _public_578d30
#define public_578d3d _public_578d3d
#define public_578d44 _public_578d44

PROC_DECLARE(0x578d10, internal_578d10, public_578d10);
extern "C" NAKED register_t __cdecl internal_578d10()
{
    __asm
    {
        mov al, byte ptr ds : [public_67c3e0]
        test al, al
        push esi
        mov esi, ecx
        je public_578d27
        push 0
        call public_5a0c30
        or byte ptr ds : [esi+0x6C], 1
        public_578d27 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_578d44
        mov edi, edi
        public_578d30 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_578d3d
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_578d3d : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_578d30
        public_578d44 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x578d10)
    }
}

#undef public_578d27
#undef public_578d30
#undef public_578d3d
#undef public_578d44
