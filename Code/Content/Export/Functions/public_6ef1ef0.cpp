#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1ef0);

#define public_6ef1f02 _public_6ef1f02
#define public_6ef1f0d _public_6ef1f0d
#define public_6ef1f0f _public_6ef1f0f
#define public_6ef1f20 _public_6ef1f20
#define public_6ef1f2c _public_6ef1f2c
#define public_6ef1f3f _public_6ef1f3f
#define public_6ef1f43 _public_6ef1f43

PROC_DECLARE(0x6ef1ef0, internal_6ef1ef0, public_6ef1ef0);
extern "C" NAKED register_t __cdecl internal_6ef1ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        cmp eax, edx
        push esi
        push edi
        je public_6ef1f0d
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6ef1f02 : nop
        cmp dword ptr ds : [eax], esi
        je public_6ef1f3f
        add eax, 4
        cmp eax, edx
        jne public_6ef1f02
        public_6ef1f0d : nop
        mov esi, edx
        public_6ef1f0f : nop
        cmp esi, edx
        je public_6ef1f43
        lea eax, ds:[esi+4]
        cmp eax, edx
        je public_6ef1f2c
        sub esi, eax
        lea esp, ss:[esp]
        public_6ef1f20 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edi
        add eax, 4
        cmp eax, edx
        jne public_6ef1f20
        public_6ef1f2c : nop
        mov eax, dword ptr ds : [ecx+8]
        add eax, 0xFFFFFFFC
        pop edi
        mov dword ptr ds : [ecx+8], eax
        mov eax, 1
        pop esi
        ret 4
        public_6ef1f3f : nop
        mov esi, eax
        jmp public_6ef1f0f
        public_6ef1f43 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef1ef0)
    }
}

#undef public_6ef1f02
#undef public_6ef1f0d
#undef public_6ef1f0f
#undef public_6ef1f20
#undef public_6ef1f2c
#undef public_6ef1f3f
#undef public_6ef1f43
