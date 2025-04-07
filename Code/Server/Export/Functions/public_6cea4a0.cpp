#include "Server-PCH.h"


#define public_6cea4ff _public_6cea4ff
#define public_6cea541 _public_6cea541
#define public_6cea543 _public_6cea543
#define public_6cea57e _public_6cea57e
#define public_6cea580 _public_6cea580
#define public_6cea5c8 _public_6cea5c8
#define public_6cea5ca _public_6cea5ca
#define public_6cea5e0 _public_6cea5e0
#define public_6cea5e4 _public_6cea5e4
#define public_6cea5fc _public_6cea5fc
#define public_6cea600 _public_6cea600
#define public_6cea611 _public_6cea611
#define public_6cea619 _public_6cea619
#define public_6cea663 _public_6cea663
#define public_6cea669 _public_6cea669
#define public_6cea67e _public_6cea67e
#define public_6cea69d _public_6cea69d
#define public_6cea6d3 _public_6cea6d3
#define public_6cea6de _public_6cea6de
#define public_6cea705 _public_6cea705
#define public_6cea707 _public_6cea707
#define public_6cea721 _public_6cea721

PROC_DECLARE(0x6cea4a0, internal_6cea4a0, public_6cea4a0);
extern "C" NAKED register_t __cdecl internal_6cea4a0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        fcomp dword ptr ds : [public_6d65188]
        push ebp
        push esi
        push edi
        mov edi, ecx
        fnstsw ax
        test ah, 0x44
        jnp public_6cea6d3
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6cea6d3
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [public_6d642a0]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6cea4ff
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x3C]
        fstp dword ptr ss : [esp+0xC]
        public_6cea4ff : nop
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6d65188]
        mov dword ptr ss : [esp+0x18], eax
        fnstsw ax
        test ah, 0x41
        jne public_6cea600
        push ebx
        push ebp
        call dword ptr ds : [public_6d64290]
        add esp, 4
        test eax, eax
        je public_6cea5e0
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6cea541
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cea543
        public_6cea541 : nop
        xor eax, eax
        public_6cea543 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        je public_6cea5e0
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_6d6429c]
        fdiv dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [eax+0x20]
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_6cea57e
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cea57e
        mov ecx, esi
        jmp public_6cea580
        public_6cea57e : nop
        xor ecx, ecx
        public_6cea580 : nop
        mov ecx, dword ptr ds : [ecx+0xB4]
        test ecx, ecx
        jbe public_6cea5e0
        mov ebx, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, ebx
        jae public_6cea5e0
        mov ebx, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        cmp dword ptr ds : [edx+ebx+0x348], 0
        je public_6cea5e0
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+ebx-0x34], eax
        jne public_6cea5e0
        test esi, esi
        je public_6cea5c8
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cea5ca
        public_6cea5c8 : nop
        xor esi, esi
        public_6cea5ca : nop
        mov eax, dword ptr ds : [esi+0xB4]
        imul eax, 0x418
        fld dword ptr ds : [eax+ebx-0x54]
        fmul dword ptr ss : [esp+0x20]
        jmp public_6cea5e4
        public_6cea5e0 : nop
        fld dword ptr ss : [esp+0x20]
        public_6cea5e4 : nop
        fsubr dword ptr ss : [esp+0x10]
        pop ebx
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cea5fc
        fstp dword ptr ss : [esp+0x18]
        jmp public_6cea619
        public_6cea5fc : nop
        fstp st(0)
        jmp public_6cea611
        public_6cea600 : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6cea619
        public_6cea611 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6cea619 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x1B8]
        test al, al
        je public_6cea69d
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x1A0]
        fsubr dword ptr ds : [public_6d65520]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx+0x38]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cea663
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+0x1C]
        jmp public_6cea669
        public_6cea663 : nop
        fld dword ptr ds : [public_6d65188]
        public_6cea669 : nop
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6cea67e
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6cea69d
        public_6cea67e : nop
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6cea69d
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        public_6cea69d : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jnp public_6cea6d3
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cea6de
        mov ecx, dword ptr ss : [esp+0x18]
        xor edx, edx
        mov dx, word ptr ss : [ebp+8]
        push 0
        push ecx
        mov ecx, esi
        push edx
        call dword ptr ds : [public_6d641ec]
        public_6cea6d3 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret 0xC
        public_6cea6de : nop
        mov esi, 2
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cea721
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6cea705
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6cea707
        public_6cea705 : nop
        xor eax, eax
        public_6cea707 : nop
        mov cl, byte ptr ds : [eax+0x15C]
        test cl, cl
        je public_6cea721
        push ebp
        call dword ptr ds : [public_6d64298]
        add esp, 4
        test eax, eax
        je public_6cea721
        xor esi, esi
        public_6cea721 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi]
        push eax
        push esi
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x224]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6cea4a0)
    }
}

#undef public_6cea4ff
#undef public_6cea541
#undef public_6cea543
#undef public_6cea57e
#undef public_6cea580
#undef public_6cea5c8
#undef public_6cea5ca
#undef public_6cea5e0
#undef public_6cea5e4
#undef public_6cea5fc
#undef public_6cea600
#undef public_6cea611
#undef public_6cea619
#undef public_6cea663
#undef public_6cea669
#undef public_6cea67e
#undef public_6cea69d
#undef public_6cea6d3
#undef public_6cea6de
#undef public_6cea705
#undef public_6cea707
#undef public_6cea721
