#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f24ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);

#define public_6f24d10 _public_6f24d10
#define public_6f24d46 _public_6f24d46
#define public_6f24d80 _public_6f24d80
#define public_6f24fd2 _public_6f24fd2
#define public_6f25000 _public_6f25000
#define public_6f2505b _public_6f2505b

PROC_DECLARE(0x6f24ce0, internal_6f24ce0, public_6f24ce0);
extern "C" NAKED register_t __cdecl internal_6f24ce0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        mov eax, dword ptr ds : [public_6f61e08]
        push esi
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_6f2505b
        push edi
/*FIXUP push offset _public_6f24c20 @0x6f24cfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f24c20
        call public_6f4b7c0
        add esp, 8
        call public_6f4b220
        xor esi, esi
        nop 
        public_6f24d10 : nop
        mov eax, dword ptr ds : [esi+public_6f5e058]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], edi
        fild qword ptr ss : [esp+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        mov ecx, dword ptr ds : [esi+public_6f5e020]
        push ecx
        call public_6f4b3b0
        add esi, 4
        add esp, 0xC
        cmp esi, 0x38
        jb public_6f24d10
        xor esi, esi
        public_6f24d46 : nop
        mov edx, dword ptr ds : [esi+public_6f5e0e0]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edi
        fild qword ptr ss : [esp+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        mov eax, dword ptr ds : [esi+public_6f5e090]
        push eax
        call public_6f4b3b0
        add esi, 4
        add esp, 0xC
        cmp esi, 0x50
        jb public_6f24d46
        xor esi, esi
        lea esp, ss:[esp]
        public_6f24d80 : nop
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ss : [esp+0xC], edi
        fild qword ptr ss : [esp+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        mov ecx, dword ptr ds : [esi*4+public_6f5e130]
        push ecx
        call public_6f4b3b0
        add esp, 0xC
        inc esi
        cmp esi, 5
        jbe public_6f24d80
        push 0x3FF00000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8f4 @0x6f24db8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8f4
        call public_6f4b3b0
        push 0x40300000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8ec @0x6f24dcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8ec
        call public_6f4b3b0
        push 0x40400000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8d8 @0x6f24de2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8d8
        call public_6f4b3b0
        push 0x40000000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8d0 @0x6f24df7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8d0
        call public_6f4b3b0
        push 0x40100000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8c8 @0x6f24e0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8c8
        call public_6f4b3b0
        push 0x40200000
        push edi
        call public_6f4b6f0
        add esp, 0x44
/*FIXUP push offset public_6f5e8c0 @0x6f24e24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8c0
        call public_6f4b3b0
        push 0x40000000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8b4 @0x6f24e39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8b4
        call public_6f4b3b0
        push 0x40100000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e8a8 @0x6f24e4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e8a8
        call public_6f4b3b0
        push 0x3FF00000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e894 @0x6f24e63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e894
        call public_6f4b3b0
        push 0x40000000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e888 @0x6f24e78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e888
        call public_6f4b3b0
        push 0x40000000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e878 @0x6f24e8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e878
        call public_6f4b3b0
        add esp, 0x40
        push 0x40100000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e86c @0x6f24ea5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e86c
        call public_6f4b3b0
        push 0x40200000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e864 @0x6f24eba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e864
        call public_6f4b3b0
        push 0x40500000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e854 @0x6f24ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e854
        call public_6f4b3b0
        push 0x40400000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e844 @0x6f24ee4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e844
        call public_6f4b3b0
        push 0x40600000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e82c @0x6f24ef9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e82c
        call public_6f4b3b0
        push edi
        push edi
        call public_6f4b6f0
        add esp, 0x44
/*FIXUP push offset public_6f5e824 @0x6f24f0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e824
        call public_6f4b3b0
        push 0x40000000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e81c @0x6f24f22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e81c
        call public_6f4b3b0
        push 0x3FF00000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e6b4 @0x6f24f37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e6b4
        call public_6f4b3b0
        push 0x40180000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e810 @0x6f24f4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e810
        call public_6f4b3b0
        push 0x40200000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e800 @0x6f24f61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e800
        call public_6f4b3b0
        push 0x40350000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e7f8 @0x6f24f76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e7f8
        call public_6f4b3b0
        add esp, 0x40
        push 0x40360000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e7f0 @0x6f24f8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e7f0
        call public_6f4b3b0
        push 0x40370000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e7e8 @0x6f24fa3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e7e8
        call public_6f4b3b0
        push edi
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e7d8 @0x6f24fb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e7d8
        call public_6f4b3b0
/*FIXUP push offset public_6f5e798 @0x6f24fbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e798
        call public_6f4b370
        add esp, 0x28
        mov dword ptr ds : [public_6f61de8], eax
        xor esi, esi
        public_6f24fd2 : nop
        fild dword ptr ds : [esi+public_6f5e248]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        mov edx, dword ptr ds : [esi+public_6f5e238]
        push edx
        call public_6f4b3b0
        add esi, 4
        add esp, 0xC
        cmp esi, 0x10
        jb public_6f24fd2
        xor esi, esi
        lea esp, ss:[esp]
        public_6f25000 : nop
        fild dword ptr ds : [esi+public_6f5e264]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        mov eax, dword ptr ds : [esi+public_6f5e258]
        push eax
        call public_6f4b3b0
        add esi, 4
        add esp, 0xC
        cmp esi, 0xC
        jb public_6f25000
        push 0x3FF00000
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e794 @0x6f25033*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e794
        call public_6f4b3b0
        push edi
        push edi
        call public_6f4b6f0
/*FIXUP push offset public_6f5e790 @0x6f25044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e790
        call public_6f4b3b0
        add esp, 0x18
        mov dword ptr ds : [public_6f61e08], 1
        public_6f2505b : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f24ce0)
    }
}

#undef public_6f24d10
#undef public_6f24d46
#undef public_6f24d80
#undef public_6f24fd2
#undef public_6f25000
#undef public_6f2505b
