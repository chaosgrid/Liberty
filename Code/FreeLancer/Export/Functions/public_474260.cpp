#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4738e0);
CLANG_FORWARD_PROC_SYMBOL(public_473970);
CLANG_FORWARD_PROC_SYMBOL(public_474260);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b2360);

#define public_4742a7 _public_4742a7
#define public_474317 _public_474317
#define public_474333 _public_474333
#define public_474366 _public_474366
#define public_47436c _public_47436c
#define public_47439e _public_47439e
#define public_4743a8 _public_4743a8
#define public_4743bd _public_4743bd
#define public_4743d8 _public_4743d8
#define public_4743e6 _public_4743e6
#define public_4743ef _public_4743ef

PROC_DECLARE(0x474260, internal_474260, public_474260);
extern "C" NAKED register_t __cdecl internal_474260()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x2C
        push ebx
        push esi
        push edi
/*FIXUP push offset public_5d0794 @0x47426c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59d9c0
        xor edi, edi
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], 2
        jne public_4742a7
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
/*FIXUP push offset public_5d0794 @0x474295*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
/*FIXUP push offset public_5d0794 @0x47429a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59db20
        add esp, 0x10
        public_4742a7 : nop
        mov esi, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], edi
        je public_474317
        mov edx, dword ptr ds : [esi]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        push ecx
        push edx
        mov ecx, esi
        call public_4738e0
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        lea eax, ss:[esp+0x14]
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi+0x334], eax
        call public_473970
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        push 1
        mov ecx, esi
        call public_473970
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
/*FIXUP public_474317 : nop
        push offset public_5d0794 @0x474317*/
  FIXUP public_474317 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        mov dword ptr ss : [esp+0x18], edi
        call public_59d9c0
        add esp, 4
        test eax, eax
        je public_4743bd
        mov bl, byte ptr ss : [ebp+0x1C]
        public_474333 : nop
        push 0xA
        call dword ptr ds : [public_5c6ed8]
        call public_5b2360
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_5b0b60
        add esp, 4
        test al, al
        je public_4743ef
        test bl, bl
        je public_474366
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        jmp public_47436c
        public_474366 : nop
        call dword ptr ds : [public_5c6344]
        public_47436c : nop
        call public_42d680
        fstp qword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        call public_59e080
        mov ecx, dword ptr ds : [public_67ecac]
        add esp, 8
        cmp ecx, edi
        je public_47439e
        fld qword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x38]
        public_47439e : nop
        test bl, bl
        jne public_4743a8
        call dword ptr ds : [public_5c6340]
/*FIXUP public_4743a8 : nop
        push offset public_5d0794 @0x4743a8*/
  FIXUP public_4743a8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_474333
        public_4743bd : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_4743ef
        cmp eax, 2
        jne public_4743d8
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax], edi
        mov al, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_4743d8 : nop
        cmp eax, 3
        jne public_4743e6
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], 1
        public_4743e6 : nop
        mov al, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_4743ef : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x474260)
    }
}

#undef public_4742a7
#undef public_474317
#undef public_474333
#undef public_474366
#undef public_47436c
#undef public_47439e
#undef public_4743a8
#undef public_4743bd
#undef public_4743d8
#undef public_4743e6
#undef public_4743ef
