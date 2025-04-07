#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62932a0);
CLANG_FORWARD_PROC_SYMBOL(public_62994a0);
CLANG_FORWARD_PROC_SYMBOL(public_630eb70);

#define public_62994c6 _public_62994c6
#define public_62994d0 _public_62994d0
#define public_6299535 _public_6299535
#define public_6299541 _public_6299541
#define public_6299568 _public_6299568

PROC_DECLARE(0x62994a0, internal_62994a0, public_62994a0);
extern "C" NAKED register_t __cdecl internal_62994a0()
{
    __asm
    {
        sub esp, 0x4C
        mov eax, dword ptr ss : [esp+0x50]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call public_62932a0
        test al, al
        je public_6299568
        xor ebx, ebx
        lea ebp, ds:[esi+0x58]
        jmp public_62994d0
        public_62994c6 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx]
        public_62994d0 : nop
        lea edx, ss:[esp+0x14]
        push edx
        mov cl, bl
        add cl, 0x31
        lea eax, ss:[esp+0x64]
        mov byte ptr ds : [public_63eb6b7], cl
        mov edx, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_63eb6b0 @0x62994e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eb6b0
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        push eax
        call public_630eb70
        add esp, 0x10
        test al, al
        je public_6299541
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, ebp
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        rep movsd
        lea ecx, ss:[ebp+0x24]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        inc ebx
        mov dword ptr ds : [ecx+4], eax
        add ebp, 0x34
        cmp ebx, 8
        mov dword ptr ds : [ecx+8], edx
        jb public_62994c6
        public_6299535 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x4C
        ret 4
        public_6299541 : nop
        test ebx, ebx
        jne public_6299535
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        push edx
        push 0x6F
/*FIXUP push offset public_639d304 @0x629954e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d304
        mov eax, 0x100001
/*FIXUP push offset public_639d330 @0x6299558*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d330
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6299568 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x62994a0)
    }
}

#undef public_62994c6
#undef public_62994d0
#undef public_6299535
#undef public_6299541
#undef public_6299568
