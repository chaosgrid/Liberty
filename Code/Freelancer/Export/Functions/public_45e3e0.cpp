#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c830);
CLANG_FORWARD_PROC_SYMBOL(public_45e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba36c);

#define public_45e431 _public_45e431
#define public_45e44b _public_45e44b
#define public_45e454 _public_45e454

PROC_DECLARE(0x45e3e0, internal_45e3e0, public_45e3e0);
extern "C" NAKED register_t __cdecl internal_45e3e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba36c @0x45e3e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba36c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5cef80
        mov al, byte ptr ds : [esi+0x15]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ss : [esp+0x14], ebx
        je public_45e431
        mov eax, dword ptr ds : [public_5c6d4c]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_41c830
        add esp, 4
        mov byte ptr ds : [esi+0x15], bl
        public_45e431 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_45e454
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_45e44b
        cmp cl, 0xFF
        je public_45e44b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_45e454
        public_45e44b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_45e454 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x45e3e0)
    }
}

#undef public_45e431
#undef public_45e44b
#undef public_45e454
