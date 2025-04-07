#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420750);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4c9060);
CLANG_FORWARD_PROC_SYMBOL(public_4c92b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c95b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9610);
CLANG_FORWARD_PROC_SYMBOL(public_59f1c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd884);

#define public_4c8e74 _public_4c8e74
#define public_4c8ec6 _public_4c8ec6
#define public_4c8ee5 _public_4c8ee5
#define public_4c8f04 _public_4c8f04
#define public_4c8f23 _public_4c8f23
#define public_4c8f42 _public_4c8f42
#define public_4c8f5a _public_4c8f5a
#define public_4c8f82 _public_4c8f82
#define public_4c8ffa _public_4c8ffa
#define public_4c901e _public_4c901e
#define public_4c902e _public_4c902e
#define public_4c9047 _public_4c9047

PROC_DECLARE(0x4c8d40, internal_4c8d40, public_4c8d40);
extern "C" NAKED register_t __cdecl internal_4c8d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd884 @0x4c8d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd884
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push esi
        push 0x154
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_4c9047
        push ebp
        push edi
        mov ecx, esi
        call public_4c9060
        lea ecx, ds:[esi+0xAC]
        mov byte ptr ss : [esp+0x38], 1
        call public_4b5150
        mov dword ptr ds : [esi], offset public_5d7024
        mov byte ptr ds : [esi+0xDC], bl
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], 0x43340000
        mov dword ptr ds : [esi+0xE8], 0x3F59999A
        mov dword ptr ds : [esi+0xEC], 0x3F400000
        mov byte ptr ds : [esi+0xF0], bl
        lea edi, ds:[esi+0xF4]
        lea ebp, ds:[edi+0x28]
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 2
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ds : [edi+4], ebx
        mov byte ptr ds : [edi+8], bl
        call public_4c95b0
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 3
        mov dword ptr ds : [edi], offset public_5d6eac
        mov dword ptr ds : [edi+0x34], ebx
        call dword ptr ds : [public_5c645c]
        mov dword ptr ds : [edi+0x30], ebx
        lea ebp, ds:[esi+0x12C]
        mov dword ptr ss : [ebp], ebx
        mov byte ptr ss : [ebp+4], bl
        mov eax, edi
/*FIXUP push offset public_5d6e38 @0x4c8e16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e38
        lea ecx, ds:[esi+0xF8]
        mov byte ptr ss : [esp+0x3C], 4
        mov dword ptr ds : [esi], offset public_5d6fac
        mov dword ptr ds : [eax], offset public_5d6f78
        call public_420750
        mov edi, dword ptr ss : [esp+0x40]
        lea eax, ds:[esi+0x60]
        mov ecx, ebx
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], 0xC0A00000
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x150], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4c902e
/*FIXUP public_4c8e74 : nop
        push offset public_5d6f6c @0x4c8e74*/
  FIXUP public_4c8e74 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f6c
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, edi
        je public_4c8f5a
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x44], eax
        call public_420750
/*FIXUP push offset public_5d6f64 @0x4c8e9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f64
        mov ecx, ebp
        mov dword ptr ds : [esi+0x150], 0
        call public_4c9610
        test al, al
        je public_4c8ec6
        mov dword ptr ds : [esi+0x150], 0x5C
        jmp public_4c901e
/*FIXUP public_4c8ec6 : nop
        push offset public_5d6f5c @0x4c8ec6*/
  FIXUP public_4c8ec6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f5c
        mov ecx, ebp
        call public_4c9610
        test al, al
        je public_4c8ee5
        mov dword ptr ds : [esi+0x150], 0x5E
        jmp public_4c901e
/*FIXUP public_4c8ee5 : nop
        push offset public_5d6f54 @0x4c8ee5*/
  FIXUP public_4c8ee5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f54
        mov ecx, ebp
        call public_4c9610
        test al, al
        je public_4c8f04
        mov dword ptr ds : [esi+0x150], 0x55
        jmp public_4c901e
/*FIXUP public_4c8f04 : nop
        push offset public_5d6f4c @0x4c8f04*/
  FIXUP public_4c8f04 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f4c
        mov ecx, ebp
        call public_4c9610
        test al, al
        je public_4c8f23
        mov dword ptr ds : [esi+0x150], 0x63
        jmp public_4c901e
/*FIXUP public_4c8f23 : nop
        push offset public_5d6f38 @0x4c8f23*/
  FIXUP public_4c8f23 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f38
        mov ecx, ebp
        call public_4c9610
        test al, al
        je public_4c8f42
        mov dword ptr ds : [esi+0x150], 0x73
        jmp public_4c901e
        public_4c8f42 : nop
        mov edx, dword ptr ss : [esp+0x40]
        push edx
/*FIXUP push offset public_5d6f10 @0x4c8f47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f10
        call dword ptr ds : [public_5c64a4]
        add esp, 8
        jmp public_4c901e
/*FIXUP public_4c8f5a : nop
        push offset public_5d6f08 @0x4c8f5a*/
  FIXUP public_4c8f5a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6f08
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, edi
        je public_4c8f82
        push 0
        call dword ptr ds : [public_5c6698]
        push eax
        push 0
        mov ecx, esi
        call public_59f1c0
        jmp public_4c901e
/*FIXUP public_4c8f82 : nop
        push offset public_5d6efc @0x4c8f82*/
  FIXUP public_4c8f82 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6efc
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, edi
        je public_4c8ffa
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x18]
        push 2
        mov ecx, edi
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi+0x60]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+8], edx
        lea ebx, ds:[esi+0xD0]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        lea eax, ds:[esi+0xAC]
        push eax
        mov ecx, esi
        mov dword ptr ds : [ebx+8], edx
        call public_4c92b0
        jmp public_4c901e
/*FIXUP public_4c8ffa : nop
        push offset public_5d6ef0 @0x4c8ffa*/
  FIXUP public_4c8ffa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6ef0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4c901e
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [esi+0x124], eax
        public_4c901e : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4c8e74
        public_4c902e : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        public_4c9047 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x4c8d40)
    }
}

#undef public_4c8e74
#undef public_4c8ec6
#undef public_4c8ee5
#undef public_4c8f04
#undef public_4c8f23
#undef public_4c8f42
#undef public_4c8f5a
#undef public_4c8f82
#undef public_4c8ffa
#undef public_4c901e
#undef public_4c902e
#undef public_4c9047
