#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e500);

#define public_6ce70e7 _public_6ce70e7
#define public_6ce7105 _public_6ce7105
#define public_6ce711d _public_6ce711d
#define public_6ce711f _public_6ce711f
#define public_6ce7170 _public_6ce7170
#define public_6ce7172 _public_6ce7172
#define public_6ce718a _public_6ce718a
#define public_6ce7194 _public_6ce7194
#define public_6ce71ae _public_6ce71ae
#define public_6ce71b6 _public_6ce71b6
#define public_6ce71cf _public_6ce71cf
#define public_6ce71f4 _public_6ce71f4
#define public_6ce7201 _public_6ce7201

PROC_DECLARE(0x6ce70b0, internal_6ce70b0, public_6ce70b0);
extern "C" NAKED register_t __cdecl internal_6ce70b0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x24]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_6ce7201
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ce7201
        cmp dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], edi
        jne public_6ce70e7
        mov dword ptr ss : [esp+0x1C], edi
        public_6ce70e7 : nop
        push ebx
        mov byte ptr ss : [esp+0xF], 0
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov ebx, dword ptr ss : [esp+0x1C]
        je public_6ce7105
        cmp dword ptr ss : [esp+0x20], edi
        jne public_6ce71cf
        public_6ce7105 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, edi
        je public_6ce711d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce711f
        public_6ce711d : nop
        xor eax, eax
        public_6ce711f : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push esi
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        mov esi, eax
        cmp esi, edi
        je public_6ce71ae
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6ce71ae
        test bl, bl
        jne public_6ce7194
        cmp dword ptr ds : [esi+0x14], 0x20000
        jne public_6ce7194
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ce7170
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6ce7170
        mov edi, eax
        jmp public_6ce7172
        public_6ce7170 : nop
        xor edi, edi
        public_6ce7172 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d641d8]
        test eax, eax
        jne public_6ce718a
        mov ecx, edi
        call dword ptr ds : [public_6d641d4]
        test al, al
        je public_6ce7194
        public_6ce718a : nop
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFB
        jmp public_6ce71b6
        public_6ce7194 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        cmp al, bl
        je public_6ce71b6
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        mov byte ptr ss : [esp+0x13], 1
        jmp public_6ce71b6
        public_6ce71ae : nop
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFE
        public_6ce71b6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        pop esi
        jne public_6ce71cf
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_6ce71f4
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6ce71f4
        public_6ce71cf : nop
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        push ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0x28]
        push edx
        call public_6d0e500
        public_6ce71f4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop edi
        pop ebp
        add esp, 8
        ret 0xC
        public_6ce7201 : nop
        pop edi
        mov eax, 0xFFFFFFFB
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ce70b0)
    }
}

#undef public_6ce70e7
#undef public_6ce7105
#undef public_6ce711d
#undef public_6ce711f
#undef public_6ce7170
#undef public_6ce7172
#undef public_6ce718a
#undef public_6ce7194
#undef public_6ce71ae
#undef public_6ce71b6
#undef public_6ce71cf
#undef public_6ce71f4
#undef public_6ce7201
