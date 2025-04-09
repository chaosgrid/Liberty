#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7f46);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fa4);
CLANG_FORWARD_PROC_SYMBOL(public_5b8082);

#define public_5b7f6f _public_5b7f6f
#define public_5b7f8f _public_5b7f8f

PROC_DECLARE(0x5b7f46, internal_5b7f46, public_5b7f46);
extern "C" NAKED register_t __cdecl internal_5b7f46()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_5e74b8 @0x5b7f4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74b8
/*FIXUP push offset _public_5b8082 @0x5b7f50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b8082
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        and dword ptr ss : [ebp-4], 0
        public_5b7f6f : nop
        dec dword ptr ss : [ebp+0x10]
        js public_5b7f8f
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_5b7f6f
        push dword ptr ss : [ebp-0x14]
        call public_5b7fa4
        pop ecx
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        public_5b7f8f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x5b7f46)
    }
}

#undef public_5b7f6f
#undef public_5b7f8f
