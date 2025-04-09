#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc30);
CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_48b510);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc3fd);

#define public_48b587 _public_48b587
#define public_48b5de _public_48b5de
#define public_48b5e7 _public_48b5e7
#define public_48b61c _public_48b61c
#define public_48b69a _public_48b69a
#define public_48b6a3 _public_48b6a3

PROC_DECLARE(0x48b510, internal_48b510, public_48b510);
extern "C" NAKED register_t __cdecl internal_48b510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc3fd @0x48b512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc3fd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp], offset public_5d26bc
        mov dword ptr ss : [ebp+0x7C], offset public_5d26ac
        mov dword ptr ss : [ebp+0x32C], offset public_5d26a4
        lea ecx, ss:[ebp+0x37C]
        mov dword ptr ss : [esp+0x24], 4
        call dword ptr ds : [public_5c6288]
        mov eax, dword ptr ss : [ebp+0x394]
        test eax, eax
        je public_48b587
        mov ecx, dword ptr ds : [public_5c6130]
        mov edx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
        push ecx
        push edx
        push 0x60
        push eax
        call public_5b7ec6
        push esi
        call public_5b7e1d
        add esp, 4
        public_48b587 : nop
        mov eax, dword ptr ss : [ebp+0x39C]
        push eax
        call public_5b7e1d
        mov edi, dword ptr ss : [ebp+0x350]
        mov eax, dword ptr ds : [public_5c7080]
        mov ebx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0x34C]
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_48b5de
        mov al, byte ptr ds : [edi-1]
        test al, al
        je public_48b5de
        cmp al, 0xFF
        je public_48b5de
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c7088]
        public_48b5de : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        jae public_48b5e7
        mov ebx, eax
        public_48b5e7 : nop
        test ebx, ebx
        jbe public_48b61c
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ecx+ebx]
        push edx
        push ecx
        call dword ptr ds : [public_5c709c]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_48b61c
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c706c]
        public_48b61c : nop
        lea edi, ss:[ebp+0x35C]
        mov ecx, edi
        call public_42cc50
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c707c]
        mov ecx, edi
        call public_42cc30
        mov ecx, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0x348]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        lea ecx, ss:[ebp+0x37C]
        mov dword ptr ss : [ebp+0x348], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x24], 3
        call dword ptr ds : [public_5c6098]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        call public_42cc50
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_48b6a3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_48b69a
        cmp cl, 0xFF
        je public_48b69a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_48b6a3
        public_48b69a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_48b6a3 : nop
        lea ecx, ss:[ebp+0x32C]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ss : [esp+0x24], 0
        call public_576010
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x48b510)
    }
}

#undef public_48b587
#undef public_48b5de
#undef public_48b5e7
#undef public_48b61c
#undef public_48b69a
#undef public_48b6a3
