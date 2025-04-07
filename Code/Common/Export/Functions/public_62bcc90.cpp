#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bcc90);

#define public_62bccce _public_62bccce
#define public_62bcd23 _public_62bcd23
#define public_62bcd3f _public_62bcd3f

PROC_DECLARE(0x62bcc90, internal_62bcc90, public_62bcc90);
extern "C" NAKED register_t __cdecl internal_62bcc90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        mov dword ptr ds : [ebx], esi
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        cmp eax, 1
        je public_62bccce
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, 0x100001
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x1E9
/*FIXUP push offset public_639edec @0x62bccbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639edec
/*FIXUP push offset public_639ee88 @0x62bccc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ee88
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62bccce : nop
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebp
        mov ebp, dword ptr ds : [edi]
        call dword ptr ds : [edx+0x10]
        push eax
        mov ecx, edi
        call dword ptr ss : [ebp]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639a1d0]
        pop ebp
        fnstsw ax
        test ah, 1
        je public_62bcd23
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov ebx, 0x100001
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x1F5
/*FIXUP push offset public_639edec @0x62bcd13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639edec
/*FIXUP push offset public_639ee20 @0x62bcd18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ee20
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        public_62bcd23 : nop
        fld dword ptr ss : [esp+0x10]
        pop edi
        fcomp dword ptr ds : [public_6399408]
        pop esi
        pop ebx
        fnstsw ax
        test ah, 0x41
        jne public_62bcd3f
        mov eax, 1
        ret 8
        public_62bcd3f : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62bcc90)
    }
}

#undef public_62bccce
#undef public_62bcd23
#undef public_62bcd3f
