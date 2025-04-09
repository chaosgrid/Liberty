#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_4316c0);
CLANG_FORWARD_PROC_SYMBOL(public_432180);
CLANG_FORWARD_PROC_SYMBOL(public_4323b0);
CLANG_FORWARD_PROC_SYMBOL(public_4323f0);
CLANG_FORWARD_PROC_SYMBOL(public_4324c0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8fb2);

#define public_431739 _public_431739
#define public_431742 _public_431742
#define public_431760 _public_431760
#define public_431777 _public_431777
#define public_4317f4 _public_4317f4
#define public_4317f8 _public_4317f8
#define public_43181c _public_43181c

PROC_DECLARE(0x4316c0, internal_4316c0, public_4316c0);
extern "C" NAKED register_t __cdecl internal_4316c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8fb2 @0x4316c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8fb2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x3C]
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 2
        call public_432180
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 8
        cmp eax, ebx
        je public_431742
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_431739
        cmp cl, 0xFF
        je public_431739
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_431742
        public_431739 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_431742 : nop
        push ebp
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebp, ds:[edi+0x20]
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x10], eax
        je public_431777
        public_431760 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_4324c0
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_431760
        public_431777 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        lea esi, ds:[edi+0xC]
        add esp, 4
        cmp ecx, ebx
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        pop ebp
        je public_4317f4
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_53e430
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_4317f4
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_4317f4
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, esi
        call public_4323b0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_43181c
        public_4317f4 : nop
        cmp eax, edi
        je public_43181c
        public_4317f8 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_4323f0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_41b640
        cmp dword ptr ss : [esp+0xC], edi
        jne public_4317f8
        public_43181c : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4316c0)
    }
}

#undef public_431739
#undef public_431742
#undef public_431760
#undef public_431777
#undef public_4317f4
#undef public_4317f8
#undef public_43181c
