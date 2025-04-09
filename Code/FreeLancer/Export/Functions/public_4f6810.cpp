#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_420d70);
CLANG_FORWARD_PROC_SYMBOL(public_420f30);
CLANG_FORWARD_PROC_SYMBOL(public_420fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4f6ac0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf3fb);

#define public_4f6868 _public_4f6868
#define public_4f686a _public_4f686a
#define public_4f68f9 _public_4f68f9

PROC_DECLARE(0x4f6810, internal_4f6810, public_4f6810);
extern "C" NAKED register_t __cdecl internal_4f6810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf3fb @0x4f6812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf3fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebp
        push esi
        push edi
        push 0x18
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        test esi, esi
        mov dword ptr ss : [esp+0x40], 0
        je public_4f6868
        lea edi, ds:[esi+4]
        mov ecx, edi
        call public_420d40
        mov dword ptr ds : [esi], offset public_5d98ec
        mov dword ptr ds : [edi], offset public_5d98e4
        mov dword ptr ds : [esi+0x14], 1
        mov ebp, esi
        jmp public_4f686a
        public_4f6868 : nop
        xor ebp, ebp
        public_4f686a : nop
        sub esp, 0x24
        mov edi, esp
        lea eax, ss:[esp+0x38]
/*FIXUP push offset public_5d98d0 @0x4f6873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d98d0
        mov dword ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x40], 0
        mov ecx, 9
        lea esi, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        rep movsd
        call public_4f6ac0
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        call dword ptr ds : [public_5c65e0]
        add esp, 0x38
        test al, al
        je public_4f68f9
        mov eax, dword ptr ss : [esp+0x58]
        push 0
        lea ecx, ss:[esp+0x1C]
        lea esi, ss:[ebp+4]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax], ebp
        call public_420f30
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov ecx, esi
        call public_420d70
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        mov ecx, esi
        call public_420fd0
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        public_4f68f9 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0x38
        ret 0x14
        UNREACHABLE_TRAP(0x4f6810)
    }
}

#undef public_4f6868
#undef public_4f686a
#undef public_4f68f9
