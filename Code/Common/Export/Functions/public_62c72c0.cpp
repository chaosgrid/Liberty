#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3590);
CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2ad0);
CLANG_FORWARD_PROC_SYMBOL(public_62d3e70);
CLANG_FORWARD_PROC_SYMBOL(public_62dae20);
CLANG_FORWARD_PROC_SYMBOL(public_62db0c0);
CLANG_FORWARD_PROC_SYMBOL(public_62fe940);

#define public_62c734e _public_62c734e
#define public_62c738a _public_62c738a
#define public_62c73cc _public_62c73cc
#define public_62c740f _public_62c740f
#define public_62c742c _public_62c742c
#define public_62c745a _public_62c745a
#define public_62c746a _public_62c746a
#define public_62c749b _public_62c749b
#define public_62c74b0 _public_62c74b0
#define public_62c74b7 _public_62c74b7
#define public_62c74d7 _public_62c74d7
#define public_62c74e5 _public_62c74e5
#define public_62c751f _public_62c751f
#define public_62c752d _public_62c752d
#define public_62c7539 _public_62c7539
#define public_62c7548 _public_62c7548

PROC_DECLARE(0x62c72c0, internal_62c72c0, public_62c72c0);
extern "C" NAKED register_t __cdecl internal_62c72c0()
{
    __asm
    {
        sub esp, 0x1C0
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2C]
        test al, al
        mov ebx, 1
        jne public_62c74b7
        mov eax, dword ptr ds : [esi+0x24]
        mov byte ptr ds : [esi+0x2C], bl
        mov dword ptr ss : [esp+8], 0x43FA0000
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x30]
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        call public_62d2ad0
        test al, al
        jne public_62c738a
        push edi
        mov edi, dword ptr ds : [esi+0x24]
        add edi, 0x14FC
        mov dword ptr ss : [esp+0x10], 3
        mov al, byte ptr ds : [edi+0x7E]
        test al, al
        jne public_62c734e
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c734e : nop
        fld dword ptr ds : [edi+0xC]
        fadd dword ptr ds : [public_639f7a4]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0xC], 0x43FA0000
        pop edi
        public_62c738a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x34], eax
        dec eax
        je public_62c742c
        dec eax
        je public_62c73cc
        dec eax
        je public_62c742c
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639f750 @0x62c73a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f750
        push 0x453
/*FIXUP push offset public_639f71c @0x62c73b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f71c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62c73bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_62c74b0
        public_62c73cc : nop
        lea ecx, ss:[esp+0x9C]
        call public_62db0c0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0xA8], edx
        mov byte ptr ds : [esi+0x48], 0
        call public_62d3e70
        test eax, eax
        je public_62c740f
        cmp dword ptr ds : [eax+8], 7
        jne public_62c740f
        mov ecx, dword ptr ds : [esi+0x40]
        lea eax, ds:[esi+0xBC]
        push eax
        call public_62c3590
        test al, al
        je public_62c740f
        mov byte ptr ds : [esi+0x48], bl
        public_62c740f : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x9C]
        push eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        jmp public_62c74b0
        public_62c742c : nop
        lea ecx, ss:[esp+0x2C]
        call public_62dae20
        cmp dword ptr ss : [esp+0xC], 3
        jne public_62c745a
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        jmp public_62c746a
        public_62c745a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x48], eax
        public_62c746a : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov byte ptr ds : [esi+0x48], 0
        call public_62d3e70
        test eax, eax
        je public_62c749b
        cmp dword ptr ds : [eax+8], 2
        jne public_62c749b
        mov ecx, dword ptr ds : [esi+0x3C]
        lea edx, ds:[esi+0x4C]
        push edx
        call public_62fe940
        test al, al
        je public_62c749b
        mov byte ptr ds : [esi+0x48], bl
        public_62c749b : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        public_62c74b0 : nop
        mov al, byte ptr ds : [esi+0x2C]
        test al, al
        je public_62c74d7
        public_62c74b7 : nop
        mov al, byte ptr ds : [esi+0x38]
        test al, al
        je public_62c74e5
        mov ecx, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x44]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        public_62c74d7 : nop
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x1C0
        ret 
        public_62c74e5 : nop
        mov eax, dword ptr ds : [esi+0x34]
        dec eax
        je public_62c752d
        dec eax
        je public_62c751f
        dec eax
        je public_62c752d
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0xCC]
/*FIXUP push offset public_639f6b8 @0x62c750e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f6b8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        jmp public_62c7548
        public_62c751f : nop
        fld dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x40]
        fstp dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ds : [esi+0x40]
        jmp public_62c7539
        public_62c752d : nop
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x3C]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x3C]
        public_62c7539 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        cmp eax, 2
        je public_62c7548
        cmp eax, 3
        jne public_62c74d7
        public_62c7548 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 4
        mov byte ptr ds : [esi+0x2C], 0
        call public_62d29a0
        mov dword ptr ds : [esi+0x10], 2
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0x1C0
        ret 
        UNREACHABLE_TRAP(0x62c72c0)
    }
}

#undef public_62c734e
#undef public_62c738a
#undef public_62c73cc
#undef public_62c740f
#undef public_62c742c
#undef public_62c745a
#undef public_62c746a
#undef public_62c749b
#undef public_62c74b0
#undef public_62c74b7
#undef public_62c74d7
#undef public_62c74e5
#undef public_62c751f
#undef public_62c752d
#undef public_62c7539
#undef public_62c7548
