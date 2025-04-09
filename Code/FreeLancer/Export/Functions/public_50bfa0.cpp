#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50a040);
CLANG_FORWARD_PROC_SYMBOL(public_50bfa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfc0b);

#define public_50bfdc _public_50bfdc
#define public_50bfde _public_50bfde
#define public_50c003 _public_50c003
#define public_50c019 _public_50c019

PROC_DECLARE(0x50bfa0, internal_50bfa0, public_50bfa0);
extern "C" NAKED register_t __cdecl internal_50bfa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfc0b @0x50bfa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfc0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push 0x78
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_50bfdc
        mov ecx, eax
        call public_50a040
        mov ebx, eax
        jmp public_50bfde
        public_50bfdc : nop
        xor ebx, ebx
        public_50bfde : nop
        push esi
        mov esi, dword ptr ds : [public_675060]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_50c003
        mov edi, eax
        public_50c003 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_50c019
        mov dword ptr ds : [eax], ebx
        public_50c019 : nop
        mov eax, dword ptr ds : [public_675064]
        mov ecx, dword ptr ss : [esp+8]
        inc eax
        mov dword ptr ds : [public_675064], eax
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x50bfa0)
    }
}

#undef public_50bfdc
#undef public_50bfde
#undef public_50c003
#undef public_50c019
