#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6be0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7190);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab22b);

#define public_6ed5751 _public_6ed5751
#define public_6ed5753 _public_6ed5753
#define public_6ed57da _public_6ed57da
#define public_6ed5803 _public_6ed5803
#define public_6ed5821 _public_6ed5821
#define public_6ed5841 _public_6ed5841
#define public_6ed58b6 _public_6ed58b6
#define public_6ed58bd _public_6ed58bd
#define public_6ed58c4 _public_6ed58c4

PROC_DECLARE(0x6ed5720, internal_6ed5720, public_6ed5720);
extern "C" NAKED register_t __cdecl internal_6ed5720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab22b @0x6ed5722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab22b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        xor esi, esi
        cmp ebx, esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_6ed5751
        lea eax, ds:[ebx+0x48]
        jmp public_6ed5753
        public_6ed5751 : nop
        xor eax, eax
        public_6ed5753 : nop
        push eax
        mov ecx, ebp
        call public_6eb7190
        mov dword ptr ss : [ebp+0x11C], esi
        mov byte ptr ss : [ebp+0x120], 0
        mov eax, dword ptr ds : [public_6fb3064]
        mov dword ptr ss : [ebp+0x118], eax
        mov dword ptr ss : [ebp+0x160], offset public_6fb61e8
        mov byte ptr ss : [ebp+0x164], 0
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [ebp+0x168], ecx
        lea edi, ss:[ebp+0x16C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [public_6fb309c]
        mov dword ptr ss : [ebp], offset public_6fb61e0
        mov dword ptr ss : [ebp+0x118], offset public_6fb61d4
        mov dword ptr ss : [ebp+0x160], offset public_6fb61ac
        mov al, byte ptr ds : [ebx+0x468]
        test al, al
        mov byte ptr ss : [ebp+0x544], al
        je public_6ed57da
        lea esi, ds:[ebx+0x90]
        mov ecx, 0xF6
        rep movsd
        public_6ed57da : nop
        lea eax, ss:[ebp+0xD8]
        push eax
        call dword ptr ds : [public_6fb3684]
        lea esi, ds:[ebx+8]
        add esp, 4
        test esi, esi
        mov dword ptr ss : [ebp+4], eax
        jne public_6ed5803
        mov dword ptr ss : [ebp+0x11C], esi
        mov byte ptr ss : [ebp+0x120], 0
        jmp public_6ed5841
        public_6ed5803 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ss:[ebp+0x120]
        jb public_6ed5821
        mov eax, 0x3F
        public_6ed5821 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x120], 0
        mov dword ptr ss : [ebp+0x11C], eax
        public_6ed5841 : nop
        test dword ptr ss : [ebp+4], 0x3FFFFFFF
        je public_6ed58bd
        mov ebx, dword ptr ds : [ebx+0x46C]
        cmp ebx, 0xFFFFFFFF
        je public_6ed58bd
        lea eax, ss:[ebp+0xD8]
        push 0xC
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], ebx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        test esi, esi
        mov byte ptr ss : [esp+0x24], 1
        je public_6ed58b6
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6eb6be0
        mov dword ptr ds : [esi], offset public_6fb61a0
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        lea edi, ds:[esi+8]
        push edi
        mov byte ptr ss : [esp+0x2C], 2
        call dword ptr ds : [public_6fb3438]
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        call dword ptr ds : [public_6fb3434]
        add esp, 0x10
        mov dword ptr ss : [ebp+8], esi
        jmp public_6ed58c4
        public_6ed58b6 : nop
        xor esi, esi
        mov dword ptr ss : [ebp+8], esi
        jmp public_6ed58c4
        public_6ed58bd : nop
        mov dword ptr ss : [ebp+8], 0
        public_6ed58c4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6ed5720)
    }
}

#undef public_6ed5751
#undef public_6ed5753
#undef public_6ed57da
#undef public_6ed5803
#undef public_6ed5821
#undef public_6ed5841
#undef public_6ed58b6
#undef public_6ed58bd
#undef public_6ed58c4
