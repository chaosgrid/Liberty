#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_451c21 _public_451c21
#define public_451cf7 _public_451cf7
#define public_451d46 _public_451d46
#define public_451d84 _public_451d84
#define public_451db7 _public_451db7
#define public_451dc6 _public_451dc6
#define public_451dd5 _public_451dd5
#define public_451e2a _public_451e2a

PROC_DECLARE(0x451b90, internal_451b90, public_451b90);
extern "C" NAKED register_t __cdecl internal_451b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC0
        test eax, eax
        push ebx
        push esi
        push edi
        je public_451db7
        cmp eax, 2
        jne public_451c21
        mov esi, dword ptr ss : [esp+0xD8]
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5cd090 @0x451bb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd090
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_451db7
/*FIXUP push offset public_5c865c @0x451bca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_451db7
        test esi, esi
        je public_451d84
        cmp byte ptr ds : [esi], 0
        jne public_451d84
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cd048 @0x451bf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd048
        push 0x179
/*FIXUP push offset public_5cd010 @0x451bfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd010
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x451c08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC0
        ret 0x10
        public_451c21 : nop
        cmp eax, 1
        jne public_451d84
        mov eax, dword ptr ss : [esp+0xD0]
        mov ecx, dword ptr ss : [esp+0xD8]
        lea esi, ds:[eax+0x170]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c61c4]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_451dc6
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c61c0]
        push edi
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [public_5c6214]
        mov esi, eax
        mov ecx, 0x12
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x34], eax
        mov ecx, 9
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0xA8]
        rep movsd
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        push ebx
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x28], edx
        call dword ptr ds : [ecx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x84]
        rep movsd
        jne public_451cf7
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_451cf7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        jne public_451d46
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_451d46 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xA8]
        push ecx
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edi, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_451e2a
        public_451d84 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5ccfc8 @0x451d8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccfc8
        push 0x17D
/*FIXUP push offset public_5cd010 @0x451d94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd010
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x451d9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC0
        ret 0x10
        public_451db7 : nop
        mov eax, dword ptr ss : [esp+0xD0]
        mov esi, dword ptr ds : [eax+0x70]
        cmp esi, 0xFFFFFFFF
        jne public_451dd5
        public_451dc6 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xC0
        ret 0x10
        public_451dd5 : nop
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        push eax
        call dword ptr ds : [edx+0x90]
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x40]
        rep movsd
        mov edi, dword ptr ss : [esp+0xE0]
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+0x24]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebp
        public_451e2a : nop
        lea esi, ss:[esp+0x3C]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC0
        ret 0x10
        UNREACHABLE_TRAP(0x451b90)
    }
}

#undef public_451c21
#undef public_451cf7
#undef public_451d46
#undef public_451d84
#undef public_451db7
#undef public_451dc6
#undef public_451dd5
#undef public_451e2a
