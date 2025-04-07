#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4192c6);
CLANG_FORWARD_PROC_SYMBOL(public_419346);
CLANG_FORWARD_PROC_SYMBOL(public_419452);

#define public_4192fd _public_4192fd
#define public_41930d _public_41930d
#define public_41932e _public_41932e
#define public_419345 _public_419345

PROC_DECLARE(0x4192c6, internal_4192c6, public_4192c6);
extern "C" NAKED register_t __cdecl internal_4192c6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_41ea20 @0x4192cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41ea20
/*FIXUP push offset _public_419452 @0x4192d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419452
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
        public_4192fd : nop
        dec dword ptr ss : [ebp+0x10]
        js public_41930d
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_4192fd
        public_41930d : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_41932e
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_41932e : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_419345
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_419346
        public_419345 : nop
        ret 
        UNREACHABLE_TRAP(0x4192c6)
    }
}

#undef public_4192fd
#undef public_41930d
#undef public_41932e
#undef public_419345
