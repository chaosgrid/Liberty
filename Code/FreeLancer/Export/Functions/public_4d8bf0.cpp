#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7b90);
CLANG_FORWARD_PROC_SYMBOL(public_4d8bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);

#define public_4d8c35 _public_4d8c35
#define public_4d8c72 _public_4d8c72
#define public_4d8c7f _public_4d8c7f
#define public_4d8c85 _public_4d8c85
#define public_4d8cd4 _public_4d8cd4
#define public_4d8d37 _public_4d8d37
#define public_4d8d4a _public_4d8d4a
#define public_4d8d7e _public_4d8d7e

PROC_DECLARE(0x4d8bf0, internal_4d8bf0, public_4d8bf0);
extern "C" NAKED register_t __cdecl internal_4d8bf0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, 0x13
        mov esi, ecx
        je public_4d8c35
        cmp edi, 2
        je public_4d8c35
        cmp edi, 3
        je public_4d8c35
        cmp edi, 5
        je public_4d8c35
        cmp edi, 7
        je public_4d8c35
        mov ecx, dword ptr ds : [esi+0x3BC]
        mov eax, dword ptr ds : [ecx]
        push 0
        mov ebx, 1
        push ebx
        push ebx
        call dword ptr ds : [eax+0xA8]
        push 0
        push ebx
        push ebx
        jmp public_4d8d7e
        public_4d8c35 : nop
        mov ecx, dword ptr ds : [esi+0x3BC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        mov ebx, 1
        push ebx
        call dword ptr ds : [eax+0xA8]
        cmp edi, 2
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        jne public_4d8c72
        mov ecx, dword ptr ds : [esi+0x370]
        jmp public_4d8c85
        public_4d8c72 : nop
        cmp edi, 7
        jne public_4d8c7f
        mov ecx, dword ptr ds : [esi+0x374]
        jmp public_4d8c85
        public_4d8c7f : nop
        mov ecx, dword ptr ds : [esi+0x36C]
        public_4d8c85 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 7
        call dword ptr ds : [edx+0xA8]
        cmp dword ptr ds : [esi+0x3C0], ebx
        je public_4d8cd4
        mov ecx, dword ptr ds : [esi+0x3BC]
        mov dword ptr ds : [esi+0x3C0], ebx
        mov eax, dword ptr ds : [public_61262c]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3BC]
        add ecx, 0x80
        push ecx
        lea ecx, ds:[esi+0x3DC]
        call public_5a1340
        public_4d8cd4 : nop
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x3BC]
        push 0
        fadd st(0), st
        lea eax, ss:[esp+0x10]
        push eax
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0x3E966CF5
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        cmp edi, 2
        je public_4d8d37
        cmp edi, 0x13
        je public_4d8d37
        cmp edi, 7
        je public_4d8d37
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebx
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [public_5d69c0]
        fstp dword ptr ss : [esp+0xC]
        jmp public_4d8d4a
        public_4d8d37 : nop
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push ebx
        call dword ptr ds : [edx+0xA8]
        public_4d8d4a : nop
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 0
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0x3E981062
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        call public_4c7b90
        movzx eax, al
        push 0
        push eax
        push 0xC
        public_4d8d7e : nop
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4d8bf0)
    }
}

#undef public_4d8c35
#undef public_4d8c72
#undef public_4d8c7f
#undef public_4d8c85
#undef public_4d8cd4
#undef public_4d8d37
#undef public_4d8d4a
#undef public_4d8d7e
