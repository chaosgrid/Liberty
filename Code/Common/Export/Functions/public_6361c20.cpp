#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_6361530);
CLANG_FORWARD_PROC_SYMBOL(public_6362080);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639845b);

#define public_6361c6c _public_6361c6c
#define public_6361c91 _public_6361c91
#define public_6361ca3 _public_6361ca3

PROC_DECLARE(0x6361c20, internal_6361c20, public_6361c20);
extern "C" NAKED register_t __cdecl internal_6361c20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639845b @0x6361c28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639845b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        push edi
        mov dword ptr ds : [eax+4], ebp
        mov edi, dword ptr ds : [esi+0x24]
        mov ebx, dword ptr ds : [esi+8]
        push edi
        mov ecx, ebx
        call public_6361530
        push eax
        push edi
        mov ecx, ebx
        call public_6352580
        mov ecx, dword ptr ds : [esi+0x24]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ds : [ecx+4], edi
        je public_6361c6c
        xor eax, eax
        jmp public_6361ca3
        public_6361c6c : nop
        push 0x28
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_6361c91
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push ebp
        mov ecx, eax
        call public_6362080
        mov edi, eax
        public_6361c91 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        mov eax, edi
        public_6361ca3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6361c20)
    }
}

#undef public_6361c6c
#undef public_6361c91
#undef public_6361ca3
