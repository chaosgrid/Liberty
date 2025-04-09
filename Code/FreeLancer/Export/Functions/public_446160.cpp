#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d830);
CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_446160);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9938);

#define public_4461b3 _public_4461b3
#define public_4461ed _public_4461ed
#define public_4461fb _public_4461fb
#define public_446240 _public_446240

PROC_DECLARE(0x446160, internal_446160, public_446160);
extern "C" NAKED register_t __cdecl internal_446160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9938 @0x446162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9938
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        xor eax, eax
        cmp edi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_446240
        mov dl, byte ptr ss : [esp+0x30]
        push esi
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov esi, dword ptr ds : [edi+0x18]
        cmp esi, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        je public_4461ed
        push ebx
        mov ebx, dword ptr ds : [public_5c69a0]
        public_4461b3 : nop
        lea ecx, ss:[esp+0x10]
        call ebx
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_40d830
        mov eax, dword ptr ds : [edi+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_4461b3
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        pop ebx
        public_4461ed : nop
        mov edi, dword ptr ds : [edi+8]
        cmp edi, eax
        pop esi
        jne public_4461fb
        mov edi, dword ptr ds : [public_5c7078]
        public_4461fb : nop
        push eax
        lea edx, ds:[ecx+0x20]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov eax, dword ptr ds : [public_5c6dd8]
        add ecx, 0x4C
        push ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        call public_41c540
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+0x30], eax
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call public_5b7e1d
        add esp, 0x20
        pop edi
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        mov edi, edi
        public_446240 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x86
/*FIXUP push offset public_5cbc74 @0x446250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc74
        mov eax, 0x100001
/*FIXUP push offset public_5cbca4 @0x44625a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbca4
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0x14
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x446160)
    }
}

#undef public_4461b3
#undef public_4461ed
#undef public_4461fb
#undef public_446240
