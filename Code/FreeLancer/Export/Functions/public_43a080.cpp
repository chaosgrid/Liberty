#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43a080);
CLANG_FORWARD_PROC_SYMBOL(public_43a140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43a0b0 _public_43a0b0
#define public_43a0d6 _public_43a0d6
#define public_43a0f8 _public_43a0f8
#define public_43a105 _public_43a105
#define public_43a123 _public_43a123

PROC_DECLARE(0x43a080, internal_43a080, public_43a080);
extern "C" NAKED register_t __cdecl internal_43a080()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x1C], ebp
        call public_432240
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_43a0b0
        mov esi, dword ptr ds : [eax+0x10]
        jmp public_43a0d6
        mov edi, edi
        public_43a0b0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43a0ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43a0c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor esi, esi
        public_43a0d6 : nop
        mov al, byte ptr ds : [edi+0x5A]
        test al, al
        jne public_43a0f8
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_43a0f8
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ebp
        call dword ptr ds : [edx+0xA0]
        public_43a0f8 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_43a105
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_43a105 : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        je public_43a123
        mov ecx, edi
        call public_43a140
        push edi
        call public_5b7e1d
        add esp, 4
        public_43a123 : nop
        pop edi
        mov dword ptr ds : [esi+4], 0
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x43a080)
    }
}

#undef public_43a0b0
#undef public_43a0d6
#undef public_43a0f8
#undef public_43a105
#undef public_43a123
