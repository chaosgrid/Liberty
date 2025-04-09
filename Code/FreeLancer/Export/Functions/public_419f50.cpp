#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419f50);
CLANG_FORWARD_JUMP_SYMBOL(public_5b89c1);

#define public_419fb1 _public_419fb1
#define public_419fc1 _public_419fc1
#define public_419fd4 _public_419fd4
#define public_41a00a _public_41a00a
#define public_41a014 _public_41a014
#define public_41a028 _public_41a028
#define public_41a044 _public_41a044
#define public_41a058 _public_41a058
#define public_41a074 _public_41a074
#define public_41a090 _public_41a090
#define public_41a0d2 _public_41a0d2

PROC_DECLARE(0x419f50, internal_419f50, public_419f50);
extern "C" NAKED register_t __cdecl internal_419f50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b89c1 @0x419f52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b89c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push edi
        mov dword ptr ss : [esp+8], ebx
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_41a0d2
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx], offset public_5c8f4c
        mov cl, byte ptr ds : [eax+4]
        push ebp
        add ebx, 4
        push esi
        lea esi, ds:[eax+4]
        mov byte ptr ds : [ebx], cl
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx]
        mov ebp, ecx
        cmp eax, ebp
        jae public_419fb1
        mov ebp, eax
        public_419fb1 : nop
        cmp ebx, esi
        jne public_41a014
        cmp ebp, edi
        mov esi, eax
        jbe public_419fc1
        call dword ptr ds : [public_5c7064]
        public_419fc1 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_419fd4
        mov esi, eax
        public_419fd4 : nop
        cmp esi, edi
        jbe public_41a00a
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
        push edi
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_41a00a
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_41a00a : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        jmp public_41a090
        public_41a014 : nop
        cmp ebp, edi
        jbe public_41a058
        cmp ebp, ecx
        jne public_41a058
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_41a028
        mov eax, dword ptr ds : [public_5c7078]
        public_41a028 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_41a058
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_41a044
        mov eax, dword ptr ds : [public_5c7078]
        public_41a044 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_41a090
        public_41a058 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_41a090
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_41a074
        mov esi, dword ptr ds : [public_5c7078]
        public_41a074 : nop
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
        public_41a090 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ds:[ecx+0x14]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x14]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x20]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x20]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ecx+0x2C]
        pop esi
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax], offset public_5c8eb4
        pop ebp
        public_41a0d2 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x419f50)
    }
}

#undef public_419fb1
#undef public_419fc1
#undef public_419fd4
#undef public_41a00a
#undef public_41a014
#undef public_41a028
#undef public_41a044
#undef public_41a058
#undef public_41a074
#undef public_41a090
#undef public_41a0d2
