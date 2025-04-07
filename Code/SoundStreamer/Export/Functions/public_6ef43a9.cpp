#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef420f);
CLANG_FORWARD_PROC_SYMBOL(public_6ef43a9);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4410);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4495);
CLANG_FORWARD_PROC_SYMBOL(public_6ef46e0);

#define public_6ef43bc _public_6ef43bc
#define public_6ef43d2 _public_6ef43d2
#define public_6ef4408 _public_6ef4408

PROC_DECLARE(0x6ef43a9, internal_6ef43a9, public_6ef43a9);
extern "C" NAKED register_t __cdecl internal_6ef43a9()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], esi
        jae public_6ef43bc
        call public_6ef420f
        public_6ef43bc : nop
        mov ecx, edi
        call public_6ef4495
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x14]
        sub eax, esi
        cmp eax, ebx
        jae public_6ef43d2
        mov ebx, eax
        public_6ef43d2 : nop
        test ebx, ebx
        jbe public_6ef4408
        mov ecx, dword ptr ds : [edi+4]
        sub eax, ebx
        add ecx, esi
        push eax
        lea eax, ds:[ecx+ebx]
        push eax
        push ecx
        call public_6ef46e0
        mov esi, dword ptr ds : [edi+8]
        add esp, 0xC
        sub esi, ebx
        mov ecx, edi
        push 0
        push esi
        call public_6ef4410
        test al, al
        je public_6ef4408
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        and byte ptr ds : [esi+eax], 0
        public_6ef4408 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ef43a9)
    }
}

#undef public_6ef43bc
#undef public_6ef43d2
#undef public_6ef4408
