#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_538f04 _public_538f04
#define public_538f17 _public_538f17
#define public_538f20 _public_538f20
#define public_538f24 _public_538f24
#define public_538f31 _public_538f31
#define public_538f42 _public_538f42

PROC_DECLARE(0x538ef0, internal_538ef0, public_538ef0);
extern "C" NAKED register_t __cdecl internal_538ef0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5de718
        je public_538f24
        public_538f04 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_538f17
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_538f20
        public_538f17 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_538f20 : nop
        cmp edi, ebx
        jne public_538f04
        public_538f24 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_538f42
        public_538f31 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_538f31
        public_538f42 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x538ef0)
    }
}

#undef public_538f04
#undef public_538f17
#undef public_538f20
#undef public_538f24
#undef public_538f31
#undef public_538f42
