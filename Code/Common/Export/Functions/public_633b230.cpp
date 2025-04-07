#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_633d770);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_633b268 _public_633b268
#define public_633b2ba _public_633b2ba
#define public_633b2fa _public_633b2fa
#define public_633b2fe _public_633b2fe
#define public_633b300 _public_633b300
#define public_633b320 _public_633b320
#define public_633b33c _public_633b33c

PROC_DECLARE(0x633b230, internal_633b230, public_633b230);
extern "C" NAKED register_t __cdecl internal_633b230()
{
    __asm
    {
        mov eax, 0x2020
        call public_6391dc0
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x8C]
        test eax, eax
        push esi
        push edi
        jne public_633b2ba
/*FIXUP push offset public_63a4948 @0x633b249*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4948
        call public_632e9f0
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        je public_633b2ba
        public_633b268 : nop
        mov esi, dword ptr ds : [edi+0xC10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x84]
        jne public_633b268
        public_633b2ba : nop
        mov ecx, dword ptr ds : [ebx+0x8C]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x2034]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0x800
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [esp+0x28]
        xor ecx, ecx
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0xC], ecx
        jbe public_633b33c
        cmp edi, eax
        lea ebx, ss:[esp+0x2C]
        jae public_633b2fe
        public_633b2fa : nop
        mov esi, dword ptr ds : [ebx]
        jmp public_633b300
        public_633b2fe : nop
        xor esi, esi
        public_633b300 : nop
        mov eax, dword ptr ss : [esp+0x2030]
        push esi
        push eax
        call public_633d770
        add esp, 8
        test al, al
        jne public_633b320
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        or dword ptr ss : [esp+0xC], eax
        public_633b320 : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc edi
        add ebx, 4
        cmp edi, eax
        jb public_633b2fa
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x2020
        ret 4
        public_633b33c : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        add esp, 0x2020
        ret 4
        UNREACHABLE_TRAP(0x633b230)
    }
}

#undef public_633b268
#undef public_633b2ba
#undef public_633b2fa
#undef public_633b2fe
#undef public_633b300
#undef public_633b320
#undef public_633b33c
