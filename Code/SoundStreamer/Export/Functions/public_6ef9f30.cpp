#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9f30);

#define public_6ef9f52 _public_6ef9f52
#define public_6ef9f60 _public_6ef9f60
#define public_6ef9f8e _public_6ef9f8e
#define public_6ef9f8f _public_6ef9f8f
#define public_6ef9f93 _public_6ef9f93

PROC_DECLARE(0x6ef9f30, internal_6ef9f30, public_6ef9f30);
extern "C" NAKED register_t __cdecl internal_6ef9f30()
{
    __asm
    {
        push ebx
        push esi
        mov eax, dword ptr ss : [esp+0x18]
        or eax, eax
        jne public_6ef9f52
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0xC]
        div ecx
        mov edx, ebx
        jmp public_6ef9f93
        public_6ef9f52 : nop
        mov ecx, eax
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        public_6ef9f60 : nop
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jne public_6ef9f60
        div ebx
        mov esi, eax
        mul dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mul esi
        add edx, ecx
        jb public_6ef9f8e
        cmp edx, dword ptr ss : [esp+0x10]
        ja public_6ef9f8e
        jb public_6ef9f8f
        cmp eax, dword ptr ss : [esp+0xC]
        jbe public_6ef9f8f
        public_6ef9f8e : nop
        dec esi
        public_6ef9f8f : nop
        xor edx, edx
        mov eax, esi
        public_6ef9f93 : nop
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ef9f30)
    }
}

#undef public_6ef9f52
#undef public_6ef9f60
#undef public_6ef9f8e
#undef public_6ef9f8f
#undef public_6ef9f93
