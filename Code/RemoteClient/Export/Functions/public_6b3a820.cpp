#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a820);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a72b);

#define public_6b3a87c _public_6b3a87c
#define public_6b3a87e _public_6b3a87e
#define public_6b3a88c _public_6b3a88c
#define public_6b3a8a7 _public_6b3a8a7
#define public_6b3a8bf _public_6b3a8bf
#define public_6b3a8c3 _public_6b3a8c3

PROC_DECLARE(0x6b3a820, internal_6b3a820, public_6b3a820);
extern "C" NAKED register_t __cdecl internal_6b3a820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a72b @0x6b3a822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a72b
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
        jne public_6b3a88c
        push 0xC
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6b3a87c
        mov al, byte ptr ss : [esp+0x1C]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6b6a134
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        jmp public_6b3a87e
        public_6b3a87c : nop
        xor esi, esi
        public_6b3a87e : nop
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6b3a8c3
        public_6b3a88c : nop
        push ebx
        mov ebx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b3a8a7
        mov edi, eax
        public_6b3a8a7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b3a8bf
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        public_6b3a8bf : nop
        inc dword ptr ds : [ebx+8]
        pop ebx
        public_6b3a8c3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6b3a820)
    }
}

#undef public_6b3a87c
#undef public_6b3a87e
#undef public_6b3a88c
#undef public_6b3a8a7
#undef public_6b3a8bf
#undef public_6b3a8c3
