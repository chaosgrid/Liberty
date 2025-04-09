#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526650);
CLANG_FORWARD_PROC_SYMBOL(public_5392d0);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c01c6);

#define public_5266dc _public_5266dc
#define public_5266de _public_5266de
#define public_526717 _public_526717
#define public_526719 _public_526719
#define public_526775 _public_526775

PROC_DECLARE(0x526650, internal_526650, public_526650);
extern "C" NAKED register_t __cdecl internal_526650()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c01c6 @0x526652*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c01c6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        push 0xC8
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_5266dc
        push 9
        mov ecx, esi
        call public_5392d0
        mov dword ptr ds : [esi+0xA8], edi
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi], offset public_5dccdc
        mov dword ptr ds : [esi+4], offset public_5dcc5c
        mov dword ptr ds : [esi+0xC], offset public_5dcc50
        mov byte ptr ds : [esi+0xAC], bl
        mov byte ptr ds : [esi+0xAD], bl
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        jmp public_5266de
        public_5266dc : nop
        xor esi, esi
        public_5266de : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [eax+0x168]
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_526717
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_526717
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x4001
        cmp edx, 0x4001
        jne public_526717
        mov edi, eax
        jmp public_526719
        public_526717 : nop
        xor edi, edi
        public_526719 : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call public_554e90
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6820]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_526775
        push ebx
        push eax
        call dword ptr ds : [public_5c6810]
        add esp, 8
        public_526775 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        push ebx
        push esi
        call public_540c30
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 8
        mov byte ptr ds : [esi+0xAC], bl
        mov byte ptr ds : [esi+0xAD], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x526650)
    }
}

#undef public_5266dc
#undef public_5266de
#undef public_526717
#undef public_526719
#undef public_526775
