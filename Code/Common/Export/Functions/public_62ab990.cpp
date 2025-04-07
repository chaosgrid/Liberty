#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293780);
CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a02a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab9e0 _public_62ab9e0
#define public_62aba0d _public_62aba0d
#define public_62aba36 _public_62aba36
#define public_62aba48 _public_62aba48

PROC_DECLARE(0x62ab990, internal_62ab990, public_62ab990);
extern "C" NAKED register_t __cdecl internal_62ab990()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        or ebx, 0xFFFFFFFF
        call public_6334510
        add esp, 4
        test al, al
        push esi
        je public_62aba0d
        lea ecx, ds:[edi+0xE4]
        call public_629b6c0
        test eax, eax
        je public_62aba48
        push eax
        call public_6293780
        add esp, 4
        test eax, eax
        je public_62ab9e0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        pop edi
        pop esi
        pop ebx
        ret 4
        lea ebx, ds:[ebx]
/*FIXUP public_62ab9e0 : nop
        push offset public_639e324 @0x62ab9e0*/
  FIXUP public_62ab9e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e324
        push 0x4EE
/*FIXUP push offset public_639e254 @0x62ab9ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62ab9f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_62aba0d : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62aba36
        push esi
        lea ecx, ds:[edi+0x144]
        call public_62a1540
        test eax, eax
        je public_62aba48
        mov ecx, eax
        call public_62a02a0
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62aba36 : nop
        cmp word ptr ds : [public_63a4aa6], si
        jne public_62aba48
        mov eax, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62aba48 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ab990)
    }
}

#undef public_62ab9e0
#undef public_62aba0d
#undef public_62aba36
#undef public_62aba48
