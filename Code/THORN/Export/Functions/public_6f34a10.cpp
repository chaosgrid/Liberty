#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34a10);

#define public_6f34a20 _public_6f34a20
#define public_6f34a79 _public_6f34a79
#define public_6f34ac3 _public_6f34ac3
#define public_6f34ac7 _public_6f34ac7
#define public_6f34acd _public_6f34acd

PROC_DECLARE(0x6f34a10, internal_6f34a10, public_6f34a10);
extern "C" NAKED register_t __cdecl internal_6f34a10()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_6f34a20 : nop
        mov eax, dword ptr ds : [ebx]
/*FIXUP push offset public_6f5ff54 @0x6f34a22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff54
        push eax
        call dword ptr ds : [public_6f5a084]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6f34ac3
        mov edi, dword ptr ds : [public_6f5a080]
/*FIXUP push offset public_6f5ff48 @0x6f34a41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff48
        push esi
        call edi
/*FIXUP push offset public_6f5ff54 @0x6f34a49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff54
        push esi
        call edi
        mov edi, eax
        add esp, 0x10
        test edi, edi
        je public_6f34acd
        push esi
        call dword ptr ds : [public_6f5a07c]
        fstp dword ptr ss : [esp+ebp*4+0x20]
        lea eax, ds:[esi+edi]
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [eax]
        add esp, 4
        cmp cl, 0x7D
        jne public_6f34a79
        cmp ebp, 2
        jne public_6f34ac7
        public_6f34a79 : nop
        inc eax
        inc ebp
        cmp ebp, 3
        mov dword ptr ds : [ebx], eax
        jb public_6f34a20
        cmp ebp, 3
        jne public_6f34acd
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], edx
        pop esi
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6f34ac3 : nop
        test ebp, ebp
        jne public_6f34acd
        public_6f34ac7 : nop
        mov dword ptr ds : [ebx], 0
        public_6f34acd : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6f34a10)
    }
}

#undef public_6f34a20
#undef public_6f34a79
#undef public_6f34ac3
#undef public_6f34ac7
#undef public_6f34acd
