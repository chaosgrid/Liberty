#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57320);
CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f571be _public_6f571be
#define public_6f571cd _public_6f571cd
#define public_6f57206 _public_6f57206
#define public_6f5720e _public_6f5720e
#define public_6f57237 _public_6f57237
#define public_6f5726f _public_6f5726f
#define public_6f572af _public_6f572af
#define public_6f5730a _public_6f5730a

PROC_DECLARE(0x6f57160, internal_6f57160, public_6f57160);
extern "C" NAKED register_t __cdecl internal_6f57160()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x11C
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        call public_6f4f5e0
        mov esi, eax
        push 0
        push 2
        mov dword ptr ss : [esp+0x20], esi
        call public_6f4f5e0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        push ecx
        push 0x3FF00000
        push 0
        push 3
        mov ebx, eax
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        push eax
        call public_6f56b00
        mov edi, eax
        add esp, 8
        dec edi
        js public_6f571be
        cmp edi, dword ptr ss : [esp+0x1C]
        jle public_6f571cd
/*FIXUP public_6f571be : nop
        push offset public_6f61c50 @0x6f571be*/
  FIXUP public_6f571be : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61c50
        push 3
        call public_6f4f570
        add esp, 8
        public_6f571cd : nop
        push 4
        call public_6f4b090
        add esp, 4
        test eax, eax
        jne public_6f572af
/*FIXUP push offset public_6f61cb4 @0x6f571df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61cb4
        push ebx
        call dword ptr ds : [public_6f5a084]
        add esp, 8
        test eax, eax
        je public_6f572af
        cmp byte ptr ds : [ebx], 0x5E
        jne public_6f57206
        inc ebx
        mov dword ptr ss : [esp+0x18], 1
        jmp public_6f5720e
        public_6f57206 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6f5720e : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x20]
        push eax
        add edi, esi
        add edx, esi
        push ebx
        push edi
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], 0
        call public_6f57370
        mov esi, eax
        add esp, 0xC
        test esi, esi
        jne public_6f5726f
        public_6f57237 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, edi
        inc edi
        cmp ecx, eax
        jae public_6f5730a
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_6f5730a
        lea edx, ss:[esp+0x20]
        push edx
        push ebx
        push edi
        mov dword ptr ss : [esp+0x30], 0
        call public_6f57370
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_6f57237
        public_6f5726f : nop
        mov ebx, dword ptr ss : [esp+0x10]
        sub edi, ebx
        inc edi
        mov dword ptr ss : [esp+0x10], edi
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        sub esi, ebx
        mov dword ptr ss : [esp+0x18], esi
        fild dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        lea eax, ss:[esp+0x28]
        push eax
        call public_6f57320
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f572af : nop
        push ebx
        add edi, esi
        push edi
        call dword ptr ds : [public_6f5a160]
        add esp, 8
        test eax, eax
        je public_6f5730a
        sub eax, esi
        mov dword ptr ss : [esp+0x18], eax
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        mov edx, dword ptr ss : [esp+0x20]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], eax
        fild qword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f5730a : nop
        call public_6f4b6c0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f57160)
    }
}

#undef public_6f571be
#undef public_6f571cd
#undef public_6f57206
#undef public_6f5720e
#undef public_6f57237
#undef public_6f5726f
#undef public_6f572af
#undef public_6f5730a
