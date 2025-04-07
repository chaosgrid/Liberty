#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_630abd0);
CLANG_FORWARD_PROC_SYMBOL(public_630b0d0);
CLANG_FORWARD_PROC_SYMBOL(public_630b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_630b220);
CLANG_FORWARD_PROC_SYMBOL(public_630b270);
CLANG_FORWARD_PROC_SYMBOL(public_630b6e0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_639624a);

#define public_630ad77 _public_630ad77
#define public_630adc8 _public_630adc8
#define public_630adf5 _public_630adf5
#define public_630ae3d _public_630ae3d
#define public_630ae57 _public_630ae57
#define public_630ae76 _public_630ae76
#define public_630ae9d _public_630ae9d
#define public_630aec4 _public_630aec4
#define public_630af0e _public_630af0e
#define public_630af10 _public_630af10
#define public_630af35 _public_630af35
#define public_630af3c _public_630af3c
#define public_630af3e _public_630af3e
#define public_630af57 _public_630af57
#define public_630af6b _public_630af6b
#define public_630af87 _public_630af87
#define public_630af9b _public_630af9b
#define public_630afb0 _public_630afb0
#define public_630b04f _public_630b04f
#define public_630b060 _public_630b060
#define public_630b071 _public_630b071
#define public_630b094 _public_630b094

PROC_DECLARE(0x630ad30, internal_630ad30, public_630ad30);
extern "C" NAKED register_t __cdecl internal_630ad30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639624a @0x630ad38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639624a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15F0
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_6399028]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        mov dword ptr ds : [public_63fcf38], ecx
        push edi
        mov dword ptr ds : [eax], offset _public_630abd0
        mov eax, dword ptr ss : [esp+0x1610]
        xor edi, edi
        cmp eax, edi
        je public_630ad77
        mov dword ptr ds : [public_63ed214], eax
        public_630ad77 : nop
        lea ecx, ss:[esp+0x94]
        mov dword ptr ds : [public_63fcf30], edi
        mov dword ptr ds : [public_63fcf34], edi
        call public_630f660
        mov edx, dword ptr ss : [esp+0x160C]
        push edi
        push edx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x160C], edi
        call public_630f9b0
        test al, al
        je public_630afb0
        lea ecx, ss:[esp+0x94]
        call public_6310070
        test al, al
        je public_630afb0
        push ebp
/*FIXUP public_630adc8 : nop
        push offset public_63a348c @0x630adc8*/
  FIXUP public_630adc8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a348c
        lea ecx, ss:[esp+0x9C]
        call public_63103c0
        test al, al
        je public_630af9b
        lea ecx, ss:[esp+0x98]
        call public_6310170
        test al, al
        je public_630af9b
/*FIXUP public_630adf5 : nop
        push offset public_63a3488 @0x630adf5*/
  FIXUP public_630adf5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3488
        lea ecx, ss:[esp+0x9C]
        call public_6310410
        test al, al
        je public_630af87
        push edi
        lea ecx, ss:[esp+0x9C]
        or ebx, 0xFFFFFFFF
        mov ebp, 0x64
        call public_6310a30
        mov esi, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], 0
        jne public_630ae3d
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], 0
        jmp public_630ae76
        public_630ae3d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_630ae57
        mov eax, 0x7F
        public_630ae57 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x18], 0
        mov dword ptr ss : [esp+0x14], eax
        xor edi, edi
        public_630ae76 : nop
        push 1
        lea ecx, ss:[esp+0x9C]
        call public_6310560
        test al, al
        jne public_630ae9d
        push 1
        lea ecx, ss:[esp+0x9C]
        call public_63108f0
        call public_6391dae
        mov ebx, eax
        public_630ae9d : nop
        push 2
        lea ecx, ss:[esp+0x9C]
        call public_6310560
        test al, al
        jne public_630aec4
        push 2
        lea ecx, ss:[esp+0x9C]
        call public_63108f0
        call public_6391dae
        mov ebp, eax
        public_630aec4 : nop
        push 0xA0
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov byte ptr ss : [esp+0x1608], 1
        je public_630af0e
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [esi], edi
        call public_630b270
        mov ecx, esi
        mov byte ptr ss : [esp+0x1608], 2
        call public_630b0d0
        push edi
        push edi
        push ebp
        push ebx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_630b0f0
        jmp public_630af10
        public_630af0e : nop
        xor esi, esi
        public_630af10 : nop
        mov al, byte ptr ds : [esi+4]
        test al, al
        mov byte ptr ss : [esp+0x1608], 0
        je public_630af3c
        mov al, byte ptr ds : [esi+0x11]
        test al, al
        jne public_630af35
        mov al, byte ptr ds : [esi+0x12]
        test al, al
        jne public_630af35
        cmp dword ptr ds : [esi+0x94], edi
        je public_630af3c
        public_630af35 : nop
        mov eax, 1
        jmp public_630af3e
        public_630af3c : nop
        xor eax, eax
        public_630af3e : nop
        test al, al
        mov byte ptr ds : [esi+0x10], al
        jne public_630af57
        mov ecx, esi
        call public_630b220
        push esi
        call public_6391d5a
        add esp, 4
        jmp public_630af87
        public_630af57 : nop
        mov al, byte ptr ds : [esi+0x12]
        test al, al
        je public_630af6b
        push esi
        mov ecx, offset public_63fcf28
        call public_630b6e0
        jmp public_630af87
        public_630af6b : nop
        mov ecx, dword ptr ds : [public_63fcf28]
        mov dword ptr ds : [esi], ecx
        cmp dword ptr ds : [public_63fcf2c], edi
        mov dword ptr ds : [public_63fcf28], esi
        jne public_630af87
        mov dword ptr ds : [public_63fcf2c], esi
        public_630af87 : nop
        lea ecx, ss:[esp+0x98]
        call public_6310170
        test al, al
        jne public_630adf5
        public_630af9b : nop
        lea ecx, ss:[esp+0x98]
        call public_6310070
        test al, al
        jne public_630adc8
        pop ebp
        public_630afb0 : nop
        lea edx, ss:[esp+0x14BC]
        mov dword ptr ss : [esp+0x1604], 3
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x14BC]
        mov byte ptr ss : [esp+0x1604], 4
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x14C0]
        mov byte ptr ss : [esp+0x1608], 3
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x160C], 5
        call dword ptr ds : [public_6399198]
        mov eax, dword ptr ss : [esp+0xA4]
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_630b071
        cmp dword ptr ss : [esp+0xA8], edi
        mov esi, dword ptr ds : [public_639913c]
        je public_630b060
        mov eax, dword ptr ss : [esp+0xAC]
        cmp eax, edi
        je public_630b04f
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0xAC], edi
        mov dword ptr ss : [esp+0xB0], edi
        public_630b04f : nop
        mov edx, dword ptr ss : [esp+0xA8]
        push edx
        call esi
        mov dword ptr ss : [esp+0xA8], edi
        public_630b060 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        push eax
        call esi
        mov dword ptr ss : [esp+0xA4], ebx
        public_630b071 : nop
        mov eax, dword ptr ss : [esp+0xAC]
        cmp eax, edi
        je public_630b094
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0xAC], edi
        mov dword ptr ss : [esp+0xB0], edi
        public_630b094 : nop
        push 1
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xB8], edi
        mov dword ptr ss : [esp+0x1608], ebx
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x15FC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15FC
        ret 
        UNREACHABLE_TRAP(0x630ad30)
    }
}

#undef public_630ad77
#undef public_630adc8
#undef public_630adf5
#undef public_630ae3d
#undef public_630ae57
#undef public_630ae76
#undef public_630ae9d
#undef public_630aec4
#undef public_630af0e
#undef public_630af10
#undef public_630af35
#undef public_630af3c
#undef public_630af3e
#undef public_630af57
#undef public_630af6b
#undef public_630af87
#undef public_630af9b
#undef public_630afb0
#undef public_630b04f
#undef public_630b060
#undef public_630b071
#undef public_630b094
