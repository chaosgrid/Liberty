#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d621fe);

#define public_6d1be06 _public_6d1be06
#define public_6d1be1b _public_6d1be1b
#define public_6d1be34 _public_6d1be34
#define public_6d1be4b _public_6d1be4b

PROC_DECLARE(0x6d1bdd0, internal_6d1bdd0, public_6d1bdd0);
extern "C" NAKED register_t __cdecl internal_6d1bdd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d621fe @0x6d1bdd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d621fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0x4C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x48]
        mov dword ptr ss : [esp+0x20], 2
        je public_6d1be1b
        public_6d1be06 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d23fd0
        cmp esi, ebx
        jne public_6d1be06
        public_6d1be1b : nop
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebx, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x3C]
        mov byte ptr ss : [esp+0x20], 1
        je public_6d1be4b
        public_6d1be34 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6d23fd0
        cmp esi, ebx
        jne public_6d1be34
        xor eax, eax
        public_6d1be4b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        mov dword ptr ss : [ebp+0x30], eax
        mov dword ptr ss : [ebp+0x34], eax
        mov dword ptr ss : [ebp+0x38], eax
        pop esi
        mov dword ptr ss : [ebp], offset public_6d68b9c
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d1bdd0)
    }
}

#undef public_6d1be06
#undef public_6d1be1b
#undef public_6d1be34
#undef public_6d1be4b
