#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_638afe0);
CLANG_FORWARD_PROC_SYMBOL(public_638c530);

#define public_638b06e _public_638b06e
#define public_638b08b _public_638b08b
#define public_638b0c3 _public_638b0c3
#define public_638b0cf _public_638b0cf
#define public_638b12c _public_638b12c

PROC_DECLARE(0x638afe0, internal_638afe0, public_638afe0);
extern "C" NAKED register_t __cdecl internal_638afe0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x44
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_638b12c
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call public_638c530
        mov eax, dword ptr ss : [ebp+0x10]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call public_638c530
        fld qword ptr ss : [esp+0x40]
        fsub qword ptr ss : [esp+0x20]
        add esp, 0x10
        fabs 
        fcomp qword ptr ds : [public_63a5970]
        fnstsw ax
        test ah, 0x41
        je public_638b06e
        fld qword ptr ss : [esp+0x38]
        fsub qword ptr ss : [esp+0x18]
        fabs 
        fcomp qword ptr ds : [public_63a5970]
        fnstsw ax
        test ah, 0x41
        je public_638b06e
        fld qword ptr ss : [esp+0x40]
        fsub qword ptr ss : [esp+0x20]
        fabs 
        fcomp qword ptr ds : [public_63a5970]
        fnstsw ax
        test ah, 0x41
        je public_638b06e
        mov esi, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63f99dc @0x638b061*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99dc
        push edi
        call esi
        add esp, 8
        jmp public_638b0c3
        public_638b06e : nop
        mov esi, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63f99cc @0x638b074*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99cc
        push edi
        call esi
        add esp, 8
        lea ebx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], 3
        public_638b08b : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push edx
/*FIXUP push offset public_63f82f8 @0x638b092*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82f8
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        add ebx, 8
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638b08b
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f99c4 @0x638b0b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99c4
        push edi
        call esi
        add esp, 0xC
        public_638b0c3 : nop
        lea ebx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xC], 3
        public_638b0cf : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push edx
/*FIXUP push offset public_63f82f8 @0x638b0d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82f8
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        add ebx, 8
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638b0cf
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f99c4 @0x638b0fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99c4
        push edi
        call esi
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 0xC
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
/*FIXUP push offset public_63f99ac @0x638b121*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99ac
        push edi
        call esi
        add esp, 0x20
        public_638b12c : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638afe0)
    }
}

#undef public_638b06e
#undef public_638b08b
#undef public_638b0c3
#undef public_638b0cf
#undef public_638b12c
