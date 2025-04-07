#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_6626e50);
CLANG_FORWARD_PROC_SYMBOL(public_6626f20);
CLANG_FORWARD_PROC_SYMBOL(public_6626f90);
CLANG_FORWARD_PROC_SYMBOL(public_6627060);
CLANG_FORWARD_PROC_SYMBOL(public_66270f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6626bba _public_6626bba
#define public_6626be2 _public_6626be2
#define public_6626c1b _public_6626c1b
#define public_6626c34 _public_6626c34
#define public_6626c98 _public_6626c98
#define public_6626cbb _public_6626cbb

PROC_DECLARE(0x6626b90, internal_6626b90, public_6626b90);
extern "C" NAKED register_t __cdecl internal_6626b90()
{
    __asm
    {
        sub esp, 0x34
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [edi+4]
        mov al, byte ptr ds : [edi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [edi+4], ecx
        je public_6626bba
        mov esi, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jne public_6626bba
        inc dword ptr ds : [edi+8]
        jmp public_6626be2
        public_6626bba : nop
        lea ecx, ss:[esp+0x48]
        lea edx, ss:[esp+0x40]
        push ecx
        push edx
        lea ecx, ds:[edi+0xC]
        call public_6612e70
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi+0x10]
        cmp esi, eax
        je public_6626cbb
        mov dword ptr ds : [edi+0x24], esi
        mov byte ptr ds : [edi+0x28], 1
        public_6626be2 : nop
        cmp esi, dword ptr ds : [edi+0x10]
        je public_6626cbb
        mov al, byte ptr ds : [esi+0x10]
        push ebx
        push ebp
        push 0x58
        mov byte ptr ss : [esp+0x1C], al
        call public_66281dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0
        mov ebp, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_6626c34
        public_6626c1b : nop
        lea ecx, ds:[esi+8]
        lea edx, ss:[esp+0x48]
        push ecx
        push ebx
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6627060
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6626c1b
        public_6626c34 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], eax
        call public_6626e50
        lea eax, ss:[esp+0x28]
        lea ecx, ss:[esp+0x38]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x38], edx
        call public_6626e50
        lea ecx, ss:[esp+0x34]
        lea edx, ss:[esp+0x10]
        push ecx
        push edx
        lea ecx, ds:[edi+0xC]
        call public_6626f90
        lea ecx, ss:[esp+0x38]
        call public_6626f20
        lea ecx, ss:[esp+0x28]
        call public_6626f20
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x10]
        pop ebp
        cmp eax, ecx
        pop ebx
        je public_6626c98
        mov dword ptr ds : [edi+0x24], eax
        mov byte ptr ds : [edi+0x28], 1
        public_6626c98 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x44]
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_66270f0
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_66281d0
        add esp, 4
        public_6626cbb : nop
        pop edi
        pop esi
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6626b90)
    }
}

#undef public_6626bba
#undef public_6626be2
#undef public_6626c1b
#undef public_6626c34
#undef public_6626c98
#undef public_6626cbb
