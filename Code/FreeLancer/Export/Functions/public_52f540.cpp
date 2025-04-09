#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_52f540);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);
CLANG_FORWARD_JUMP_SYMBOL(public_5c05de);

#define public_52f5ad _public_52f5ad
#define public_52f5af _public_52f5af
#define public_52f5ce _public_52f5ce
#define public_52f5d0 _public_52f5d0
#define public_52f5e8 _public_52f5e8
#define public_52f5f7 _public_52f5f7
#define public_52f5f9 _public_52f5f9
#define public_52f610 _public_52f610
#define public_52f626 _public_52f626

PROC_DECLARE(0x52f540, internal_52f540, public_52f540);
extern "C" NAKED register_t __cdecl internal_52f540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c05de @0x52f542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c05de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_531a30
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov byte ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi], offset public_5ddcdc
        je public_52f5ad
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edx+4]
        jmp public_52f5af
        public_52f5ad : nop
        xor eax, eax
        public_52f5af : nop
        push ebx
        mov ebx, dword ptr ds : [public_5c6040]
        lea ecx, ds:[eax+0x58]
        call ebx
        test al, al
        jne public_52f5e8
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_52f5ce
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_52f5d0
        public_52f5ce : nop
        xor eax, eax
        public_52f5d0 : nop
        add eax, 0x58
        push eax
        call public_40f080
        add esp, 4
        push 1
        mov ecx, eax
        mov dword ptr ds : [esi+0x30], eax
        call public_40e960
        public_52f5e8 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_52f5f7
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_52f5f9
        public_52f5f7 : nop
        xor eax, eax
        public_52f5f9 : nop
        lea ecx, ds:[eax+0x5C]
        call ebx
        test al, al
        pop ebx
        jne public_52f626
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_52f610
        mov edx, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [edx+4]
        public_52f610 : nop
        add edi, 0x5C
        push edi
        call public_42ae40
        mov dword ptr ds : [esi+0x34], eax
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52f626 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x52f540)
    }
}

#undef public_52f5ad
#undef public_52f5af
#undef public_52f5ce
#undef public_52f5d0
#undef public_52f5e8
#undef public_52f5f7
#undef public_52f5f9
#undef public_52f610
#undef public_52f626
