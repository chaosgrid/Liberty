#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0af00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6158c);

#define public_6d0afa0 _public_6d0afa0
#define public_6d0afa8 _public_6d0afa8
#define public_6d0afae _public_6d0afae
#define public_6d0afd1 _public_6d0afd1
#define public_6d0afee _public_6d0afee
#define public_6d0affc _public_6d0affc
#define public_6d0b047 _public_6d0b047
#define public_6d0b065 _public_6d0b065

PROC_DECLARE(0x6d0af00, internal_6d0af00, public_6d0af00);
extern "C" NAKED register_t __cdecl internal_6d0af00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6158c @0x6d0af02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6158c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        push esi
        push edi
        lea esi, ds:[ebx+0x14]
        lea edi, ss:[ebp+0x14]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], ecx
        lea edx, ds:[ebx+0x4C]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0x4C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[ebx+0x58]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x58]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [ebp+0x68], ecx
        mov edx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x6C], edx
        mov al, byte ptr ds : [ebx+0x70]
        mov byte ptr ss : [ebp+0x70], al
        mov ecx, dword ptr ds : [ebx+0x74]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6d0afa0
        xor eax, eax
        jmp public_6d0afa8
        public_6d0afa0 : nop
        mov eax, dword ptr ds : [ebx+0x78]
        sub eax, ecx
        sar eax, 5
        public_6d0afa8 : nop
        test eax, eax
        jge public_6d0afae
        xor eax, eax
        public_6d0afae : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov dword ptr ss : [ebp+0x74], eax
        mov ecx, dword ptr ds : [ebx+0x78]
        mov edi, dword ptr ds : [ebx+0x74]
        add esp, 4
        cmp edi, ecx
        mov esi, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_6d0affc
        public_6d0afd1 : nop
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x24], 0
        je public_6d0afee
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d646c4]
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6d0afee : nop
        add esi, 0x20
        add edi, 0x20
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d0afd1
        public_6d0affc : nop
        mov dword ptr ss : [ebp+0x78], esi
        mov dword ptr ss : [ebp+0x7C], esi
        mov cl, byte ptr ds : [ebx+0x80]
        lea esi, ss:[ebp+0x80]
        push 0x10
        mov dword ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], edx
        je public_6d0b065
        public_6d0b047 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[edi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d646c0]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_6d0b047
        public_6d0b065 : nop
        mov al, byte ptr ds : [ebx+0x8C]
        lea esi, ss:[ebp+0x8C]
        push 0x14
        mov byte ptr ss : [esp+0x28], 2
        mov byte ptr ds : [esi], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [ebx+0x90]
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64398]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64380]
        mov al, byte ptr ds : [ebx+0x98]
        mov byte ptr ds : [esi+0xC], al
        mov ecx, dword ptr ds : [ebx+0x9C]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [ebx+0xA0]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [ebx+0xA4]
        mov dword ptr ds : [esi+0x18], eax
        mov cl, byte ptr ds : [ebx+0xA8]
        pop edi
        mov byte ptr ss : [ebp+0xA8], cl
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        mov dword ptr ss : [ebp], offset public_6d65f68
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6d0af00)
    }
}

#undef public_6d0afa0
#undef public_6d0afa8
#undef public_6d0afae
#undef public_6d0afd1
#undef public_6d0afee
#undef public_6d0affc
#undef public_6d0b047
#undef public_6d0b065
