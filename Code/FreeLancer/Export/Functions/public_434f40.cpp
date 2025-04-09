#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434f40);
CLANG_FORWARD_PROC_SYMBOL(public_4360e0);
CLANG_FORWARD_PROC_SYMBOL(public_436be0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9128);

#define public_434fd7 _public_434fd7
#define public_435070 _public_435070
#define public_435079 _public_435079
#define public_4350a0 _public_4350a0
#define public_4350a9 _public_4350a9
#define public_4350d7 _public_4350d7
#define public_4350e0 _public_4350e0

PROC_DECLARE(0x434f40, internal_434f40, public_434f40);
extern "C" NAKED register_t __cdecl internal_434f40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9128 @0x434f42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9128
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x80]
        push edi
        push esi
        mov ebx, ecx
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x84], eax
        mov al, byte ptr ss : [esp+0x84]
        push 0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x84], 0
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_434fd7
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_434fd7 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x88]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x5C]
        xor edi, edi
        push edx
        mov dword ptr ss : [esp+0x38], edi
        call public_436be0
        add esp, 0xC
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[eax+4]
        mov dword ptr ss : [esp+0x34], ecx
        push esi
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x80], 1
        call dword ptr ds : [public_5c6fa0]
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x50], ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[ebx+0xC]
        mov byte ptr ss : [esp+0x84], 2
        call public_4360e0
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, edi
        je public_435079
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_435070
        cmp cl, 0xFF
        je public_435070
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_435079
        public_435070 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_435079 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        je public_4350a9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4350a0
        cmp cl, 0xFF
        je public_4350a0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4350a9
        public_4350a0 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4350a9 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_4350e0
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4350d7
        cmp cl, 0xFF
        je public_4350d7
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        public_4350d7 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4350e0 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x434f40)
    }
}

#undef public_434fd7
#undef public_435070
#undef public_435079
#undef public_4350a0
#undef public_4350a9
#undef public_4350d7
#undef public_4350e0
