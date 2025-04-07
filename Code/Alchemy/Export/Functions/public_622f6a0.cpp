#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_622f880);
CLANG_FORWARD_PROC_SYMBOL(public_622ff00);
CLANG_FORWARD_PROC_SYMBOL(public_6231470);
CLANG_FORWARD_PROC_SYMBOL(public_6231d30);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);
CLANG_FORWARD_JUMP_SYMBOL(public_6249841);

#define public_622f6ef _public_622f6ef
#define public_622f75a _public_622f75a
#define public_622f7ab _public_622f7ab
#define public_622f7ad _public_622f7ad
#define public_622f7c8 _public_622f7c8
#define public_622f82d _public_622f82d
#define public_622f851 _public_622f851
#define public_622f855 _public_622f855
#define public_622f868 _public_622f868

PROC_DECLARE(0x622f6a0, internal_622f6a0, public_622f6a0);
extern "C" NAKED register_t __cdecl internal_622f6a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249841 @0x622f6a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249841
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6257ad4]
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        xor ebx, ebx
        push ebp
        cmp eax, ebx
        push edi
        jne public_622f6ef
        mov eax, dword ptr ds : [public_6257ad8]
        mov edi, dword ptr ds : [public_6257ac8]
        sub eax, edi
        mov edx, dword ptr ds : [public_6257ac4]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257acc]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_622f880
        public_622f6ef : nop
        mov ebp, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [ebp+0xC0]
        cmp dword ptr ds : [ecx+0x74], ebx
        je public_622f868
        xor edx, edx
        push esi
        mov dword ptr ss : [esp+0x40], edx
        mov eax, dword ptr ds : [public_6257b98]
        mov dword ptr ss : [esp+0x38], ebx
        cmp eax, ebx
        je public_622f855
        mov edx, dword ptr ds : [public_6257b90]
        mov ecx, dword ptr ds : [ecx+0x70]
        mov esi, dword ptr ds : [edx]
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [public_6257b90]
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        push ecx
        call dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_622f851
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_622f75a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_622f75a : nop
        mov esi, dword ptr ss : [esp+0x44]
        mov ecx, 6
        lea edi, ss:[esp+0x18]
        rep movsd
        lea esi, ss:[ebp+0xB4]
        mov ecx, dword ptr ds : [esi+8]
        mov byte ptr ss : [esp+0x38], 1
        call public_623ec90
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x38], 2
        je public_622f7ab
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x48]
        push edi
        push ecx
        lea ecx, ss:[esp+0x20]
        push edx
        push ecx
        push ebp
        mov ecx, eax
        call public_6231d30
        jmp public_622f7ad
        public_622f7ab : nop
        xor eax, eax
        public_622f7ad : nop
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x3C], 1
        call public_6231470
        cmp edi, ebx
        mov byte ptr ss : [esp+0x38], bl
        je public_622f7c8
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        public_622f7c8 : nop
        mov eax, dword ptr ss : [ebp+0xB8]
        mov ecx, 0x3F800000
        push ebx
        push eax
        mov dword ptr ds : [eax+0x30], ebx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ebx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ebx
        mov dword ptr ds : [eax+0x54], ebx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x48], ebx
        mov dword ptr ds : [eax+0x44], ebx
        mov dword ptr ds : [eax+0x40], ebx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x64], ebx
        mov dword ptr ds : [eax+0x60], ebx
        mov dword ptr ds : [eax+0x5C], ebx
        mov ecx, ebp
        mov dword ptr ds : [eax+0x68], ebx
        call public_622ff00
        fld dword ptr ss : [ebp+0x8C]
        fcomp qword ptr ds : [public_624e7e8]
        fnstsw ax
        test ah, 0x44
        jnp public_622f82d
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        public_622f82d : nop
        fld dword ptr ss : [ebp+0x90]
        fcomp qword ptr ds : [public_624c370]
        fnstsw ax
        test ah, 0x44
        jnp public_622f851
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [ebp+0x90]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        public_622f851 : nop
        mov edx, dword ptr ss : [esp+0x40]
        public_622f855 : nop
        cmp edx, ebx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        pop esi
        je public_622f868
        mov eax, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [eax+8]
        public_622f868 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0x10
        UNREACHABLE_TRAP(0x622f6a0)
    }
}

#undef public_622f6ef
#undef public_622f75a
#undef public_622f7ab
#undef public_622f7ad
#undef public_622f7c8
#undef public_622f82d
#undef public_622f851
#undef public_622f855
#undef public_622f868
