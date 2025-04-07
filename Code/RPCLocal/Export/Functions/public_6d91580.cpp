#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db266b);

#define public_6d915dc _public_6d915dc
#define public_6d915de _public_6d915de
#define public_6d915ec _public_6d915ec
#define public_6d91607 _public_6d91607
#define public_6d9161f _public_6d9161f
#define public_6d91623 _public_6d91623

PROC_DECLARE(0x6d91580, internal_6d91580, public_6d91580);
extern "C" NAKED register_t __cdecl internal_6d91580()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db266b @0x6d91582*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db266b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi], 0
        jne public_6d915ec
        push 0xC
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6d915dc
        mov al, byte ptr ss : [esp+0x1C]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6db1f8a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        jmp public_6d915de
        public_6d915dc : nop
        xor esi, esi
        public_6d915de : nop
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6d91623
        public_6d915ec : nop
        push ebx
        mov ebx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d91607
        mov edi, eax
        public_6d91607 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d9161f
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        public_6d9161f : nop
        inc dword ptr ds : [ebx+8]
        pop ebx
        public_6d91623 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d91580)
    }
}

#undef public_6d915dc
#undef public_6d915de
#undef public_6d915ec
#undef public_6d91607
#undef public_6d9161f
#undef public_6d91623
