#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206850);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_JUMP_SYMBOL(public_6247468);

#define public_62068c7 _public_62068c7
#define public_62068d2 _public_62068d2
#define public_620693f _public_620693f

PROC_DECLARE(0x6206850, internal_6206850, public_6206850);
extern "C" NAKED register_t __cdecl internal_6206850()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247468 @0x6206858*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247468
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_6257bc0]
        push edi
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x68]
        push eax
        push 0x13
        push ecx
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [public_6257bc0]
        mov eax, dword ptr ds : [eax+0x6C]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0x14
        push ecx
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [eax+0x60]
        and ecx, 0x400
        cmp ecx, 0x400
        sete al
        test al, al
        je public_62068c7
        mov edi, 2
        xor ecx, ecx
        jmp public_62068d2
        public_62068c7 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edi, 3
        public_62068d2 : nop
        mov eax, dword ptr ds : [public_6257bc0]
        push ecx
        push 0
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [public_6257bc0]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 8
        mov ecx, dword ptr ds : [eax]
        push edx
        push 8
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257908]
        mov dword ptr ss : [esp+0x7C], 0
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_6257978]
        test eax, eax
        jne public_620693f
        call public_623e830
        mov dword ptr ds : [public_6257978], eax
        public_620693f : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x4C
        push esi
        lea ecx, ss:[esp+0x18]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6257bc0]
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        lea edi, ss:[esp+0x44]
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x6206850)
    }
}

#undef public_62068c7
#undef public_62068d2
#undef public_620693f
