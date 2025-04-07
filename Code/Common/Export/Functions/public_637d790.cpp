#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636f040);
CLANG_FORWARD_PROC_SYMBOL(public_636f3a0);
CLANG_FORWARD_PROC_SYMBOL(public_636f500);
CLANG_FORWARD_PROC_SYMBOL(public_636f910);
CLANG_FORWARD_PROC_SYMBOL(public_6370080);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63706d0);
CLANG_FORWARD_PROC_SYMBOL(public_6371ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6372240);
CLANG_FORWARD_PROC_SYMBOL(public_63723c0);
CLANG_FORWARD_PROC_SYMBOL(public_63735f0);
CLANG_FORWARD_PROC_SYMBOL(public_6374470);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378980);
CLANG_FORWARD_PROC_SYMBOL(public_637d790);
CLANG_FORWARD_PROC_SYMBOL(public_637dff0);
CLANG_FORWARD_PROC_SYMBOL(public_637e310);
CLANG_FORWARD_PROC_SYMBOL(public_637ed40);
CLANG_FORWARD_PROC_SYMBOL(public_637f220);
CLANG_FORWARD_PROC_SYMBOL(public_637ff10);
CLANG_FORWARD_PROC_SYMBOL(public_638c710);

#define public_637d7c7 _public_637d7c7
#define public_637d7e4 _public_637d7e4
#define public_637d84d _public_637d84d
#define public_637d87d _public_637d87d
#define public_637d8d7 _public_637d8d7
#define public_637d985 _public_637d985
#define public_637d99c _public_637d99c
#define public_637d9cc _public_637d9cc
#define public_637d9d9 _public_637d9d9
#define public_637da07 _public_637da07
#define public_637da2c _public_637da2c
#define public_637da36 _public_637da36
#define public_637dabd _public_637dabd
#define public_637dade _public_637dade
#define public_637dafb _public_637dafb
#define public_637db3e _public_637db3e
#define public_637db5d _public_637db5d
#define public_637db63 _public_637db63
#define public_637db6b _public_637db6b
#define public_637db88 _public_637db88
#define public_637dbd7 _public_637dbd7
#define public_637dc02 _public_637dc02

PROC_DECLARE(0x637d790, internal_637d790, public_637d790);
extern "C" NAKED register_t __cdecl internal_637d790()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        xor edi, edi
        push ebx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [public_658b880], edi
        call public_6370570
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_637d7c7
        push ebx
/*FIXUP push offset public_658b8fc @0x637d7ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8fc
        call public_636e1b0
        add esp, 8
        public_637d7c7 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        cmp esi, edi
        jne public_637d7e4
/*FIXUP push offset public_63f5418 @0x637d7ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5418
        call public_6356960
        push edi
        push edi
        push 5
        call public_6378600
        add esp, 0x10
        public_637d7e4 : nop
        cmp dword ptr ss : [ebp+0x10], edi
        je public_637d84d
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        push edi
        push edi
        push edi
        push esi
        push ebx
        call public_637ff10
        mov ecx, dword ptr ds : [public_658be50]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x20
        cmp eax, edi
        mov dword ptr ds : [public_658be50], ecx
        jne public_637d84d
        inc dword ptr ds : [public_658bdf0]
        mov eax, dword ptr ds : [esi+0x50]
        lea ecx, ss:[esp+0x38]
        push ecx
        or eax, 0x20000
        push esi
        push ebx
        mov dword ptr ds : [esi+0x50], eax
        call public_637ed40
        add esp, 0xC
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637d84d : nop
        push esi
        push ebx
        call public_637dff0
        mov eax, dword ptr ds : [public_658b1f8]
        add esp, 8
        cmp eax, edi
        jge public_637d87d
        or edx, 0xFFFFFFFF
        sub edx, eax
        cmp dword ptr ds : [public_658b870], edx
        jne public_637d87d
        or dword ptr ds : [esi+0x50], 0x20000
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637d87d : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        push ebx
        call public_637e310
        mov eax, dword ptr ds : [public_658b0d8]
        add esp, 0x10
        cmp eax, edi
        je public_637d8d7
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        add edx, eax
        test edx, edx
        jne public_637d8d7
        cmp dword ptr ds : [public_658b874], edi
        jne public_637d8d7
        inc dword ptr ds : [public_658bde0]
        mov edx, dword ptr ds : [esi+0x50]
        or edx, 0x20000
        push edi
        mov dword ptr ds : [esi+0x50], edx
        call public_6374470
        add esp, 4
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637d8d7 : nop
        mov ecx, dword ptr ds : [public_658be90]
        mov edi, dword ptr ds : [public_658b854]
        inc ecx
        push ebx
        mov dword ptr ds : [public_658be90], ecx
        call public_63735f0
        add esp, 4
        mov ebx, eax
        call public_636f910
        mov eax, dword ptr ds : [public_658b854]
        mov ecx, dword ptr ds : [public_658b844]
        mov edx, dword ptr ds : [public_658b824]
        sub eax, edi
        sub ecx, edx
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_658b0d8]
        xor edi, edi
        cmp eax, edi
        fimul dword ptr ds : [public_658b24c]
        fidiv dword ptr ds : [public_658b848]
        fsubp 
        fst qword ptr ss : [esp+0x30]
        fld qword ptr ds : [public_658bda0]
        fadd st, st(1)
        fstp qword ptr ds : [public_658bda0]
        fld st(0)
        fmul st, st(1)
        fadd qword ptr ds : [public_658bda8]
        fstp qword ptr ds : [public_658bda8]
        fstp st(0)
        je public_637d9d9
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_658b81c]
        push edx
        push eax
        call public_63723c0
        add esp, 8
        test eax, eax
        jne public_637d9cc
        cmp dword ptr ds : [public_658b874], edi
        jne public_637d9cc
        mov edi, dword ptr ds : [public_658b81c]
        test edi, edi
        je public_637d99c
        public_637d985 : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_637d99c
        push edi
        call public_636f3a0
        mov edi, dword ptr ds : [edi+0x30]
        add esp, 4
        test edi, edi
        jne public_637d985
        public_637d99c : nop
        push ebx
        call public_6372240
        push 1
        call public_6374470
        mov ecx, dword ptr ds : [public_658bde8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [public_658bde8], ecx
        or dword ptr ds : [esi+0x50], 0x20000
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637d9cc : nop
        cmp dword ptr ds : [public_658b0d8], edi
        je public_637d9d9
        call public_636f040
        public_637d9d9 : nop
        call public_6370080
        call public_63706d0
        mov eax, dword ptr ds : [public_658b1f4]
        cmp eax, edi
        je public_637da07
        mov ecx, dword ptr ds : [public_658b870]
        dec eax
        cmp ecx, eax
        jne public_637da07
        or dword ptr ds : [esi+0x50], 0x20000
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637da07 : nop
        cmp dword ptr ds : [public_658b0e8], edi
        mov esi, 0x32
        jne public_637dafb
        cmp dword ptr ds : [public_658b0a0], edi
        jne public_637dafb
        cmp dword ptr ds : [public_658b030], edi
        je public_637da36
        public_637da2c : nop
        mov dword ptr ds : [public_658b8a4], 1
        public_637da36 : nop
        lea edx, ss:[esp+0x2C]
        push edx
        push edi
        call public_637f220
        fild dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_658b254]
        sub eax, dword ptr ds : [public_658b848]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [public_658be68]
        add esp, 8
        inc ebx
        fimul dword ptr ds : [public_658b24c]
        mov dword ptr ds : [public_658b8a4], edi
        mov dword ptr ds : [public_658b8a8], edi
        mov dword ptr ds : [public_658be68], ebx
        fidiv dword ptr ds : [public_658b848]
        fsubp 
        fst qword ptr ss : [esp+0x20]
        fld qword ptr ds : [public_658be70]
        fadd st, st(1)
        fstp qword ptr ds : [public_658be70]
        fld st(0)
        fmul st, st(1)
        fadd qword ptr ds : [public_658be78]
        fstp qword ptr ds : [public_658be78]
        fstp st(0)
        call public_636f500
        mov eax, dword ptr ds : [public_658b848]
        cmp dword ptr ds : [public_658bcd8], eax
        jge public_637dabd
        mov dword ptr ds : [public_658bcd8], eax
        public_637dabd : nop
        cmp dword ptr ds : [public_658b078], 4
        mov dword ptr ds : [public_658b8a0], edi
        jl public_637dade
        mov ecx, dword ptr ds : [public_658b81c]
        push 1
        push edi
        push ecx
        call public_6378980
        add esp, 0xC
        public_637dade : nop
        cmp dword ptr ds : [public_658b03c], edi
        je public_637db6b
        cmp dword ptr ds : [public_658b844], esi
        jge public_637db5d
        mov edx, dword ptr ds : [public_658b810]
        push edx
        jmp public_637db63
        public_637dafb : nop
        mov ecx, dword ptr ds : [public_658b044]
        mov edx, dword ptr ds : [public_658b040]
        mov eax, dword ptr ds : [public_658b0b4]
        push ecx
        mov ecx, dword ptr ds : [public_658b0b0]
        push edx
        push eax
        push ecx
        push ebx
        call public_638c710
        mov eax, dword ptr ds : [public_658bf58]
        add esp, 0x14
        cmp eax, esi
        jg public_637da2c
        mov eax, dword ptr ds : [public_658b81c]
        cmp eax, edi
        je public_637da36
        mov edx, 0x1000
        public_637db3e : nop
        mov ecx, dword ptr ds : [eax+0x30]
        cmp ecx, edi
        je public_637da36
        test dword ptr ds : [eax+0x50], edx
        je public_637da2c
        mov eax, ecx
        cmp eax, edi
        jne public_637db3e
        jmp public_637da36
        public_637db5d : nop
        mov eax, dword ptr ds : [public_658b81c]
        push eax
        public_637db63 : nop
        call public_6371ad0
        add esp, 4
        public_637db6b : nop
        mov eax, dword ptr ds : [public_658b1f8]
        cmp eax, edi
        jle public_637db88
        mov ecx, dword ptr ds : [public_658b870]
        dec eax
        cmp ecx, eax
        jne public_637db88
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637db88 : nop
        push 1
        call public_6374470
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 2
        jl public_637dbd7
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push edx
        push eax
        call public_6370570
        mov ecx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f53cc @0x637dbc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f53cc
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_637dbd7 : nop
        cmp dword ptr ds : [public_658b24c], 3
        jle public_637dc02
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6370570
        mov ecx, dword ptr ds : [public_658b208]
        add esp, 4
        cmp ecx, eax
        jne public_637dc02
        mov dword ptr ds : [public_658b078], edi
        mov dword ptr ds : [public_658b998], edi
        public_637dc02 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637d790)
    }
}

#undef public_637d7c7
#undef public_637d7e4
#undef public_637d84d
#undef public_637d87d
#undef public_637d8d7
#undef public_637d985
#undef public_637d99c
#undef public_637d9cc
#undef public_637d9d9
#undef public_637da07
#undef public_637da2c
#undef public_637da36
#undef public_637dabd
#undef public_637dade
#undef public_637dafb
#undef public_637db3e
#undef public_637db5d
#undef public_637db63
#undef public_637db6b
#undef public_637db88
#undef public_637dbd7
#undef public_637dc02
