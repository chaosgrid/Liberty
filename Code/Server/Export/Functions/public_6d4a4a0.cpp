#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);
CLANG_FORWARD_PROC_SYMBOL(public_6d00010);
CLANG_FORWARD_PROC_SYMBOL(public_6d18880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bd60);

#define public_6d4a517 _public_6d4a517
#define public_6d4a52e _public_6d4a52e
#define public_6d4a551 _public_6d4a551
#define public_6d4a565 _public_6d4a565
#define public_6d4a59d _public_6d4a59d
#define public_6d4a5a8 _public_6d4a5a8
#define public_6d4a5bc _public_6d4a5bc

PROC_DECLARE(0x6d4a4a0, internal_6d4a4a0, public_6d4a4a0);
extern "C" NAKED register_t __cdecl internal_6d4a4a0()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov ebp, ecx
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d4a5bc
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_6d90260]
        mov ecx, eax
        imul ecx, 0x418
        lea esi, ds:[ecx+edx-0x418]
        mov cl, byte ptr ss : [ebp+0x64]
        test cl, cl
        je public_6d4a5bc
        push edi
        push eax
        mov edi, eax
        call public_6d00010
        push edi
        call public_6d18880
        mov eax, dword ptr ds : [esi+0x3E0]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6d4a517
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        push 0x3A
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], edi
        call public_6d43650
        add esp, 8
        public_6d4a517 : nop
        mov eax, dword ptr ds : [esi+0x3CC]
        test eax, eax
        je public_6d4a52e
        push 4
        push edi
        mov ecx, offset public_6d8facc
        call public_6cf1990
        public_6d4a52e : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 8
        call public_6d43650
        mov ecx, dword ptr ds : [esi+0x404]
        add esp, 8
        test ecx, ecx
        je public_6d4a551
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6d5bd60
        public_6d4a551 : nop
        mov eax, dword ptr ds : [public_6d90264]
        mov esi, 1
        cmp eax, esi
        jb public_6d4a5a8
        mov edx, dword ptr ss : [esp+0x1C]
        xor edi, edi
        public_6d4a565 : nop
        test esi, esi
        jbe public_6d4a59d
        lea ecx, ds:[esi-1]
        cmp ecx, eax
        jae public_6d4a59d
        mov ecx, dword ptr ds : [public_6d90260]
        cmp dword ptr ds : [edi+ecx+0x348], 0
        je public_6d4a59d
        cmp esi, edx
        je public_6d4a59d
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+0x1BC]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_6d90264]
        public_6d4a59d : nop
        inc esi
        add edi, 0x418
        cmp esi, eax
        jbe public_6d4a565
        public_6d4a5a8 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 7
        call public_6d43650
        add esp, 8
        mov byte ptr ss : [ebp+0x64], 0
        pop edi
        public_6d4a5bc : nop
        pop esi
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d4a4a0)
    }
}

#undef public_6d4a517
#undef public_6d4a52e
#undef public_6d4a551
#undef public_6d4a565
#undef public_6d4a59d
#undef public_6d4a5a8
#undef public_6d4a5bc
