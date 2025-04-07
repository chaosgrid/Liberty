#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1b2c);

#define public_6f9e63e _public_6f9e63e
#define public_6f9e646 _public_6f9e646
#define public_6f9e64c _public_6f9e64c
#define public_6f9e667 _public_6f9e667
#define public_6f9e66f _public_6f9e66f
#define public_6f9e679 _public_6f9e679

PROC_DECLARE(0x6f9e5f0, internal_6f9e5f0, public_6f9e5f0);
extern "C" NAKED register_t __cdecl internal_6f9e5f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1b2c @0x6f9e5f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1b2c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0xC], edi
        call dword ptr ds : [public_6fb3084]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], ecx
        mov dl, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [edi+0x20], dl
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 0
        jne public_6f9e63e
        xor eax, eax
        jmp public_6f9e646
        public_6f9e63e : nop
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, ecx
        sar eax, 2
        public_6f9e646 : nop
        test eax, eax
        jge public_6f9e64c
        xor eax, eax
        public_6f9e64c : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp eax, edx
        je public_6f9e679
        public_6f9e667 : nop
        test ecx, ecx
        je public_6f9e66f
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f9e66f : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f9e667
        public_6f9e679 : nop
        mov dword ptr ds : [edi+0x28], ecx
        mov dword ptr ds : [edi+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], offset public_6fbc700
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f9e5f0)
    }
}

#undef public_6f9e63e
#undef public_6f9e646
#undef public_6f9e64c
#undef public_6f9e667
#undef public_6f9e66f
#undef public_6f9e679
