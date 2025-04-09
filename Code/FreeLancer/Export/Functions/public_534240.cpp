#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_52a4d0);
CLANG_FORWARD_PROC_SYMBOL(public_52a680);
CLANG_FORWARD_PROC_SYMBOL(public_534240);
CLANG_FORWARD_PROC_SYMBOL(public_535a20);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0918);

#define public_534270 _public_534270
#define public_53429d _public_53429d
#define public_5342ab _public_5342ab
#define public_53436e _public_53436e
#define public_534391 _public_534391
#define public_5343b9 _public_5343b9

PROC_DECLARE(0x534240, internal_534240, public_534240);
extern "C" NAKED register_t __cdecl internal_534240()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0918 @0x534248*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0918
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+0xC4]
        mov esi, dword ptr ss : [ebp]
        xor bl, bl
        cmp esi, ebp
        je public_5342ab
        lea ecx, ds:[ecx]
        public_534270 : nop
        test bl, bl
        jne public_5343b9
        mov ecx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_53429d
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        push ecx
        lea ecx, ds:[esi+8]
        mov bl, 1
        call dword ptr ds : [public_5c6978]
        public_53429d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_534270
        test bl, bl
        jne public_5343b9
        public_5342ab : nop
        call public_52a680
        mov ebp, dword ptr ss : [esp+0x60]
        push ebp
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x60]
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_534391
        push esi
        lea ecx, ss:[esp+0x18]
        mov bl, 1
        call dword ptr ds : [public_5c6974]
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x14], offset public_5dd328
        mov eax, dword ptr ds : [edi+0xC4]
        lea ecx, ds:[edi+0xC0]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x60], 0
        call public_535a20
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call dword ptr ds : [public_5c6890]
        mov ecx, dword ptr ds : [edi+0xC4]
        mov ecx, dword ptr ds : [ecx+4]
        push edi
        add ecx, 8
        call public_52a4d0
        mov edx, dword ptr ds : [edi+0xC4]
        mov ecx, dword ptr ds : [edx+4]
        add ecx, 8
        call dword ptr ds : [public_5c6970]
        fld dword ptr ss : [esp+0x6C]
        fcomp dword ptr ds : [public_5c7500]
        fnstsw ax
        test ah, 0x44
        jnp public_53436e
        mov ecx, dword ptr ds : [edi+0xC4]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        add ecx, 8
        call dword ptr ds : [public_5c696c]
        public_53436e : nop
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ds : [edi+0xC4]
        push eax
        push ecx
        mov ecx, dword ptr ds : [edx+4]
        add ecx, 8
        call dword ptr ds : [public_5c6978]
        jmp public_5343b9
        public_534391 : nop
        mov ecx, ebp
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x2B8
/*FIXUP push offset public_5de4c4 @0x5343a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de4c4
/*FIXUP push offset public_5de4f8 @0x5343ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de4f8
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_5343b9 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0x14
        UNREACHABLE_TRAP(0x534240)
    }
}

#undef public_534270
#undef public_53429d
#undef public_5342ab
#undef public_53436e
#undef public_534391
#undef public_5343b9
