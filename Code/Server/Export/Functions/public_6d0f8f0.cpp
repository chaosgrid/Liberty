#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0f901 _public_6d0f901
#define public_6d0f916 _public_6d0f916
#define public_6d0f91f _public_6d0f91f
#define public_6d0f923 _public_6d0f923
#define public_6d0f938 _public_6d0f938
#define public_6d0f949 _public_6d0f949
#define public_6d0f960 _public_6d0f960

PROC_DECLARE(0x6d0f8f0, internal_6d0f8f0, public_6d0f8f0);
extern "C" NAKED register_t __cdecl internal_6d0f8f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d67d00
        je public_6d0f923
        public_6d0f901 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d0f916
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d0f91f
        public_6d0f916 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d0f91f : nop
        test edi, edi
        jne public_6d0f901
        public_6d0f923 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d0f949
        public_6d0f938 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d0f938
        public_6d0f949 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d0f960
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d0f960 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0f8f0)
    }
}

#undef public_6d0f901
#undef public_6d0f916
#undef public_6d0f91f
#undef public_6d0f923
#undef public_6d0f938
#undef public_6d0f949
#undef public_6d0f960
