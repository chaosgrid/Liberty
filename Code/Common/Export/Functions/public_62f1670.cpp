#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_62fb970);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639560d);

#define public_62f16a6 _public_62f16a6
#define public_62f1717 _public_62f1717
#define public_62f1750 _public_62f1750
#define public_62f1774 _public_62f1774
#define public_62f1795 _public_62f1795
#define public_62f17a4 _public_62f17a4
#define public_62f17d4 _public_62f17d4

PROC_DECLARE(0x62f1670, internal_62f1670, public_62f1670);
extern "C" NAKED register_t __cdecl internal_62f1670()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639560d @0x62f1672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639560d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [ebp], offset public_63a11d4
        xor edi, edi
        mov dword ptr ss : [esp+0x28], edi
        mov esi, dword ptr ss : [ebp+0x5C]
        cmp esi, edi
        je public_62f1717
        public_62f16a6 : nop
        mov ebx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], esi
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x28], 5
        call public_62a68e0
        lea ecx, ds:[esi+0x4C]
        mov byte ptr ss : [esp+0x28], 4
        call public_62a68e0
        mov eax, dword ptr ds : [esi+0x44]
        lea edi, ds:[esi+0x40]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 3
        mov dword ptr ss : [esp+0x14], eax
        call public_632c410
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call public_62728a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        push esi
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        call public_6391d5a
        add esp, 8
        test ebx, ebx
        mov esi, ebx
        jne public_62f16a6
        xor edi, edi
        public_62f1717 : nop
        mov eax, dword ptr ss : [ebp+0x88]
        push eax
        call public_6391d5a
        mov dword ptr ss : [ebp+0x88], edi
        mov dword ptr ss : [ebp+0x8C], edi
        mov dword ptr ss : [ebp+0x90], edi
        mov ebx, dword ptr ss : [ebp+0x78]
        mov eax, dword ptr ds : [ebx]
        lea esi, ss:[ebp+0x74]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_62f1774
        lea ecx, ds:[ecx]
        public_62f1750 : nop
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6271cc0
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_62f1750
        public_62f1774 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov ebx, dword ptr ss : [ebp+0x6C]
        mov esi, dword ptr ss : [ebp+0x68]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 0
        je public_62f17a4
        public_62f1795 : nop
        lea ecx, ds:[esi+0xC]
        call public_6269110
        add esi, 0x1C
        cmp esi, ebx
        jne public_62f1795
        public_62f17a4 : nop
        mov eax, dword ptr ss : [ebp+0x68]
        push eax
        call public_6391d5a
        mov dword ptr ss : [ebp+0x68], edi
        mov dword ptr ss : [ebp+0x6C], edi
        mov dword ptr ss : [ebp+0x70], edi
        add esp, 4
        mov dword ptr ss : [ebp], offset public_63a11f0
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x28], 6
        je public_62f17d4
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_62f17d4 : nop
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [eax]
        add ebp, 0x48
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_62fb970
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [ebp+8]
        push edx
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+0x10], edi
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ss : [ebp+8], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62f1670)
    }
}

#undef public_62f16a6
#undef public_62f1717
#undef public_62f1750
#undef public_62f1774
#undef public_62f1795
#undef public_62f17a4
#undef public_62f17d4
