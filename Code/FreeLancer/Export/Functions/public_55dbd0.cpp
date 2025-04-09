#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55dbd0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c17c1);

#define public_55dc24 _public_55dc24
#define public_55dc32 _public_55dc32
#define public_55dc45 _public_55dc45
#define public_55dc7c _public_55dc7c
#define public_55dc89 _public_55dc89
#define public_55dc9d _public_55dc9d
#define public_55dcb9 _public_55dcb9
#define public_55dccd _public_55dccd
#define public_55dceb _public_55dceb
#define public_55dd0b _public_55dd0b
#define public_55dd2c _public_55dd2c

PROC_DECLARE(0x55dbd0, internal_55dbd0, public_55dbd0);
extern "C" NAKED register_t __cdecl internal_55dbd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c17c1 @0x55dbd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c17c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebx
        xor ecx, ecx
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_55dd2c
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx]
        mov ebp, eax
        cmp esi, ebp
        jae public_55dc24
        mov ebp, esi
        public_55dc24 : nop
        cmp ebx, edi
        jne public_55dc89
        cmp ebp, ecx
        jbe public_55dc32
        call dword ptr ds : [public_5c7064]
        public_55dc32 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_55dc45
        mov esi, eax
        public_55dc45 : nop
        test esi, esi
        jbe public_55dc7c
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_5c709c]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55dc7c
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55dc7c : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        jmp public_55dd0b
        public_55dc89 : nop
        cmp ebp, ecx
        jbe public_55dccd
        cmp ebp, eax
        jne public_55dccd
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_55dc9d
        mov eax, dword ptr ds : [public_5c7078]
        public_55dc9d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_55dccd
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_55dcb9
        mov eax, dword ptr ds : [public_5c7078]
        public_55dcb9 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_55dd0b
        public_55dccd : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55dd0b
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_5c7078]
        je public_55dceb
        mov esi, edi
        public_55dceb : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        mov edi, dword ptr ss : [esp+0x28]
        public_55dd0b : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [ebx+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x20], edx
        pop ebp
        public_55dd2c : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x55dbd0)
    }
}

#undef public_55dc24
#undef public_55dc32
#undef public_55dc45
#undef public_55dc7c
#undef public_55dc89
#undef public_55dc9d
#undef public_55dcb9
#undef public_55dccd
#undef public_55dceb
#undef public_55dd0b
#undef public_55dd2c
