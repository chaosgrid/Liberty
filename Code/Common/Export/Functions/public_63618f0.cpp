#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_63569c0);
CLANG_FORWARD_PROC_SYMBOL(public_6361530);

#define public_636191f _public_636191f
#define public_636194d _public_636194d

PROC_DECLARE(0x63618f0, internal_63618f0, public_63618f0);
extern "C" NAKED register_t __cdecl internal_63618f0()
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
        jne public_636191f
/*FIXUP push offset public_63ee724 @0x636190a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee724
        call dword ptr ds : [public_6399284]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_636191f : nop
        mov ebx, dword ptr ds : [edi+0xC]
        push esi
        mov ecx, ebx
        call public_6361530
        push eax
        push esi
        mov ecx, ebx
        call public_6352580
        test eax, eax
        je public_636194d
        push ebp
/*FIXUP push offset public_63ee6e8 @0x6361938*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee6e8
        call dword ptr ds : [public_6399284]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_636194d : nop
        mov ebx, dword ptr ds : [edi+0xC]
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
        add eax, 2
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63618f0)
    }
}

#undef public_636191f
#undef public_636194d
