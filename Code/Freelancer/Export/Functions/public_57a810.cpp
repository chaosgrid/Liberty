#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_579e90);
CLANG_FORWARD_PROC_SYMBOL(public_57a810);
CLANG_FORWARD_PROC_SYMBOL(public_57a9c0);

#define public_57a8be _public_57a8be
#define public_57a956 _public_57a956
#define public_57a95e _public_57a95e
#define public_57a9ad _public_57a9ad

PROC_DECLARE(0x57a810, internal_57a810, public_57a810);
extern "C" NAKED register_t __cdecl internal_57a810()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_4b5060
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x33C], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x484], ebx
        mov dword ptr ds : [esi+0x480], ebx
        mov dword ptr ds : [esi+0x47C], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x3C], al
        mov byte ptr ds : [esi+0x400], 1
        mov byte ptr ds : [esi+0x401], 1
        mov dword ptr ds : [esi+0x330], 0x3ECCCCCD
        mov dword ptr ds : [esi+0x334], 0x3E99999A
        call public_579e90
        mov esi, dword ptr ds : [esi+0x32C]
        cmp esi, ebx
        je public_57a9ad
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_57a8be
        push eax
        call dword ptr ds : [public_5c72dc]
        mov dword ptr ds : [esi+8], ebx
        public_57a8be : nop
        cmp byte ptr ds : [public_67c484], bl
        jne public_57a95e
        push edi
        xor eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0xC]
        rep stosd
        mov ecx, dword ptr ds : [public_67eca4]
        push 0x7F05
        push ebx
        mov dword ptr ss : [esp+0x14], 0x30
        mov dword ptr ss : [esp+0x18], 0x20
        mov dword ptr ss : [esp+0x1C], offset _public_57a9c0
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [public_5c7258]
        push 0x7F00
        push ebx
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_5c725c]
        mov edx, dword ptr ds : [public_61516c]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x30], 6
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], ebx
        call dword ptr ds : [public_5c7260]
        test ax, ax
        pop edi
        je public_57a956
        mov byte ptr ds : [public_67c484], 1
        jmp public_57a95e
        public_57a956 : nop
        cmp byte ptr ds : [public_67c484], bl
        je public_57a9ad
        public_57a95e : nop
        mov ecx, dword ptr ds : [public_67eca4]
        mov edx, dword ptr ds : [public_67eca0]
        mov eax, dword ptr ds : [public_61516c]
        push esi
        push ecx
        push ebx
        push edx
        push 0x120
        push 0x100
        push 0x64
        push 0x64
        push 0xCF0000
/*FIXUP push offset public_5e4718 @0x57a986*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4718
        push eax
        push ebx
        call dword ptr ds : [public_5c72a4]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_57a9ad
        push 5
        push eax
        call dword ptr ds : [public_5c7290]
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call dword ptr ds : [public_5c7264]
        public_57a9ad : nop
        mov al, byte ptr ss : [esp+0x3C]
        pop esi
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x57a810)
    }
}

#undef public_57a8be
#undef public_57a956
#undef public_57a95e
#undef public_57a9ad
