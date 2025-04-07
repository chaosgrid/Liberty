#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_63569c0);
CLANG_FORWARD_PROC_SYMBOL(public_6361530);

#define public_636188f _public_636188f
#define public_63618bd _public_63618bd

PROC_DECLARE(0x6361860, internal_6361860, public_6361860);
extern "C" NAKED register_t __cdecl internal_6361860()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+4]
        push edi
        push ebp
        mov edi, ecx
        call public_63569c0
        add esp, 4
        test eax, eax
        jne public_636188f
/*FIXUP push offset public_63ee6a0 @0x636187a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee6a0
        call dword ptr ds : [public_6399284]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_636188f : nop
        mov ebx, dword ptr ds : [edi+8]
        push esi
        mov ecx, ebx
        call public_6361530
        push eax
        push esi
        mov ecx, ebx
        call public_6352580
        test eax, eax
        je public_63618bd
        push ebp
/*FIXUP push offset public_63ee660 @0x63618a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee660
        call dword ptr ds : [public_6399284]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_63618bd : nop
        mov ebx, dword ptr ds : [edi+8]
        push esi
        mov ecx, ebx
        call public_6361530
        push eax
        push esi
        mov ecx, ebx
        call public_63523d0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x14], edi
        pop edi
        inc eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6361860)
    }
}

#undef public_636188f
#undef public_63618bd
