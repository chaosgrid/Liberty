#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700b40);

#define public_66f2fe2 _public_66f2fe2
#define public_66f2fec _public_66f2fec
#define public_66f3005 _public_66f3005
#define public_66f305e _public_66f305e

PROC_DECLARE(0x66f2ec0, internal_66f2ec0, public_66f2ec0);
extern "C" NAKED register_t __cdecl internal_66f2ec0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700b40 @0x66f2ec8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700b40
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        xor ebx, ebx
        or eax, 0xFFFFFFFF
        cmp edi, ebx
        je public_66f305e
        cmp dword ptr ds : [edi+0x1C], ebx
        je public_66f305e
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x2C]
        push edx
        push 7
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], 7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x20]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov dword ptr ss : [esp+0x44], ebx
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_67013f0 @0x66f2fa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov byte ptr ss : [esp+0x44], 3
        call dword ptr ds : [ecx]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        push edi
        jge public_66f2fe2
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        jmp public_66f2fec
        public_66f2fe2 : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_66f2fec : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x38], 2
        je public_66f3005
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x44], ebx
        public_66f3005 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x44], bl
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [edx+0xF0]
        mov eax, esi
        pop esi
        public_66f305e : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0x20
        UNREACHABLE_TRAP(0x66f2ec0)
    }
}

#undef public_66f2fe2
#undef public_66f2fec
#undef public_66f3005
#undef public_66f305e
