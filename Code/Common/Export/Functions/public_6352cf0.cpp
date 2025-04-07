#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352b30);
CLANG_FORWARD_PROC_SYMBOL(public_6352cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6352e20);
CLANG_FORWARD_JUMP_SYMBOL(public_639807b);

#define public_6352d2b _public_6352d2b
#define public_6352d54 _public_6352d54
#define public_6352db9 _public_6352db9
#define public_6352dce _public_6352dce
#define public_6352ddc _public_6352ddc
#define public_6352e02 _public_6352e02
#define public_6352e04 _public_6352e04

PROC_DECLARE(0x6352cf0, internal_6352cf0, public_6352cf0);
extern "C" NAKED register_t __cdecl internal_6352cf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639807b @0x6352cf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639807b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x81C
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x110]
        cmp dword ptr ds : [edi+0x70], eax
        jne public_6352d2b
        mov eax, 4
        jmp public_6352e04
        public_6352d2b : nop
        mov ecx, edi
        mov dword ptr ds : [edi+0x70], eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x824], 0
        mov dword ptr ss : [esp+0x10], 0x14
        mov dword ptr ss : [esp+0x830], 0
        xor ebx, ebx
        public_6352d54 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        movsx esi, word ptr ds : [ecx+edx*4+0x32]
        push 1
        call public_6352e20
        movsx eax, word ptr ds : [eax+0x1A]
        lea ecx, ss:[esp+0xC]
        lea eax, ds:[eax+esi*4]
        push ecx
        call dword ptr ds : [eax*4+public_658ab4c]
        mov esi, eax
        add esp, 4
        cmp esi, 1
        je public_6352dce
        mov edx, dword ptr ds : [edi+0x14]
        and edx, 0xFFFF7FFF
        or edx, 0x4000
        sub eax, 2
        mov dword ptr ds : [edi+0x14], edx
        je public_6352ddc
        dec eax
        je public_6352db9
        mov dword ptr ds : [0], 0
        mov ecx, dword ptr ss : [esp+0xC]
        jmp public_6352d54
        public_6352db9 : nop
        lea ecx, ss:[esp+0xC]
        call public_6352b30
        inc ebx
        cmp ebx, 2
        jge public_6352ddc
        mov ecx, dword ptr ss : [esp+0xC]
        jmp public_6352d54
        public_6352dce : nop
        and dword ptr ds : [edi+0x14], 0xFFFF3FFF
        mov eax, 1
        jmp public_6352e04
        public_6352ddc : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, eax
        and ecx, 0x3000
        cmp ecx, 0x1000
        je public_6352e02
        and eax, 0x3C0000
        cmp eax, 0x100000
        je public_6352e02
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        public_6352e02 : nop
        mov eax, esi
        public_6352e04 : nop
        mov ecx, dword ptr ss : [esp+0x828]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x828
        ret 
        UNREACHABLE_TRAP(0x6352cf0)
    }
}

#undef public_6352d2b
#undef public_6352d54
#undef public_6352db9
#undef public_6352dce
#undef public_6352ddc
#undef public_6352e02
#undef public_6352e04
