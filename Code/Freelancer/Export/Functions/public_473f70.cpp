#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_473770);
CLANG_FORWARD_PROC_SYMBOL(public_473f70);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b2360);

#define public_473fb6 _public_473fb6
#define public_474009 _public_474009
#define public_47401a _public_47401a
#define public_474034 _public_474034
#define public_474056 _public_474056
#define public_474081 _public_474081
#define public_474087 _public_474087
#define public_4740b9 _public_4740b9
#define public_4740c3 _public_4740c3
#define public_4740d4 _public_4740d4
#define public_4740e7 _public_4740e7

PROC_DECLARE(0x473f70, internal_473f70, public_473f70);
extern "C" NAKED register_t __cdecl internal_473f70()
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
/*FIXUP push offset public_5d0794 @0x473f7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59d9c0
        mov ecx, dword ptr ss : [ebp+0x14]
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        jne public_473fb6
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
/*FIXUP push offset public_5d0794 @0x473fa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
/*FIXUP push offset public_5d0794 @0x473fa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59db20
        add esp, 0x10
        public_473fb6 : nop
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        je public_474034
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ss : [ebp+8]
        push 0x5C12
        push edx
        mov ecx, esi
        call public_473770
        mov edi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jne public_474009
        mov eax, dword ptr ds : [public_5c700c]
        public_474009 : nop
        mov ecx, dword ptr ds : [esi+0x344]
        cmp ecx, ebx
        je public_47401a
        push ebx
        push eax
        call public_57c0e0
        public_47401a : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        mov ecx, esi
        mov dword ptr ds : [esi+0x338], edi
        mov dword ptr ds : [esi+0x334], eax
        call dword ptr ds : [edx+0x80]
/*FIXUP public_474034 : nop
        push offset public_5d0794 @0x474034*/
  FIXUP public_474034 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        mov dword ptr ss : [esp+0x18], ebx
        call public_59d9c0
        add esp, 4
        test eax, eax
        je public_4740d4
        mov bl, byte ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [public_5c6ed8]
        public_474056 : nop
        push 0xA
        call esi
        call public_5b2360
        lea eax, ss:[esp+0x14]
        push eax
        call public_5b0b60
        add esp, 4
        test al, al
        je public_4740e7
        test bl, bl
        je public_474081
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        jmp public_474087
        public_474081 : nop
        call dword ptr ds : [public_5c6344]
        public_474087 : nop
        call public_42d680
        fstp qword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        call public_59e080
        mov ecx, dword ptr ds : [public_67ecac]
        add esp, 8
        test ecx, ecx
        je public_4740b9
        fld qword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x38]
        public_4740b9 : nop
        test bl, bl
        jne public_4740c3
        call dword ptr ds : [public_5c6340]
/*FIXUP public_4740c3 : nop
        push offset public_5d0794 @0x4740c3*/
  FIXUP public_4740c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_474056
        public_4740d4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        cmp ecx, 1
        sete al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_4740e7 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x473f70)
    }
}

#undef public_473fb6
#undef public_474009
#undef public_47401a
#undef public_474034
#undef public_474056
#undef public_474081
#undef public_474087
#undef public_4740b9
#undef public_4740c3
#undef public_4740d4
#undef public_4740e7
