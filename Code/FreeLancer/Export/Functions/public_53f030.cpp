#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);

#define public_53f072 _public_53f072
#define public_53f074 _public_53f074
#define public_53f0a6 _public_53f0a6
#define public_53f0a8 _public_53f0a8
#define public_53f100 _public_53f100
#define public_53f116 _public_53f116
#define public_53f118 _public_53f118
#define public_53f152 _public_53f152
#define public_53f1b3 _public_53f1b3

PROC_DECLARE(0x53f030, internal_53f030, public_53f030);
extern "C" NAKED register_t __cdecl internal_53f030()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_4215b0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        je public_53f072
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        jne public_53f072
        mov ecx, eax
        jmp public_53f074
        public_53f072 : nop
        xor ecx, ecx
        public_53f074 : nop
        mov edx, dword ptr ds : [ecx+0x88]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+0x60]
        cmp byte ptr ds : [edx], 0
        mov ebx, dword ptr ds : [public_5c6590]
        je public_53f152
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_53f0a6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_53f0a8
        public_53f0a6 : nop
        xor eax, eax
        public_53f0a8 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax+0x60]
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_53f100
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x74]
        lea edi, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        rep movsd
        jmp public_53f1b3
        public_53f100 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_53f116
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 7
        cmp dl, 7
        jne public_53f116
        mov eax, ecx
        jmp public_53f118
        public_53f116 : nop
        xor eax, eax
        public_53f118 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+0x60]
        push eax
        mov edi, 0x100001
        call ebx
        mov ecx, eax
        add ecx, 8
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0xE1
/*FIXUP push offset public_5df858 @0x53f142*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df858
/*FIXUP push offset public_5df820 @0x53f147*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df820
        push edi
        call dword ptr ds : [eax]
        add esp, 0x18
        public_53f152 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        call ebx
        mov ecx, dword ptr ds : [eax+0x40]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[esp+0x4C]
        push edi
        push 0x3F800000
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_53f1b3
        mov ecx, dword ptr ds : [esi+0x10]
        call ebx
        mov ecx, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x10]
        push esi
        push 0x3F800000
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_53f1b3
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x48]
        public_53f1b3 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0xA0
        ret 4
        UNREACHABLE_TRAP(0x53f030)
    }
}

#undef public_53f072
#undef public_53f074
#undef public_53f0a6
#undef public_53f0a8
#undef public_53f100
#undef public_53f116
#undef public_53f118
#undef public_53f152
#undef public_53f1b3
