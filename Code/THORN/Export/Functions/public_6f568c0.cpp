#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f5691c _public_6f5691c
#define public_6f5693c _public_6f5693c
#define public_6f5694f _public_6f5694f

PROC_DECLARE(0x6f568c0, internal_6f568c0, public_6f568c0);
extern "C" NAKED register_t __cdecl internal_6f568c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        push esi
        push edi
        call dword ptr ds : [public_6f5a150]
        cdq 
        mov ecx, 0x7FFF
        idiv ecx
        push 0
        push 0
        push 1
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6f5b470]
        fstp qword ptr ss : [esp+0x1C]
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        mov edi, eax
        test edi, edi
        jne public_6f5691c
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_6f4b6f0
        add esp, 8
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6f5691c : nop
        push 0
        push 0
        push 2
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        mov esi, eax
        test esi, esi
        jne public_6f5693c
        mov esi, edi
        mov edi, 1
        public_6f5693c : nop
        cmp edi, esi
        jle public_6f5694f
/*FIXUP push offset public_6f61b80 @0x6f56940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61b80
        push 1
        call public_6f4f570
        add esp, 8
        public_6f5694f : nop
        sub esi, edi
        inc esi
        mov dword ptr ss : [esp+0xC], esi
        fild dword ptr ss : [esp+0xC]
        fmul qword ptr ss : [esp+0x10]
        call public_6f57f16
        add eax, edi
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f568c0)
    }
}

#undef public_6f5691c
#undef public_6f5693c
#undef public_6f5694f
