#include "Server-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6d62769);

#define public_6d1f3b8 _public_6d1f3b8
#define public_6d1f3c8 _public_6d1f3c8
#define public_6d1f3db _public_6d1f3db
#define public_6d1f412 _public_6d1f412
#define public_6d1f427 _public_6d1f427
#define public_6d1f43b _public_6d1f43b
#define public_6d1f457 _public_6d1f457
#define public_6d1f473 _public_6d1f473
#define public_6d1f48f _public_6d1f48f
#define public_6d1f4ab _public_6d1f4ab
#define public_6d1f4b5 _public_6d1f4b5

PROC_DECLARE(0x6d1f360, internal_6d1f360, public_6d1f360);
extern "C" NAKED register_t __cdecl internal_6d1f360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62769 @0x6d1f362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62769
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        push esi
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_6d64c68]
        mov al, byte ptr ds : [esi+0xC]
        xor edx, edx
        add esi, 0xC
        lea ebx, ds:[edi+0xC]
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edx
        mov ecx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, ecx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], edx
        jae public_6d1f3b8
        mov ebp, eax
        public_6d1f3b8 : nop
        cmp ebx, esi
        jne public_6d1f427
        cmp ebp, edx
        mov esi, eax
        jbe public_6d1f3c8
        call dword ptr ds : [public_6d64b04]
        public_6d1f3c8 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d64ae8]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_6d1f3db
        mov esi, eax
        public_6d1f3db : nop
        test esi, esi
        jbe public_6d1f412
        mov edx, dword ptr ds : [ebx+4]
        sub eax, esi
        add ebp, edx
        push eax
        lea eax, ds:[esi+ebp]
        push eax
        push ebp
        call dword ptr ds : [public_6d64c90]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d1f412
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b88]
        public_6d1f412 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d64ae8]
        mov dword ptr ds : [edi], offset public_6d68ab0
        mov eax, edi
        jmp public_6d1f4b5
        public_6d1f427 : nop
        cmp ebp, edx
        jbe public_6d1f473
        cmp ebp, ecx
        jne public_6d1f473
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_6d1f43b
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d1f43b : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d1f473
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d1f457
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d1f457 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        mov dword ptr ds : [edi], offset public_6d68ab0
        mov eax, edi
        jmp public_6d1f4b5
        public_6d1f473 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d1f4ab
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6d1f48f
        mov esi, dword ptr ds : [public_6d64b7c]
        public_6d1f48f : nop
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
        call dword ptr ds : [public_6d64b88]
        public_6d1f4ab : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_6d68ab0
        public_6d1f4b5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d1f360)
    }
}

#undef public_6d1f3b8
#undef public_6d1f3c8
#undef public_6d1f3db
#undef public_6d1f412
#undef public_6d1f427
#undef public_6d1f43b
#undef public_6d1f457
#undef public_6d1f473
#undef public_6d1f48f
#undef public_6d1f4ab
#undef public_6d1f4b5
