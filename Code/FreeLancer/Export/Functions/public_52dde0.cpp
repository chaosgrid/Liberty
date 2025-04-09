#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5154a0);
CLANG_FORWARD_PROC_SYMBOL(public_52dde0);
CLANG_FORWARD_PROC_SYMBOL(public_52e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_52e100);
CLANG_FORWARD_PROC_SYMBOL(public_53f340);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c04f7);

#define public_52de47 _public_52de47
#define public_52de62 _public_52de62
#define public_52de77 _public_52de77
#define public_52de80 _public_52de80
#define public_52dedd _public_52dedd
#define public_52dedf _public_52dedf
#define public_52def3 _public_52def3
#define public_52def5 _public_52def5
#define public_52df2d _public_52df2d
#define public_52df31 _public_52df31
#define public_52e008 _public_52e008
#define public_52e029 _public_52e029
#define public_52e074 _public_52e074

PROC_DECLARE(0x52dde0, internal_52dde0, public_52dde0);
extern "C" NAKED register_t __cdecl internal_52dde0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c04f7 @0x52dde2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c04f7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA4
        mov al, byte ptr ss : [esp+0xF]
        push ebx
        push esi
        push edi
        xor edi, edi
        mov ebx, ecx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov eax, dword ptr ss : [esp+0xC0]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0xC0], edi
        call dword ptr ds : [edx+0x98]
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, edi
        jne public_52de47
        mov dword ptr ss : [esp+0x1C], edi
        jmp public_52de62
        public_52de47 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        public_52de62 : nop
        cmp dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x10], edi
        jbe public_52e074
        push ebp
        mov dword ptr ss : [esp+0x18], edi
        jmp public_52de80
        public_52de77 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        xor edi, edi
        lea ecx, ds:[ecx]
        public_52de80 : nop
        push 0xD4
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov byte ptr ss : [esp+0xBC], 1
        je public_52dedd
        push 3
        mov ecx, esi
        call public_52e100
        push edi
        push edi
        push edi
        push edi
        lea ecx, ds:[esi+0xC0]
        mov byte ptr ss : [esp+0xCC], 2
        call public_5154a0
        mov dword ptr ds : [esi+0xD0], edi
        mov dword ptr ds : [esi], offset public_5dd67c
        mov dword ptr ds : [esi+4], offset public_5dd5fc
        mov dword ptr ds : [esi+0xC], offset public_5dd5f4
        mov ebp, esi
        jmp public_52dedf
        public_52dedd : nop
        xor ebp, ebp
        public_52dedf : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edi
        mov byte ptr ss : [esp+0xBC], 0
        je public_52def3
        mov ebx, dword ptr ds : [eax+0x4C]
        jmp public_52def5
        public_52def3 : nop
        xor ebx, ebx
        public_52def5 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+0x168]
        mov ecx, ebx
        call dword ptr ds : [public_5c65c8]
        lea eax, ss:[ebp+0xC]
        cmp eax, edi
        je public_52df2d
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_52df2d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        mov dword ptr ss : [esp+0x10], eax
        je public_52df31
        public_52df2d : nop
        mov dword ptr ss : [esp+0x10], edi
        public_52df31 : nop
        lea ecx, ss:[esp+0x48]
        call public_52e0a0
        mov edx, dword ptr ds : [public_613ed0]
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x50], eax
        lea eax, ds:[edx+ecx]
        mov dword ptr ss : [esp+0xA4], edi
        mov dword ptr ss : [esp+0x48], edi
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x5C], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x60], ecx
        lea esi, ds:[eax+0xC]
        add eax, 0x30
        mov ecx, 9
        lea edi, ss:[esp+0x64]
        rep movsd
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x88], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x8C], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x90], edx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+0xB0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xA4], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x48]
        push edx
        call dword ptr ds : [eax+0xA0]
        mov byte ptr ss : [esp+0x28], 0
        call public_54baf0
        cmp dword ptr ds : [esi+8], eax
        jne public_52e008
        mov eax, dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0xB4]
        push eax
        mov byte ptr ss : [esp+0x38], 1
        call dword ptr ds : [public_5c68cc]
        jmp public_52e029
        public_52e008 : nop
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        public_52e029 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, ebp
        call public_53f340
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x20]
        push 0
        push ebp
        call public_540c30
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        inc eax
        add edx, 0x44
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edx
        jb public_52de77
        mov esi, dword ptr ss : [esp+0x30]
        pop ebp
        public_52e074 : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0xB4]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB0
        ret 4
        UNREACHABLE_TRAP(0x52dde0)
    }
}

#undef public_52de47
#undef public_52de62
#undef public_52de77
#undef public_52de80
#undef public_52dedd
#undef public_52dedf
#undef public_52def3
#undef public_52def5
#undef public_52df2d
#undef public_52df31
#undef public_52e008
#undef public_52e029
#undef public_52e074
