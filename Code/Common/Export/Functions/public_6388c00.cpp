#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_6388c00);

#define public_6388c76 _public_6388c76
#define public_6388cdc _public_6388cdc
#define public_6388d04 _public_6388d04

PROC_DECLARE(0x6388c00, internal_6388c00, public_6388c00);
extern "C" NAKED register_t __cdecl internal_6388c00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        je public_6388d04
        mov ebx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ebx+0x4C]
        push ecx
/*FIXUP push offset public_63f8294 @0x6388c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8294
        push eax
        call dword ptr ds : [public_63991e8]
        fld qword ptr ss : [ebp+0x18]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x40
        jne public_6388c76
        fld qword ptr ss : [ebp+0x18]
        mov eax, esi
        fchs 
        fstp qword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        push ebx
        push eax
        call public_6381270
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [ebp+0x10]
        push edi
        push ecx
        push ebx
        push edx
        mov esi, eax
        call public_6381270
        add esp, 0x20
        mov edi, eax
        public_6388c76 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push 0
        push 0
        push eax
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [public_63991e8]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ecx
/*FIXUP push offset public_63f826c @0x6388ca5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f826c
        push edx
        call ebx
        fld qword ptr ss : [ebp+0x18]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0x38
        fnstsw ax
        test ah, 0x40
        jne public_6388cdc
        mov eax, dword ptr ds : [public_658b804]
        push eax
        push esi
        call public_6377fe0
        mov ecx, dword ptr ds : [public_658b804]
        push ecx
        push edi
        call public_6377fe0
        add esp, 0x10
        public_6388cdc : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        push edx
        mov edx, dword ptr ds : [eax+0xC]
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push edx
        push eax
/*FIXUP push offset public_63f8254 @0x6388cf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8254
        push ecx
        call ebx
        add esp, 0x20
        public_6388d04 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6388c00)
    }
}

#undef public_6388c76
#undef public_6388cdc
#undef public_6388d04
