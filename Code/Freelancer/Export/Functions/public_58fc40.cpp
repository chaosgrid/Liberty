#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58c6e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c488b);

#define public_58fcac _public_58fcac
#define public_58fcae _public_58fcae
#define public_58fcef _public_58fcef

PROC_DECLARE(0x58fc40, internal_58fc40, public_58fc40);
extern "C" NAKED register_t __cdecl internal_58fc40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c488b @0x58fc42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c488b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x58C
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_58fcac
        mov ecx, esi
        call public_58c6e0
        mov dword ptr ds : [esi], offset public_5e524c
        mov dword ptr ds : [esi+0x7C], offset public_5e5240
        mov dword ptr ds : [esi+0x578], edi
        mov dword ptr ds : [esi+0x584], edi
        mov dword ptr ds : [esi+0x57C], edi
        mov dword ptr ds : [esi+0x580], edi
        mov dword ptr ds : [esi+0x588], edi
        jmp public_58fcae
        public_58fcac : nop
        xor esi, esi
        public_58fcae : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add ebx, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_58fcef
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_58fcef : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x58fc40)
    }
}

#undef public_58fcac
#undef public_58fcae
#undef public_58fcef
