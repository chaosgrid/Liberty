#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248d11);

#define public_62233ba _public_62233ba
#define public_62233eb _public_62233eb
#define public_62233ed _public_62233ed
#define public_622344e _public_622344e
#define public_6223450 _public_6223450
#define public_6223467 _public_6223467
#define public_6223469 _public_6223469
#define public_622348d _public_622348d
#define public_622349a _public_622349a

PROC_DECLARE(0x6223340, internal_6223340, public_6223340);
extern "C" NAKED register_t __cdecl internal_6223340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248d11 @0x6223342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248d11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push esi
        push edi
        mov esi, ecx
        push 0x58
        mov dword ptr ss : [esp+0x10], esi
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        test edi, edi
        mov dword ptr ss : [esp+0x24], 0
        je public_622344e
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624ba48
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_623f7b0
        mov dword ptr ds : [esi+0x4C], 0
        mov dword ptr ds : [esi], offset public_624da48
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        mov byte ptr ss : [esp+0x24], 2
        je public_62233ba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], 0
        public_62233ba : nop
        push ebp
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x28], 3
        je public_62233eb
        mov ecx, ebp
        call public_6212db0
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_62233ed
        public_62233eb : nop
        xor ebp, ebp
        public_62233ed : nop
        mov dword ptr ss : [esp+0xC], 0
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x28], 4
        call public_6209fd0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x411CCCCD
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push 0
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x4C], ebp
        mov byte ptr ss : [esp+0x28], 2
        call public_6209fd0
        mov dword ptr ds : [esi], offset public_624db00
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], offset public_624daa0
        mov dword ptr ds : [edi+0x54], 1
        pop ebp
        jmp public_6223450
        public_622344e : nop
        xor edi, edi
        public_6223450 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x9C], edi
        je public_6223467
        lea eax, ds:[edi+4]
        jmp public_6223469
        public_6223467 : nop
        xor eax, eax
        public_6223469 : nop
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, edi
        je public_622349a
        test eax, eax
        je public_622348d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_622348d : nop
        test edi, edi
        mov dword ptr ds : [esi+0x7C], edi
        je public_622349a
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_622349a : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6223340)
    }
}

#undef public_62233ba
#undef public_62233eb
#undef public_62233ed
#undef public_622344e
#undef public_6223450
#undef public_6223467
#undef public_6223469
#undef public_622348d
#undef public_622349a
