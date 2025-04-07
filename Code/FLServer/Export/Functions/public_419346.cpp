#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419346);
CLANG_FORWARD_PROC_SYMBOL(public_4193a4);
CLANG_FORWARD_PROC_SYMBOL(public_419452);

#define public_41936f _public_41936f
#define public_41938f _public_41938f

PROC_DECLARE(0x419346, internal_419346, public_419346);
extern "C" NAKED register_t __cdecl internal_419346()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_41ea30 @0x41934b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41ea30
/*FIXUP push offset _public_419452 @0x419350*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419452
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
        public_41936f : nop
        dec dword ptr ss : [ebp+0x10]
        js public_41938f
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_41936f
        push dword ptr ss : [ebp-0x14]
        call public_4193a4
        pop ecx
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        public_41938f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x419346)
    }
}

#undef public_41936f
#undef public_41938f
