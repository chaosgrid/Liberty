#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4120d0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4880f0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c70);

#define public_488101 _public_488101
#define public_48811a _public_48811a
#define public_488190 _public_488190
#define public_4881a3 _public_4881a3
#define public_4881c0 _public_4881c0

PROC_DECLARE(0x4880f0, internal_4880f0, public_4880f0);
extern "C" NAKED register_t __cdecl internal_4880f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x344]
        test eax, eax
        jne public_488101
        xor edx, edx
        jmp public_48811a
        public_488101 : nop
        mov ecx, dword ptr ds : [esi+0x348]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_48811a : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jl public_4881c0
        cmp eax, edx
        jge public_4881c0
        mov edx, dword ptr ds : [esi+0x344]
        lea ecx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [edx+ecx*4]
        xor ecx, ecx
        mov cl, byte ptr ds : [eax+0x201]
        push ecx
        push eax
        call public_5b2c70
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x330]
        push edx
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x5DC]
        lea ecx, ds:[esi+0x5DC]
        add esp, 0xC
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi+0xE98]
        lea ecx, ds:[esi+0xE98]
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4881a3
        push edi
        lea ebx, ds:[ebx]
        public_488190 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_488190
        pop edi
        public_4881a3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        push 1
        call public_4120d0
        add esp, 4
        pop esi
        ret 4
        public_4881c0 : nop
        push eax
        push 0x502
/*FIXUP push offset public_5d1e40 @0x4881c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov ecx, 0x100001
/*FIXUP push offset public_5d226c @0x4881d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d226c
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4880f0)
    }
}

#undef public_488101
#undef public_48811a
#undef public_488190
#undef public_4881a3
#undef public_4881c0
