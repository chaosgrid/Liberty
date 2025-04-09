#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4477d0);
CLANG_FORWARD_PROC_SYMBOL(public_447850);
CLANG_FORWARD_PROC_SYMBOL(public_4c43d0);

#define public_4c44fd _public_4c44fd
#define public_4c4507 _public_4c4507
#define public_4c452e _public_4c452e

PROC_DECLARE(0x4c43d0, internal_4c43d0, public_4c43d0);
extern "C" NAKED register_t __cdecl internal_4c43d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov ecx, offset public_672960
        xor bl, bl
        call dword ptr ds : [public_5c6370]
        mov esi, eax
        test esi, esi
        je public_4c452e
        mov ecx, dword ptr ds : [public_673384]
        mov edi, dword ptr ss : [esp+0x38]
        inc ecx
        mov dword ptr ds : [public_673384], ecx
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi]
        mov bl, 1
        je public_4c4507
        mov dl, byte ptr ds : [esi]
        mov ax, word ptr ds : [esi+2]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [esi+0xC]
        mov byte ptr ss : [esp+0x10], dl
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x1C], cl
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        mov dl, byte ptr ds : [esi+0x18]
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        mov ecx, offset public_672960
        mov word ptr ss : [esp+0x1A], ax
        mov byte ptr ss : [esp+0x30], dl
        call dword ptr ds : [public_5c6438]
        push edi
        lea ecx, ss:[esp+0x14]
        mov ebp, eax
        call dword ptr ds : [public_5c63a4]
        mov ebx, dword ptr ss : [esp+0x3C]
        push ebx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6428]
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6408]
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6390]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        lea edx, ss:[esp+0x10]
        mov ecx, offset public_672960
        push eax
        push edx
        call dword ptr ds : [public_5c6434]
        mov dword ptr ss : [esp+0x3C], eax
        call public_446be0
        mov esi, eax
        test esi, esi
        je public_4c44fd
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x12]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_447850
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x12]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push ebx
        push edi
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_4477d0
        public_4c44fd : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 
        public_4c4507 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6428]
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6408]
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        public_4c452e : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4c43d0)
    }
}

#undef public_4c44fd
#undef public_4c4507
#undef public_4c452e
