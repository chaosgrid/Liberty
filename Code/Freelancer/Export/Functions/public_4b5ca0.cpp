#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_459930);
CLANG_FORWARD_PROC_SYMBOL(public_4b5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b0880);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd1a6);

#define public_4b5ce3 _public_4b5ce3
#define public_4b5d2d _public_4b5d2d
#define public_4b5d57 _public_4b5d57
#define public_4b5e16 _public_4b5e16
#define public_4b5e26 _public_4b5e26
#define public_4b5e9f _public_4b5e9f
#define public_4b5ec8 _public_4b5ec8
#define public_4b5ece _public_4b5ece
#define public_4b5f2f _public_4b5f2f
#define public_4b5f3b _public_4b5f3b
#define public_4b5fa1 _public_4b5fa1
#define public_4b5fac _public_4b5fac
#define public_4b5faf _public_4b5faf

PROC_DECLARE(0x4b5ca0, internal_4b5ca0, public_4b5ca0);
extern "C" NAKED register_t __cdecl internal_4b5ca0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd1a6 @0x4b5ca8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd1a6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x94]
        mov eax, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp eax, ebx
        mov esi, ecx
        je public_4b5faf
        call public_41dd90
        test al, al
        jne public_4b5ce3
        and byte ptr ds : [esi+0x6C], 0xFD
        jmp public_4b5faf
/*FIXUP public_4b5ce3 : nop
        push offset public_5d55e0 @0x4b5ce3*/
  FIXUP public_4b5ce3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d55e0
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fcomp qword ptr ds : [public_5c8b68]
        add esp, 4
        fnstsw ax
        test ah, 5
        jnp public_4b5faf
        fld dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4b5faf
        mov eax, dword ptr ds : [esi+0xEC]
        cmp eax, dword ptr ds : [edi]
        jne public_4b5d2d
        cmp byte ptr ds : [esi+0x178], bl
        jne public_4b5d57
        public_4b5d2d : nop
        fld dword ptr ds : [esi+0x17C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4b5d57
        fld dword ptr ds : [esi+0x180]
        fcomp dword ptr ds : [public_5c94f8]
        fnstsw ax
        test ah, 1
        jne public_4b5faf
        public_4b5d57 : nop
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        lea ecx, ds:[esi+0x150]
        call public_432240
        mov eax, dword ptr ds : [esi+0x154]
        cmp dword ptr ss : [esp+0xC], eax
        je public_4b5faf
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x8C], ebx
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x6C], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x80], bl
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ds : [edi+8]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x8C], 1
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x20], eax
        je public_4b5e16
        push ebp
        push edi
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        add esp, 4
        lea ecx, ss:[ebp+1]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_4142a0
        mov edx, dword ptr ss : [esp+0x2C]
        push ebp
        push edi
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0xC
        mov word ptr ds : [eax+ebp*2], bx
        pop ebp
        jmp public_4b5e26
        public_4b5e16 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_4b5e26
        cmp word ptr ds : [eax], bx
        je public_4b5e26
        mov word ptr ds : [eax], bx
        public_4b5e26 : nop
        mov al, byte ptr ds : [esi+0x6C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi+0xEC]
        or al, 1
        cmp edx, ecx
        mov byte ptr ds : [esi+0x6C], al
        jne public_4b5e9f
        or al, 2
        mov byte ptr ds : [esi+0x6C], al
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x8C], 2
        mov dword ptr ss : [esp+0x10], edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x8C], 4
        call public_4144f0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x8C], 3
        call public_445d70
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x8C], 2
        call public_444e20
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_4b5faf
        push eax
        call dword ptr ds : [public_5c71d8]
        jmp public_4b5fac
        public_4b5e9f : nop
        call public_5b0880
        test al, al
        lea edi, ds:[esi+0x16C]
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov dword ptr ss : [esp+0x18], 0x3EC51EB8
        mov ecx, edi
        je public_4b5ec8
        mov eax, dword ptr ds : [esi+0x188]
        jmp public_4b5ece
        public_4b5ec8 : nop
        mov eax, dword ptr ds : [esi+0x184]
        public_4b5ece : nop
        mov edx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        mov dl, byte ptr ds : [esi+0x6C]
        mov dword ptr ds : [esi+0xEC], eax
        mov eax, dword ptr ss : [esp+0x24]
        or dl, 2
        cmp eax, ebx
        mov byte ptr ds : [esi+0x6C], dl
        mov dword ptr ds : [esi+0xF0], eax
        je public_4b5f2f
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66fc60 @0x4b5f12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        push edx
        call public_4347e0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
/*FIXUP push offset public_66fc60 @0x4b5f23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, esi
        call dword ptr ds : [eax+0x70]
        jmp public_4b5f3b
        public_4b5f2f : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        public_4b5f3b : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_459930
        add esp, 4
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x8C], 5
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x8C], 7
        call public_4144f0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x8C], 6
        call public_445d70
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        mov esi, dword ptr ds : [public_5c71d8]
        je public_4b5fa1
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_4b5fa1 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_4b5faf
        push eax
        call esi
        public_4b5fac : nop
        add esp, 4
        public_4b5faf : nop
        mov ecx, dword ptr ss : [esp+0x84]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 4
        UNREACHABLE_TRAP(0x4b5ca0)
    }
}

#undef public_4b5ce3
#undef public_4b5d2d
#undef public_4b5d57
#undef public_4b5e16
#undef public_4b5e26
#undef public_4b5e9f
#undef public_4b5ec8
#undef public_4b5ece
#undef public_4b5f2f
#undef public_4b5f3b
#undef public_4b5fa1
#undef public_4b5fac
#undef public_4b5faf
