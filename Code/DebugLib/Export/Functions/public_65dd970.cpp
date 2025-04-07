#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd970);

#define public_65dd991 _public_65dd991
#define public_65dd99f _public_65dd99f
#define public_65dd9ca _public_65dd9ca
#define public_65dd9d2 _public_65dd9d2
#define public_65dd9e1 _public_65dd9e1

PROC_DECLARE(0x65dd970, internal_65dd970, public_65dd970);
extern "C" NAKED register_t __cdecl internal_65dd970()
{
    __asm
    {
        push ebx
        mov eax, dword ptr ss : [esp+0x14]
        or eax, eax
        jne public_65dd991
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        xor edx, edx
        div ecx
        mov eax, dword ptr ss : [esp+8]
        div ecx
        mov eax, edx
        xor edx, edx
        jmp public_65dd9e1
        public_65dd991 : nop
        mov ecx, eax
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        public_65dd99f : nop
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jne public_65dd99f
        div ebx
        mov ecx, eax
        mul dword ptr ss : [esp+0x14]
        xchg ecx, eax
        mul dword ptr ss : [esp+0x10]
        add edx, ecx
        jb public_65dd9ca
        cmp edx, dword ptr ss : [esp+0xC]
        ja public_65dd9ca
        jb public_65dd9d2
        cmp eax, dword ptr ss : [esp+8]
        jbe public_65dd9d2
        public_65dd9ca : nop
        sub eax, dword ptr ss : [esp+0x10]
        sbb edx, dword ptr ss : [esp+0x14]
        public_65dd9d2 : nop
        sub eax, dword ptr ss : [esp+8]
        sbb edx, dword ptr ss : [esp+0xC]
        neg edx
        neg eax
        sbb edx, 0
        public_65dd9e1 : nop
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65dd970)
    }
}

#undef public_65dd991
#undef public_65dd99f
#undef public_65dd9ca
#undef public_65dd9d2
#undef public_65dd9e1
