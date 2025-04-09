#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_473770);
CLANG_FORWARD_PROC_SYMBOL(public_4740f0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b2360);

#define public_47413b _public_47413b
#define public_474197 _public_474197
#define public_4741c0 _public_4741c0
#define public_4741eb _public_4741eb
#define public_4741f1 _public_4741f1
#define public_474223 _public_474223
#define public_47422d _public_47422d
#define public_47423e _public_47423e
#define public_474250 _public_474250

PROC_DECLARE(0x4740f0, internal_4740f0, public_4740f0);
extern "C" NAKED register_t __cdecl internal_4740f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x28
        push ebx
        push esi
/*FIXUP push offset public_5d0794 @0x4740fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59d9c0
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x18]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], 1
        jne public_47413b
        lea eax, ss:[esp+0x24]
        push eax
        push 0
/*FIXUP push offset public_5d0794 @0x474129*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
/*FIXUP push offset public_5d0794 @0x47412e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59db20
        add esp, 0x10
        public_47413b : nop
        mov esi, eax
        test esi, esi
        mov dword ptr ss : [esp+8], 0
        je public_474197
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        push ecx
        push edx
        mov ecx, esi
        call public_473770
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+8]
        mov ecx, esi
        mov dword ptr ds : [esi+0x334], eax
        call dword ptr ds : [edx+0x80]
/*FIXUP public_474197 : nop
        push offset public_5d0794 @0x474197*/
  FIXUP public_474197 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        mov dword ptr ss : [esp+0x10], 0
        call public_59d9c0
        add esp, 4
        test eax, eax
        je public_47423e
        mov bl, byte ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [public_5c6ed8]
        lea ecx, ds:[ecx]
        public_4741c0 : nop
        push 0xA
        call esi
        call public_5b2360
        lea eax, ss:[esp+0xC]
        push eax
        call public_5b0b60
        add esp, 4
        test al, al
        je public_474250
        test bl, bl
        je public_4741eb
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        jmp public_4741f1
        public_4741eb : nop
        call dword ptr ds : [public_5c6344]
        public_4741f1 : nop
        call public_42d680
        fstp qword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_59e080
        mov ecx, dword ptr ds : [public_67ecac]
        add esp, 8
        test ecx, ecx
        je public_474223
        fld qword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x38]
        public_474223 : nop
        test bl, bl
        jne public_47422d
        call dword ptr ds : [public_5c6340]
/*FIXUP public_47422d : nop
        push offset public_5d0794 @0x47422d*/
  FIXUP public_47422d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_4741c0
        public_47423e : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        cmp ecx, 1
        sete al
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_474250 : nop
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4740f0)
    }
}

#undef public_47413b
#undef public_474197
#undef public_4741c0
#undef public_4741eb
#undef public_4741f1
#undef public_474223
#undef public_47422d
#undef public_47423e
#undef public_474250
