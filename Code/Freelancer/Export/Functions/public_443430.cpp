#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443430);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9721);

#define public_443496 _public_443496
#define public_4434a6 _public_4434a6
#define public_4434b9 _public_4434b9
#define public_4434f0 _public_4434f0
#define public_443501 _public_443501
#define public_443515 _public_443515
#define public_443531 _public_443531
#define public_443545 _public_443545
#define public_443561 _public_443561
#define public_44357e _public_44357e
#define public_443582 _public_443582
#define public_4435c3 _public_4435c3

PROC_DECLARE(0x443430, internal_443430, public_443430);
extern "C" NAKED register_t __cdecl internal_443430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9721 @0x443432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9721
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        xor edx, edx
        cmp edi, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_4435c3
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov cl, byte ptr ds : [esi+1]
        mov byte ptr ds : [edi+1], cl
        mov al, byte ptr ds : [esi+4]
        add esi, 4
        lea ebp, ds:[edi+4]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov ecx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        jae public_443496
        mov ebx, eax
        public_443496 : nop
        cmp ebp, esi
        jne public_443501
        cmp ebx, edx
        mov esi, eax
        jbe public_4434a6
        call dword ptr ds : [public_5c7064]
        public_4434a6 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_4434b9
        mov esi, eax
        public_4434b9 : nop
        test esi, esi
        jbe public_4434f0
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4434f0
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_4434f0 : nop
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c707c]
        jmp public_443582
        public_443501 : nop
        cmp ebx, edx
        jbe public_443545
        cmp ebx, ecx
        jne public_443545
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_443515
        mov eax, dword ptr ds : [public_5c7078]
        public_443515 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_443545
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_443531
        mov eax, dword ptr ds : [public_5c7078]
        public_443531 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_443582
        public_443545 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44357e
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_443561
        mov esi, dword ptr ds : [public_5c7078]
        public_443561 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_44357e : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_443582 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov cl, byte ptr ds : [eax+0x20]
        mov byte ptr ds : [edi+0x20], cl
        lea edx, ds:[eax+0x24]
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[edi+0x24]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [eax+0x30]
        pop esi
        mov dword ptr ds : [edi+0x30], ecx
        mov edx, dword ptr ds : [eax+0x30]
        pop ebp
        mov dword ptr ds : [edi+0x30], edx
        pop ebx
        public_4435c3 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x443430)
    }
}

#undef public_443496
#undef public_4434a6
#undef public_4434b9
#undef public_4434f0
#undef public_443501
#undef public_443515
#undef public_443531
#undef public_443545
#undef public_443561
#undef public_44357e
#undef public_443582
#undef public_4435c3
