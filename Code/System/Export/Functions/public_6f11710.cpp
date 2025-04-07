#include "System-PCH.h"


#define public_6f11735 _public_6f11735
#define public_6f11740 _public_6f11740
#define public_6f11752 _public_6f11752
#define public_6f1177a _public_6f1177a
#define public_6f11780 _public_6f11780
#define public_6f11790 _public_6f11790

PROC_DECLARE(0x6f11710, internal_6f11710, public_6f11710);
extern "C" NAKED register_t __cdecl internal_6f11710()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        xor eax, eax
        test edi, edi
        mov esi, 1
        mov dword ptr ss : [esp+8], eax
        je public_6f11790
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        jmp public_6f11740
        public_6f11735 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6f11740 : nop
        test eax, eax
        je public_6f11752
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_6f11752 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6f13010 @0x6f1175c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13010
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6f1177a
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        test esi, esi
        je public_6f11780
        public_6f1177a : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_6f11735
        public_6f11780 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        pop ebp
        pop ebx
        je public_6f11790
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6f11790 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f11710)
    }
}

#undef public_6f11735
#undef public_6f11740
#undef public_6f11752
#undef public_6f1177a
#undef public_6f11780
#undef public_6f11790
