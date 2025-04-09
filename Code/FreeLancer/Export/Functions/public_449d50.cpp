#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449d50);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9b79);

#define public_449d80 _public_449d80
#define public_449dd4 _public_449dd4
#define public_449de1 _public_449de1
#define public_449df4 _public_449df4

PROC_DECLARE(0x449d50, internal_449d50, public_449d50);
extern "C" NAKED register_t __cdecl internal_449d50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9b79 @0x449d52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9b79
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x40]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        xor edi, edi
        lea ebx, ds:[ecx+0x518]
        lea esp, ss:[esp]
        public_449d80 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_449dd4
        mov esi, dword ptr ds : [eax+0x1B8]
        test esi, esi
        je public_449dd4
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c61d4]
        mov eax, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_5c61d0]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebp
        push ecx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        je public_449de1
        call dword ptr ds : [public_5c61cc]
        public_449dd4 : nop
        inc edi
        add ebx, 4
        cmp edi, 0x40
        jl public_449d80
        xor eax, eax
        jmp public_449df4
        public_449de1 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx+edi*4+0x518]
        call dword ptr ds : [public_5c61cc]
        mov eax, esi
        public_449df4 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x449d50)
    }
}

#undef public_449d80
#undef public_449dd4
#undef public_449de1
#undef public_449df4
