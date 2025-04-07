#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb830);
CLANG_FORWARD_PROC_SYMBOL(public_6f804d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f81bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac826);

#define public_6efb885 _public_6efb885
#define public_6efb8ba _public_6efb8ba
#define public_6efb8bc _public_6efb8bc
#define public_6efb8be _public_6efb8be

PROC_DECLARE(0x6efb830, internal_6efb830, public_6efb830);
extern "C" NAKED register_t __cdecl internal_6efb830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac826 @0x6efb838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac826
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        mov ebx, dword ptr ds : [public_6fb3294]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_6fbc190 @0x6efb852*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc190
        push edi
        xor esi, esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6efb885
        push 0xBC
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], esi
        je public_6efb8ba
        mov ecx, eax
        call public_6f81bb0
        jmp public_6efb8bc
/*FIXUP public_6efb885 : nop
        push offset public_6fbbf98 @0x6efb885*/
  FIXUP public_6efb885 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf98
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6efb8be
        push 0xC4
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 1
        je public_6efb8ba
        mov ecx, eax
        call public_6f804d0
        jmp public_6efb8bc
        public_6efb8ba : nop
        xor eax, eax
        public_6efb8bc : nop
        mov esi, eax
        public_6efb8be : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        setne al
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6efb830)
    }
}

#undef public_6efb885
#undef public_6efb8ba
#undef public_6efb8bc
#undef public_6efb8be
