#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e250);
CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);
CLANG_FORWARD_PROC_SYMBOL(public_543f50);
CLANG_FORWARD_PROC_SYMBOL(public_544230);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0e93);

#define public_543fa9 _public_543fa9
#define public_543fab _public_543fab
#define public_543fde _public_543fde
#define public_543fe0 _public_543fe0
#define public_54400d _public_54400d
#define public_544085 _public_544085
#define public_54414a _public_54414a
#define public_544164 _public_544164
#define public_54418a _public_54418a
#define public_54419e _public_54419e
#define public_5441b4 _public_5441b4
#define public_5441c7 _public_5441c7
#define public_5441ef _public_5441ef
#define public_5441ff _public_5441ff
#define public_544218 _public_544218

PROC_DECLARE(0x543f50, internal_543f50, public_543f50);
extern "C" NAKED register_t __cdecl internal_543f50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0e93 @0x543f58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0e93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE4
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [public_5c6ad4]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_544218
        push ebx
        xor ebx, ebx
        cmp ebp, ebx
        push esi
        je public_543fa9
        lea eax, ss:[ebp+0xC]
        cmp eax, ebx
        je public_543fa9
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_543fa9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_543fab
        public_543fa9 : nop
        xor eax, eax
        public_543fab : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [eax+0xE0]
        cmp byte ptr ds : [edx], bl
        je public_54400d
        cmp ebp, ebx
        je public_543fde
        lea eax, ss:[ebp+0xC]
        cmp eax, ebx
        je public_543fde
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_543fde
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_543fe0
        public_543fde : nop
        xor eax, eax
        public_543fe0 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [eax+0xE0]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        jne public_544085
        public_54400d : nop
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        public_544085 : nop
        push edi
        lea ecx, ss:[esp+0x9C]
        call public_40e250
        mov eax, dword ptr ds : [public_5c6ad4]
        push eax
        mov dword ptr ss : [esp+0x100], ebx
        call public_42ae40
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea esi, ss:[esp+0x38]
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xB8], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x98], eax
        call dword ptr ds : [edx+0x1C]
        push 0x25
        mov esi, eax
        call public_5792b0
        add esp, 4
        test eax, eax
        pop edi
        je public_5441ff
        lea eax, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        push 0x26
        mov byte ptr ss : [esp+0xFC], 1
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_54414a
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, ebx
        je public_54414a
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx], bl
        je public_54414a
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        public_54414a : nop
        cmp dword ptr ss : [esp+0xB0], ebx
        je public_544164
        mov eax, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], eax
        public_544164 : nop
        fld dword ptr ss : [esp+0xE0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54418a
        mov edx, dword ptr ds : [public_674c60]
        mov ecx, offset public_674c60
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        public_54418a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        je public_54419e
        lea eax, ss:[esp+0x68]
        push eax
        push esi
        push ebp
        call public_4f7d20
        public_54419e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        je public_5441b4
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x68]
        push eax
        push esi
        call dword ptr ds : [edx+0x94]
        public_5441b4 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        je public_5441c7
        lea edx, ss:[esp+0x68]
        push edx
        push esi
        call public_5377c0
        public_5441c7 : nop
        lea eax, ss:[esp+0x98]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_674c60
        call public_544230
        test al, al
        je public_5441ef
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[ebp+0x28]
        call public_4fcea0
        public_5441ef : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0xF8], bl
        call public_502d90
        public_5441ff : nop
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xF8], 0xFFFFFFFF
        call public_40e2a0
        pop esi
        pop ebx
        public_544218 : nop
        mov ecx, dword ptr ss : [esp+0xE8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xF0
        ret 
        UNREACHABLE_TRAP(0x543f50)
    }
}

#undef public_543fa9
#undef public_543fab
#undef public_543fde
#undef public_543fe0
#undef public_54400d
#undef public_544085
#undef public_54414a
#undef public_544164
#undef public_54418a
#undef public_54419e
#undef public_5441b4
#undef public_5441c7
#undef public_5441ef
#undef public_5441ff
#undef public_544218
