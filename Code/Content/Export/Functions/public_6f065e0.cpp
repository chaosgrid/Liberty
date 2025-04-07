#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb79a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f06530);
CLANG_FORWARD_PROC_SYMBOL(public_6f065e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f07b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f0dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6face5e);

#define public_6f06616 _public_6f06616
#define public_6f06644 _public_6f06644
#define public_6f066e0 _public_6f066e0
#define public_6f066e2 _public_6f066e2
#define public_6f066f8 _public_6f066f8
#define public_6f06742 _public_6f06742
#define public_6f0678b _public_6f0678b
#define public_6f0678d _public_6f0678d
#define public_6f067a3 _public_6f067a3
#define public_6f067c6 _public_6f067c6
#define public_6f067db _public_6f067db
#define public_6f06800 _public_6f06800
#define public_6f0681a _public_6f0681a
#define public_6f0682d _public_6f0682d

PROC_DECLARE(0x6f065e0, internal_6f065e0, public_6f065e0);
extern "C" NAKED register_t __cdecl internal_6f065e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6face5e @0x6f065e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6face5e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f0682d
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        xor ebx, ebx
/*FIXUP public_6f06616 : nop
        push offset public_6fb445c @0x6f06616*/
  FIXUP public_6f06616 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, edi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, edi
        je public_6f06644
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f0681a
/*FIXUP public_6f06644 : nop
        push offset public_6fb45ac @0x6f06644*/
  FIXUP public_6f06644 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45ac
        call dword ptr ds : [public_6fb3014]
        test al, al
        jne public_6f0681a
/*FIXUP push offset public_6fb82e8 @0x6f06657*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb82e8
        mov ecx, edi
        call dword ptr ds : [public_6fb3158]
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f06742
        push 0x178
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6f066e0
        push ebx
        push 5
        mov ecx, esi
        call public_6f06530
        lea ecx, ds:[esi+0x118]
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ds : [esi+0x114], ebx
        call public_6eb79a0
        mov dword ptr ds : [esi+0x13C], ebx
        mov dword ptr ds : [esi+0x140], ebx
        mov byte ptr ds : [esi+0x144], bl
        mov byte ptr ds : [esi+0x174], bl
        mov byte ptr ds : [esi+0x175], bl
        mov byte ptr ds : [esi+0x176], 1
        mov dword ptr ds : [esi], offset public_6fb82d8
        jmp public_6f066e2
        public_6f066e0 : nop
        xor esi, esi
        public_6f066e2 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], esi
        je public_6f066f8
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_6f066f8 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 2
        mov dword ptr ds : [esi+8], 5
        call dword ptr ds : [public_6fb3154]
        lea ecx, ds:[esi+0x10]
        push eax
        call public_6f0dfa0
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], esi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x2C]
        jmp public_6f06800
/*FIXUP public_6f06742 : nop
        push offset public_6fb82c8 @0x6f06742*/
  FIXUP public_6f06742 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb82c8
        mov ecx, edi
        call dword ptr ds : [public_6fb3158]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f0681a
        push 0x17C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], 3
        je public_6f0678b
        mov ecx, esi
        call public_6f07b60
        mov dword ptr ds : [esi], offset public_6fb82b8
        jmp public_6f0678d
        public_6f0678b : nop
        xor esi, esi
        public_6f0678d : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], esi
        je public_6f067a3
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_6f067a3 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 4
        mov dword ptr ds : [esi+8], 6
        call dword ptr ds : [public_6fb3154]
        cmp eax, ebx
        jne public_6f067c6
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        jmp public_6f067db
        public_6f067c6 : nop
        push eax
        lea eax, ds:[esi+0x14]
        push 0x100
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+0x10], eax
        public_6f067db : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], esi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x30]
        public_6f06800 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [eax+4]
        public_6f0681a : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f06616
        pop esi
        pop ebp
        pop ebx
        public_6f0682d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f065e0)
    }
}

#undef public_6f06616
#undef public_6f06644
#undef public_6f066e0
#undef public_6f066e2
#undef public_6f066f8
#undef public_6f06742
#undef public_6f0678b
#undef public_6f0678d
#undef public_6f067a3
#undef public_6f067c6
#undef public_6f067db
#undef public_6f06800
#undef public_6f0681a
#undef public_6f0682d
