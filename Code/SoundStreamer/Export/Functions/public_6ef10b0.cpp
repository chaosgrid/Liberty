#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1040);
CLANG_FORWARD_PROC_SYMBOL(public_6ef10b0);

#define public_6ef10e1 _public_6ef10e1
#define public_6ef110e _public_6ef110e
#define public_6ef1110 _public_6ef1110

PROC_DECLARE(0x6ef10b0, internal_6ef10b0, public_6ef10b0);
extern "C" NAKED register_t __cdecl internal_6ef10b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], 0
        mov esi, ecx
        mov dword ptr ds : [edi], 0
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, 3
        je public_6ef10e1
        cmp eax, 2
        je public_6ef10e1
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6ef10e1 : nop
        mov ecx, esi
        call public_6ef1040
        mov edx, dword ptr ds : [esi+0xC0]
        cmp edx, eax
        jb public_6ef110e
        mov ecx, dword ptr ds : [esi+0xBC]
        cmp edx, ecx
        jae public_6ef1110
        sub ecx, edx
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx]
        pop edi
        pop esi
        add eax, ecx
        pop ebx
        ret 8
        public_6ef110e : nop
        sub eax, edx
        public_6ef1110 : nop
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [ebx]
        pop edi
        pop esi
        add eax, ecx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ef10b0)
    }
}

#undef public_6ef10e1
#undef public_6ef110e
#undef public_6ef1110
