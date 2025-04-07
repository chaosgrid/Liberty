#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bba6b);

#define public_472094 _public_472094
#define public_472096 _public_472096
#define public_4720d7 _public_4720d7

PROC_DECLARE(0x472020, internal_472020, public_472020);
extern "C" NAKED register_t __cdecl internal_472020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bba6b @0x472022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bba6b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x350
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_472094
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        mov dword ptr ds : [esi], offset public_5d035c
        mov dword ptr ds : [esi+0x7C], offset public_5d0350
        mov dword ptr ds : [esi+0x32C], offset public_5d0348
        mov dword ptr ds : [esi+0x330], ebx
        mov dword ptr ds : [esi+0x334], ebx
        mov byte ptr ds : [esi+0x338], bl
        jmp public_472096
        public_472094 : nop
        xor esi, esi
        public_472096 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4720d7
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
        public_4720d7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x472020)
    }
}

#undef public_472094
#undef public_472096
#undef public_4720d7
