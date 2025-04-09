#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7f46);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_PROC_SYMBOL(public_5b8082);

#define public_5b7fe8 _public_5b7fe8
#define public_5b8003 _public_5b8003
#define public_5b8024 _public_5b8024
#define public_5b803b _public_5b803b

PROC_DECLARE(0x5b7fba, internal_5b7fba, public_5b7fba);
extern "C" NAKED register_t __cdecl internal_5b7fba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_5e74c8 @0x5b7fbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74c8
/*FIXUP push offset _public_5b8082 @0x5b7fc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b8082
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        xor eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-0x1C], eax
        public_5b7fe8 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_5b8003
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_5b7fe8
        public_5b8003 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_5b8024
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_5b8024 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_5b803b
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_5b7f46
        public_5b803b : nop
        ret 
        UNREACHABLE_TRAP(0x5b7fba)
    }
}

#undef public_5b7fe8
#undef public_5b8003
#undef public_5b8024
#undef public_5b803b
