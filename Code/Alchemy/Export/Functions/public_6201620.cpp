#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201620);

#define public_6201633 _public_6201633
#define public_620169b _public_620169b
#define public_62016aa _public_62016aa

PROC_DECLARE(0x6201620, internal_6201620, public_6201620);
extern "C" NAKED register_t __cdecl internal_6201620()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [esp+0x40]
        test ebx, ebx
        mov dword ptr ss : [esp+4], ecx
        je public_62016aa
        push ebp
        push esi
        push edi
        public_6201633 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ebx]
/*FIXUP push offset public_6257880 @0x6201639*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257880
        push ecx
        push ebx
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0x2C]
        mov ebp, eax
        test ebp, ebp
        je public_620169b
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 0
        push ebx
        call dword ptr ds : [eax+0x40]
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, 0xC
        mov esi, offset public_6257880
        lea edi, ss:[esp+0x14]
        rep movsd
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, 0xC
        mov edi, offset public_6257880
        push ebp
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        call public_6201620
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        mov edi, offset public_6257880
        rep movsd
        public_620169b : nop
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x34]
        mov ebx, eax
        test ebx, ebx
        jne public_6201633
        pop edi
        pop esi
        pop ebp
        public_62016aa : nop
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6201620)
    }
}

#undef public_6201633
#undef public_620169b
#undef public_62016aa
