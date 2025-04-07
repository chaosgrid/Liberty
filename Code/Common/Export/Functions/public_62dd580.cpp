#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dd580);
CLANG_FORWARD_PROC_SYMBOL(public_62dda10);
CLANG_FORWARD_PROC_SYMBOL(public_62de050);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62dd5a3 _public_62dd5a3
#define public_62dd602 _public_62dd602
#define public_62dd63e _public_62dd63e
#define public_62dd652 _public_62dd652
#define public_62dd690 _public_62dd690
#define public_62dd692 _public_62dd692
#define public_62dd69e _public_62dd69e
#define public_62dd6c2 _public_62dd6c2
#define public_62dd6c4 _public_62dd6c4
#define public_62dd6ea _public_62dd6ea
#define public_62dd6ec _public_62dd6ec
#define public_62dd6f9 _public_62dd6f9
#define public_62dd716 _public_62dd716
#define public_62dd71b _public_62dd71b
#define public_62dd732 _public_62dd732
#define public_62dd751 _public_62dd751

PROC_DECLARE(0x62dd580, internal_62dd580, public_62dd580);
extern "C" NAKED register_t __cdecl internal_62dd580()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x218]
        push edi
        lea edi, ds:[esi+0x218]
        xor ebx, ebx
        cmp eax, ebx
        je public_62dd5a3
        push ebx
        mov ecx, edi
        call public_6341610
        public_62dd5a3 : nop
        mov dword ptr ds : [esi+0x214], ebx
        lea eax, ds:[esi+0x22C]
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        lea edx, ss:[esp+0x1C]
        lea ebp, ds:[esi+0x220]
        lea ecx, ds:[esi+0x23C]
        push edx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp], ebx
        push ecx
        mov dword ptr ds : [ecx], 0x3F800000
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x240], ebx
        call public_62dda10
        test eax, eax
        jne public_62dd652
        mov al, byte ptr ds : [esi+0x574]
        mov byte ptr ds : [esi+0x238], al
        cmp dword ptr ds : [edi], ebx
        je public_62dd602
        push ebx
        mov ecx, edi
        call public_6341610
        public_62dd602 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x214], 2
        mov dword ptr ds : [esi+0x240], ecx
        mov esi, dword ptr ds : [esi+0x1C0]
        add esi, 0xF0
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        je public_62dd63e
        mov edx, dword ptr ds : [esi-8]
        lea ecx, ds:[esi-8]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_62dd63e : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_62dd652 : nop
        test dword ptr ds : [esi+0x1C4], 0x130000
        je public_62dd751
        mov eax, dword ptr ds : [esi+0x64]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebx
        call public_62de050
        test eax, eax
        jne public_62dd751
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_62dd690
        add eax, 8
        jmp public_62dd692
        public_62dd690 : nop
        xor eax, eax
        public_62dd692 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62dd69e
        push eax
        mov ecx, edi
        call public_6341610
        public_62dd69e : nop
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov dword ptr ds : [esi+0x240], 4
        mov byte ptr ss : [esp+0x13], bl
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62dd6c2
        lea ecx, ds:[eax-8]
        jmp public_62dd6c4
        public_62dd6c2 : nop
        xor ecx, ecx
        public_62dd6c4 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x13]
        push edx
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_62dd6f9
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62dd6f9
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        je public_62dd6ea
        lea ecx, ds:[edi-8]
        jmp public_62dd6ec
        public_62dd6ea : nop
        xor ecx, ecx
        public_62dd6ec : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0x88]
        public_62dd6f9 : nop
        mov eax, dword ptr ds : [esi+0x1C0]
        mov ecx, dword ptr ds : [eax+8]
        cmp byte ptr ss : [esp+0x13], bl
        je public_62dd716
        test dword ptr ss : [esp+0x18], 0x7F0000
        jne public_62dd716
        xor eax, eax
        jmp public_62dd71b
        public_62dd716 : nop
        mov eax, 1
        public_62dd71b : nop
        cmp al, bl
        mov byte ptr ds : [esi+0x244], al
        jne public_62dd732
        lea edx, ss:[esp+0x20]
        push edx
        add ecx, 0x18
        call public_62e8ce0
        public_62dd732 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ds : [esi+0x214], 1
        mov dword ptr ss : [ebp+8], edx
        public_62dd751 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62dd580)
    }
}

#undef public_62dd5a3
#undef public_62dd602
#undef public_62dd63e
#undef public_62dd652
#undef public_62dd690
#undef public_62dd692
#undef public_62dd69e
#undef public_62dd6c2
#undef public_62dd6c4
#undef public_62dd6ea
#undef public_62dd6ec
#undef public_62dd6f9
#undef public_62dd716
#undef public_62dd71b
#undef public_62dd732
#undef public_62dd751
