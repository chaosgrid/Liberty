#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34ae0);

#define public_6f34af0 _public_6f34af0
#define public_6f34b4d _public_6f34b4d
#define public_6f34ba6 _public_6f34ba6
#define public_6f34baa _public_6f34baa
#define public_6f34bb0 _public_6f34bb0

PROC_DECLARE(0x6f34ae0, internal_6f34ae0, public_6f34ae0);
extern "C" NAKED register_t __cdecl internal_6f34ae0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_6f34af0 : nop
        mov eax, dword ptr ds : [ebx]
/*FIXUP push offset public_6f5ff54 @0x6f34af2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff54
        push eax
        call dword ptr ds : [public_6f5a084]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6f34ba6
        mov edi, dword ptr ds : [public_6f5a080]
/*FIXUP push offset public_6f5ff48 @0x6f34b11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff48
        push esi
        call edi
/*FIXUP push offset public_6f5ff54 @0x6f34b19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff54
        push esi
        call edi
        mov edi, eax
        add esp, 0x10
        test edi, edi
        je public_6f34bb0
        push esi
        call dword ptr ds : [public_6f5a07c]
        fstp dword ptr ss : [esp+ebp*4+0x24]
        lea eax, ds:[esi+edi]
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [eax]
        add esp, 4
        cmp cl, 0x7D
        jne public_6f34b4d
        cmp ebp, 3
        jne public_6f34baa
        public_6f34b4d : nop
        inc eax
        inc ebp
        cmp ebp, 4
        mov dword ptr ds : [ebx], eax
        jl public_6f34af0
        cmp ebp, 4
        jne public_6f34bb0
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        pop edi
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        pop esi
        mov dword ptr ds : [ecx+8], edx
        pop ebp
        mov dword ptr ds : [ecx+0xC], eax
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 8
        public_6f34ba6 : nop
        test ebp, ebp
        jne public_6f34bb0
        public_6f34baa : nop
        mov dword ptr ds : [ebx], 0
        public_6f34bb0 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6f34ae0)
    }
}

#undef public_6f34af0
#undef public_6f34b4d
#undef public_6f34ba6
#undef public_6f34baa
#undef public_6f34bb0
