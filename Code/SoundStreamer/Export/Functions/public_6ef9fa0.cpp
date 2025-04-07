#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9fa0);

#define public_6ef9fc1 _public_6ef9fc1
#define public_6ef9fcf _public_6ef9fcf
#define public_6ef9ffa _public_6ef9ffa
#define public_6efa002 _public_6efa002
#define public_6efa011 _public_6efa011

PROC_DECLARE(0x6ef9fa0, internal_6ef9fa0, public_6ef9fa0);
extern "C" NAKED register_t __cdecl internal_6ef9fa0()
{
    __asm
    {
        push ebx
        mov eax, dword ptr ss : [esp+0x14]
        or eax, eax
        jne public_6ef9fc1
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        xor edx, edx
        div ecx
        mov eax, dword ptr ss : [esp+8]
        div ecx
        mov eax, edx
        xor edx, edx
        jmp public_6efa011
        public_6ef9fc1 : nop
        mov ecx, eax
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        public_6ef9fcf : nop
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jne public_6ef9fcf
        div ebx
        mov ecx, eax
        mul dword ptr ss : [esp+0x14]
        xchg ecx, eax
        mul dword ptr ss : [esp+0x10]
        add edx, ecx
        jb public_6ef9ffa
        cmp edx, dword ptr ss : [esp+0xC]
        ja public_6ef9ffa
        jb public_6efa002
        cmp eax, dword ptr ss : [esp+8]
        jbe public_6efa002
        public_6ef9ffa : nop
        sub eax, dword ptr ss : [esp+0x10]
        sbb edx, dword ptr ss : [esp+0x14]
        public_6efa002 : nop
        sub eax, dword ptr ss : [esp+8]
        sbb edx, dword ptr ss : [esp+0xC]
        neg edx
        neg eax
        sbb edx, 0
        public_6efa011 : nop
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ef9fa0)
    }
}

#undef public_6ef9fc1
#undef public_6ef9fcf
#undef public_6ef9ffa
#undef public_6efa002
#undef public_6efa011
