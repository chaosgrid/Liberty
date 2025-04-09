#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_PROC_SYMBOL(public_5b7f46);
CLANG_FORWARD_PROC_SYMBOL(public_5b8082);

#define public_5b7efd _public_5b7efd
#define public_5b7f0d _public_5b7f0d
#define public_5b7f2e _public_5b7f2e
#define public_5b7f45 _public_5b7f45

PROC_DECLARE(0x5b7ec6, internal_5b7ec6, public_5b7ec6);
extern "C" NAKED register_t __cdecl internal_5b7ec6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_5e74a8 @0x5b7ecb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74a8
/*FIXUP push offset _public_5b8082 @0x5b7ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b8082
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        and dword ptr ss : [ebp-0x1C], 0
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, esi
        imul eax, dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp+8], eax
        and dword ptr ss : [ebp-4], 0
        public_5b7efd : nop
        dec dword ptr ss : [ebp+0x10]
        js public_5b7f0d
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_5b7efd
        public_5b7f0d : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_5b7f2e
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_5b7f2e : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_5b7f45
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_5b7f46
        public_5b7f45 : nop
        ret 
        UNREACHABLE_TRAP(0x5b7ec6)
    }
}

#undef public_5b7efd
#undef public_5b7f0d
#undef public_5b7f2e
#undef public_5b7f45
