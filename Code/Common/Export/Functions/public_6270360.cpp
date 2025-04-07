#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ac10);
CLANG_FORWARD_PROC_SYMBOL(public_6270090);
CLANG_FORWARD_PROC_SYMBOL(public_6270360);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_62728f0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639281e);

#define public_6270395 _public_6270395
#define public_62703ac _public_62703ac
#define public_62703b3 _public_62703b3
#define public_6270462 _public_6270462
#define public_6270477 _public_6270477

PROC_DECLARE(0x6270360, internal_6270360, public_6270360);
extern "C" NAKED register_t __cdecl internal_6270360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639281e @0x6270362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639281e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], 2
        je public_62703b3
        public_6270395 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_62703ac
        mov ecx, edi
        call public_6270090
        push edi
        call public_6391d5a
        add esp, 4
        public_62703ac : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+4]
        jne public_6270395
        public_62703b3 : nop
        mov esi, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_632c410
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_62728a0
        lea esi, ss:[ebp+0xC]
        mov ecx, esi
        call public_62728f0
        lea edi, ss:[ebp+0x20]
        mov ecx, edi
        call public_62728f0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call public_626ac10
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], bl
        call public_626ac10
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        add esp, 8
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6270477
        public_6270462 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp esi, edi
        jne public_6270462
        public_6270477 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6270360)
    }
}

#undef public_6270395
#undef public_62703ac
#undef public_62703b3
#undef public_6270462
#undef public_6270477
