#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244430);
CLANG_FORWARD_JUMP_SYMBOL(public_624aa18);

#define public_624445d _public_624445d
#define public_624447b _public_624447b
#define public_624448d _public_624448d
#define public_624449c _public_624449c
#define public_62444aa _public_62444aa
#define public_62444b7 _public_62444b7
#define public_62444c9 _public_62444c9
#define public_62444d0 _public_62444d0
#define public_62444f1 _public_62444f1

PROC_DECLARE(0x6244430, internal_6244430, public_6244430);
extern "C" NAKED register_t __cdecl internal_6244430()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624aa18 @0x6244438*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624aa18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebx, eax
        push esi
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        je public_624445d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_624445d : nop
        mov ebp, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x18], 0
        lea esi, ss:[esp+0x24]
        mov edi, dword ptr ss : [ebp+0xA0]
        cmp edx, edi
        je public_62444aa
        public_624447b : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_624448d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_624448d : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_624449c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_624449c : nop
        add esi, 4
        lea eax, ds:[esi+4]
        cmp eax, edi
        jne public_624447b
        mov ebx, dword ptr ss : [esp+0x24]
        public_62444aa : nop
        mov edi, dword ptr ss : [ebp+0xA0]
        lea esi, ds:[edi-4]
        cmp esi, edi
        je public_62444d0
        public_62444b7 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62444c9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62444c9 : nop
        add esi, 4
        cmp esi, edi
        jne public_62444b7
        public_62444d0 : nop
        mov ecx, dword ptr ss : [ebp+0xA0]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        add ecx, 0xFFFFFFFC
        test ebx, ebx
        mov dword ptr ss : [ebp+0xA0], ecx
        je public_62444f1
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_62444f1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6244430)
    }
}

#undef public_624445d
#undef public_624447b
#undef public_624448d
#undef public_624449c
#undef public_62444aa
#undef public_62444b7
#undef public_62444c9
#undef public_62444d0
#undef public_62444f1
