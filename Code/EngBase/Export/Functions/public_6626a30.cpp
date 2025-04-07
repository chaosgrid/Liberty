#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_6627250);
CLANG_FORWARD_PROC_SYMBOL(public_66276d0);
CLANG_FORWARD_PROC_SYMBOL(public_66277d0);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);
CLANG_FORWARD_PROC_SYMBOL(public_6627b00);
CLANG_FORWARD_PROC_SYMBOL(public_66280b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6626a5b _public_6626a5b
#define public_6626a83 _public_6626a83
#define public_6626aa3 _public_6626aa3
#define public_6626aca _public_6626aca
#define public_6626ad9 _public_6626ad9
#define public_6626afd _public_6626afd
#define public_6626b26 _public_6626b26
#define public_6626b56 _public_6626b56
#define public_6626b5a _public_6626b5a
#define public_6626b7a _public_6626b7a

PROC_DECLARE(0x6626a30, internal_6626a30, public_6626a30);
extern "C" NAKED register_t __cdecl internal_6626a30()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6626a5b
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jne public_6626a5b
        inc dword ptr ds : [esi+8]
        jmp public_6626a83
        public_6626a5b : nop
        lea edx, ss:[esp+0x20]
        lea eax, ss:[esp+0x1C]
        push edx
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6612e70
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        je public_6626b7a
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6626a83 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6626b7a
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_6626aa3
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [ecx+0xC], edx
        jne public_6626aa3
        mov byte ptr ds : [esi+0x28], 0
        public_6626aa3 : nop
        add esi, 0xC
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6627b00
        lea ecx, ss:[esp+0x20]
        mov ebp, eax
        push ecx
        mov ecx, esi
        call public_6627a70
        mov edi, eax
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], edi
        je public_6626ad9
        public_6626aca : nop
        lea ecx, ss:[esp+0x1C]
        call public_66277d0
        cmp dword ptr ss : [esp+0x1C], ebp
        jne public_6626aca
        public_6626ad9 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, edi
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6626b56
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_6626b56
        cmp ebp, ecx
        jne public_6626b56
        mov ebp, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebp, eax
        mov edi, ebp
        je public_6626b26
        public_6626afd : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, esi
        push edx
        call public_66276d0
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ss:[ebp+0xC]
        call public_66280b0
        push ebp
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebp, edi
        jne public_6626afd
        public_6626b26 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        push edx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6627050
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 8
        public_6626b56 : nop
        cmp edi, ebp
        je public_6626b7a
        public_6626b5a : nop
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call public_66277d0
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        mov ecx, esi
        call public_6627250
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebp
        jne public_6626b5a
        public_6626b7a : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6626a30)
    }
}

#undef public_6626a5b
#undef public_6626a83
#undef public_6626aa3
#undef public_6626aca
#undef public_6626ad9
#undef public_6626afd
#undef public_6626b26
#undef public_6626b56
#undef public_6626b5a
#undef public_6626b7a
