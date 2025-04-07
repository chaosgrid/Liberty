#include "System-PCH.h"


#define public_6f116b3 _public_6f116b3
#define public_6f116b7 _public_6f116b7
#define public_6f116c9 _public_6f116c9
#define public_6f116f1 _public_6f116f1
#define public_6f116f7 _public_6f116f7
#define public_6f11707 _public_6f11707

PROC_DECLARE(0x6f11690, internal_6f11690, public_6f11690);
extern "C" NAKED register_t __cdecl internal_6f11690()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        xor eax, eax
        or esi, 0xFFFFFFFF
        test edi, edi
        mov dword ptr ss : [esp+8], eax
        je public_6f11707
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        jmp public_6f116b7
        public_6f116b3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6f116b7 : nop
        test eax, eax
        je public_6f116c9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_6f116c9 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6f13010 @0x6f116d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13010
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6f116f1
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [ecx+0xC]
        mov esi, eax
        test esi, esi
        je public_6f116f7
        public_6f116f1 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_6f116b3
        public_6f116f7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        pop ebp
        pop ebx
        je public_6f11707
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6f11707 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f11690)
    }
}

#undef public_6f116b3
#undef public_6f116b7
#undef public_6f116c9
#undef public_6f116f1
#undef public_6f116f7
#undef public_6f11707
