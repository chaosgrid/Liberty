#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d532f0);

#define public_6d450da _public_6d450da
#define public_6d45101 _public_6d45101
#define public_6d45127 _public_6d45127
#define public_6d4512d _public_6d4512d

PROC_DECLARE(0x6d450b0, internal_6d450b0, public_6d450b0);
extern "C" NAKED register_t __cdecl internal_6d450b0()
{
    __asm
    {
        push ecx
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6d450da
        mov edx, dword ptr ds : [public_6d90260]
        mov ecx, eax
        imul ecx, 0x418
        push esi
        mov esi, dword ptr ds : [ecx+edx-0xD0]
        test esi, esi
        pop esi
        jne public_6d4512d
        public_6d450da : nop
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov ecx, offset public_6d90260
        call public_6d532f0
        cmp al, 3
        mov byte ptr ss : [esp+3], al
        jne public_6d45101
        lea ecx, ss:[esp+0xC]
        push ecx
        push 7
        call public_6d43650
        add esp, 8
        public_6d45101 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+3]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [edx+0x30]
        cmp byte ptr ss : [esp+3], 3
        jne public_6d45127
        inc dword ptr ds : [public_6d8f99c]
        pop ecx
        ret 8
        public_6d45127 : nop
        inc dword ptr ds : [public_6d8f9a4]
        public_6d4512d : nop
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d450b0)
    }
}

#undef public_6d450da
#undef public_6d45101
#undef public_6d45127
#undef public_6d4512d
