#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_JUMP_SYMBOL(public_6394871);

#define public_62baf55 _public_62baf55
#define public_62baf65 _public_62baf65
#define public_62baf78 _public_62baf78
#define public_62bafae _public_62bafae
#define public_62bafc9 _public_62bafc9
#define public_62bafdd _public_62bafdd
#define public_62baff9 _public_62baff9
#define public_62bb023 _public_62bb023
#define public_62bb03f _public_62bb03f
#define public_62bb05c _public_62bb05c

PROC_DECLARE(0x62baf00, internal_62baf00, public_62baf00);
extern "C" NAKED register_t __cdecl internal_62baf00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394871 @0x62baf02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394871
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_62bb05c
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov ecx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        jae public_62baf55
        mov ebx, eax
        public_62baf55 : nop
        cmp ebp, esi
        jne public_62bafc9
        cmp ebx, edi
        mov esi, eax
        jbe public_62baf65
        call dword ptr ds : [public_63991c4]
        public_62baf65 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_62baf78
        mov esi, eax
        public_62baf78 : nop
        cmp esi, edi
        jbe public_62bafae
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push edi
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62bafae
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_62bafae : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_62bafc9 : nop
        cmp ebx, edi
        jbe public_62bb023
        cmp ebx, ecx
        jne public_62bb023
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_62bafdd
        mov eax, dword ptr ds : [public_63991d0]
        public_62bafdd : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62bb023
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_62baff9
        mov eax, dword ptr ds : [public_63991d0]
        public_62baff9 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_62bb023 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62bb05c
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_62bb03f
        mov esi, dword ptr ds : [public_63991d0]
        public_62bb03f : nop
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
        public_62bb05c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62baf00)
    }
}

#undef public_62baf55
#undef public_62baf65
#undef public_62baf78
#undef public_62bafae
#undef public_62bafc9
#undef public_62bafdd
#undef public_62baff9
#undef public_62bb023
#undef public_62bb03f
#undef public_62bb05c
