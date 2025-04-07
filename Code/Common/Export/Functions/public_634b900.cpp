#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b900);
CLANG_FORWARD_PROC_SYMBOL(public_63556b0);
CLANG_FORWARD_PROC_SYMBOL(public_63556e0);
CLANG_FORWARD_PROC_SYMBOL(public_6355770);
CLANG_FORWARD_PROC_SYMBOL(public_6356240);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397cfb);

#define public_634b960 _public_634b960
#define public_634b962 _public_634b962
#define public_634b97a _public_634b97a

PROC_DECLARE(0x634b900, internal_634b900, public_634b900);
extern "C" NAKED register_t __cdecl internal_634b900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397cfb @0x634b902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397cfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0x24]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [edx+0x98]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov ebx, dword ptr ds : [ecx+0x98]
        push ebp
        push ebx
        mov ecx, edi
        call public_6355770
        mov esi, eax
        test esi, esi
        jne public_634b97a
        push 0x30
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], esi
        je public_634b960
        mov ecx, eax
        call public_6356240
        jmp public_634b962
        public_634b960 : nop
        xor eax, eax
        public_634b962 : nop
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x2C], ebp
        call public_63556e0
        public_634b97a : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, esi
        call public_63556b0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x634b900)
    }
}

#undef public_634b960
#undef public_634b962
#undef public_634b97a
