#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5df0);

#define public_6ad5e11 _public_6ad5e11
#define public_6ad5e1f _public_6ad5e1f
#define public_6ad5e4a _public_6ad5e4a
#define public_6ad5e52 _public_6ad5e52
#define public_6ad5e61 _public_6ad5e61

PROC_DECLARE(0x6ad5df0, internal_6ad5df0, public_6ad5df0);
extern "C" NAKED register_t __cdecl internal_6ad5df0()
{
    __asm
    {
        push ebx
        mov eax, dword ptr ss : [esp+0x14]
        or eax, eax
        jne public_6ad5e11
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        xor edx, edx
        div ecx
        mov eax, dword ptr ss : [esp+8]
        div ecx
        mov eax, edx
        xor edx, edx
        jmp public_6ad5e61
        public_6ad5e11 : nop
        mov ecx, eax
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        public_6ad5e1f : nop
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jne public_6ad5e1f
        div ebx
        mov ecx, eax
        mul dword ptr ss : [esp+0x14]
        xchg ecx, eax
        mul dword ptr ss : [esp+0x10]
        add edx, ecx
        jb public_6ad5e4a
        cmp edx, dword ptr ss : [esp+0xC]
        ja public_6ad5e4a
        jb public_6ad5e52
        cmp eax, dword ptr ss : [esp+8]
        jbe public_6ad5e52
        public_6ad5e4a : nop
        sub eax, dword ptr ss : [esp+0x10]
        sbb edx, dword ptr ss : [esp+0x14]
        public_6ad5e52 : nop
        sub eax, dword ptr ss : [esp+8]
        sbb edx, dword ptr ss : [esp+0xC]
        neg edx
        neg eax
        sbb edx, 0
        public_6ad5e61 : nop
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ad5df0)
    }
}

#undef public_6ad5e11
#undef public_6ad5e1f
#undef public_6ad5e4a
#undef public_6ad5e52
#undef public_6ad5e61
