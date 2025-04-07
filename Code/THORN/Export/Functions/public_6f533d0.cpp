#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f533d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53460);
CLANG_FORWARD_PROC_SYMBOL(public_6f53500);

#define public_6f533e7 _public_6f533e7
#define public_6f533ea _public_6f533ea
#define public_6f5340d _public_6f5340d
#define public_6f53415 _public_6f53415
#define public_6f53435 _public_6f53435
#define public_6f5343c _public_6f5343c

PROC_DECLARE(0x6f533d0, internal_6f533d0, public_6f533d0);
extern "C" NAKED register_t __cdecl internal_6f533d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push edi
        je public_6f533e7
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax+4]
        jmp public_6f533ea
        public_6f533e7 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6f533ea : nop
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        call public_6f53500
        add esp, 8
        test eax, eax
        jl public_6f5340d
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop ebp
        mov dword ptr ds : [ecx], 1
        mov dword ptr ds : [ecx+4], eax
        pop ebx
        ret 
        public_6f5340d : nop
        push esi
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f5343c
        public_6f53415 : nop
        push edi
        push esi
        call public_6f53500
        add esp, 8
        test eax, eax
        jl public_6f53435
        lea ecx, ds:[edi+0x28]
        push ecx
/*FIXUP push offset public_6f612a0 @0x6f53427*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f612a0
        push ebp
        call public_6f51170
        add esp, 0xC
        public_6f53435 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6f53415
        public_6f5343c : nop
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        push ebx
        mov dword ptr ds : [esi], 0
        call public_6f53460
        add esp, 8
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f533d0)
    }
}

#undef public_6f533e7
#undef public_6f533ea
#undef public_6f5340d
#undef public_6f53415
#undef public_6f53435
#undef public_6f5343c
