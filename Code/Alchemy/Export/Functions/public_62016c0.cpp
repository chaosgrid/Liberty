#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201620);

#define public_62016d4 _public_62016d4
#define public_6201786 _public_6201786
#define public_62017ee _public_62017ee
#define public_62017fb _public_62017fb

PROC_DECLARE(0x62016c0, internal_62016c0, public_62016c0);
extern "C" NAKED register_t __cdecl internal_62016c0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        push esi
        push edi
        test ebx, ebx
        jne public_62016d4
        mov ebx, dword ptr ds : [public_62578b0]
        public_62016d4 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [public_62578a0], 0x3F800000
        mov dword ptr ds : [public_6257890], 0x3F800000
        mov dword ptr ds : [public_6257880], 0x3F800000
        mov dword ptr ds : [public_625789c], 0
        mov dword ptr ds : [public_6257898], 0
        mov dword ptr ds : [public_6257894], 0
        mov dword ptr ds : [public_625788c], 0
        mov dword ptr ds : [public_6257888], 0
        mov dword ptr ds : [public_6257884], 0
        mov dword ptr ds : [public_62578ac], 0
        mov dword ptr ds : [public_62578a8], 0
        mov dword ptr ds : [public_62578a4], 0
        mov eax, dword ptr ds : [ebx]
/*FIXUP push offset public_6257880 @0x6201752*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257880
        push ecx
        push ebx
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x4C]
        push eax
        push 0
        push ebx
        call dword ptr ds : [edx+0x40]
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, 0xC
        mov edi, offset public_6257880
        push ebx
        rep movsd
        mov ecx, dword ptr ds : [ebx]
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_62017fb
        push ebp
        mov ebx, eax
        public_6201786 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ebx]
/*FIXUP push offset public_6257880 @0x620178c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257880
        push eax
        push ebx
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x2C]
        mov ebp, eax
        test ebp, ebp
        je public_62017ee
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x10]
        push eax
        push 0
        push ebx
        call dword ptr ds : [edx+0x40]
        mov ecx, 0xC
        mov esi, offset public_6257880
        lea edi, ss:[esp+0x14]
        push ebp
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, 0xC
        mov edi, offset public_6257880
        rep movsd
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        call public_6201620
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        mov edi, offset public_6257880
        rep movsd
        public_62017ee : nop
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0x34]
        mov ebx, eax
        test ebx, ebx
        jne public_6201786
        pop ebp
        public_62017fb : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x62016c0)
    }
}

#undef public_62016d4
#undef public_6201786
#undef public_62017ee
#undef public_62017fb
