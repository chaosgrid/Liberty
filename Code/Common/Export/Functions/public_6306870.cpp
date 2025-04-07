#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d48);
CLANG_FORWARD_PROC_SYMBOL(public_6391d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6391d54);
CLANG_FORWARD_JUMP_SYMBOL(public_639608b);

#define public_6306902 _public_6306902

PROC_DECLARE(0x6306870, internal_6306870, public_6306870);
extern "C" NAKED register_t __cdecl internal_6306870()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639608b @0x6306878*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639608b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        xor al, al
        test ecx, ecx
        je public_6306902
        mov edx, dword ptr ds : [ebx+8]
        test edx, edx
        je public_6306902
        push esi
        push edi
        call public_6391d42
        lea ecx, ss:[esp+0xC]
        mov esi, eax
        call public_6391d3c
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xF8], 0
        call public_6391d4e
        lea ecx, ss:[esp+0xC]
        call public_6391d48
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0xC]
        push eax
        call public_6391d54
        lea ecx, ss:[esp+0xC]
        mov bl, al
        mov dword ptr ss : [esp+0xF0], 0xFFFFFFFF
        call public_6391d30
        pop edi
        mov al, bl
        pop esi
        public_6306902 : nop
        mov ecx, dword ptr ss : [esp+0xE0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 
        UNREACHABLE_TRAP(0x6306870)
    }
}

#undef public_6306902
