#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ab2);

#define public_6d26da0 _public_6d26da0
#define public_6d26db3 _public_6d26db3
#define public_6d26dc1 _public_6d26dc1
#define public_6d26dc9 _public_6d26dc9
#define public_6d26e2f _public_6d26e2f
#define public_6d26e7e _public_6d26e7e
#define public_6d26eb1 _public_6d26eb1

PROC_DECLARE(0x6d26d60, internal_6d26d60, public_6d26d60);
extern "C" NAKED register_t __cdecl internal_6d26d60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62ab2 @0x6d26d68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ab2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edi+4]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6d26db3
        cmp dword ptr ds : [eax+4], 0xFFFFFFFF
        jne public_6d26db3
        mov esi, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6d26db3
        lea esp, ss:[esp]
        public_6d26da0 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [eax+8]
        jb public_6d26db3
        inc edx
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6d26da0
        public_6d26db3 : nop
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx+4]
        test esi, esi
        jne public_6d26dc1
        xor eax, eax
        jmp public_6d26dc9
        public_6d26dc1 : nop
        mov eax, dword ptr ds : [edx+8]
        sub eax, esi
        sar eax, 2
        public_6d26dc9 : nop
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, eax
        jb public_6d26e7e
        mov al, byte ptr ss : [esp+0x48]
        push 0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x10], al
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d68f60
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d26e2f
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6d68f60
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_6d26e2f : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x4C], offset public_6d66ee4
        call dword ptr ds : [public_6d64c5c]
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [public_6d64ad0]
/*FIXUP push offset public_6d72fc0 @0x6d26e62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x20]
        push eax
        mov byte ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x24], offset public_6d68ab0
        call public_6d601a2
        public_6d26e7e : nop
        mov edx, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx+ecx*4]
        test ecx, ecx
        jne public_6d26eb1
        mov ecx, dword ptr ds : [public_6d68a48]
        mov eax, dword ptr ss : [esp+0x48]
        pop edi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6d68a4c]
        pop esi
        mov dword ptr ds : [eax+4], edx
        pop ebp
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 8
        public_6d26eb1 : nop
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ecx]
        push edi
        push esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6d26d60)
    }
}

#undef public_6d26da0
#undef public_6d26db3
#undef public_6d26dc1
#undef public_6d26dc9
#undef public_6d26e2f
#undef public_6d26e7e
#undef public_6d26eb1
