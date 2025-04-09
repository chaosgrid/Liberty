#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_52c4d0);

#define public_52b610 _public_52b610
#define public_52b64c _public_52b64c
#define public_52b66c _public_52b66c
#define public_52b6d5 _public_52b6d5
#define public_52b751 _public_52b751
#define public_52b75b _public_52b75b
#define public_52b820 _public_52b820
#define public_52b864 _public_52b864
#define public_52b88f _public_52b88f
#define public_52b894 _public_52b894
#define public_52b89c _public_52b89c
#define public_52b8ad _public_52b8ad

PROC_DECLARE(0x52b5f0, internal_52b5f0, public_52b5f0);
extern "C" NAKED register_t __cdecl internal_52b5f0()
{
    __asm
    {
        sub esp, 0x48
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_52b8ad
        push ebx
        xor ebx, ebx
        mov edi, edi
        public_52b610 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6894]
        test al, al
        jne public_52b89c
/*FIXUP push offset public_5dd35c @0x52b621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd35c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_52b64c
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        jmp public_52b89c
/*FIXUP public_52b64c : nop
        push offset public_5dd410 @0x52b64c*/
  FIXUP public_52b64c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd410
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_52b66c
        push ebx
        call dword ptr ds : [public_5c6034]
        mov byte ptr ds : [edi+0x2C], al
        jmp public_52b89c
/*FIXUP public_52b66c : nop
        push offset public_5dd344 @0x52b66c*/
  FIXUP public_52b66c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_52b6d5
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c69a0]
        lea ecx, ss:[esp+0x24]
        call public_4215b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_5c6698]
        push ebx
        push eax
        call dword ptr ds : [public_5c6028]
        mov edx, dword ptr ds : [edi+0x38]
        add esp, 8
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ds:[edi+0x30]
        push 1
        push edx
        call public_52c4d0
        jmp public_52b89c
/*FIXUP public_52b6d5 : nop
        push offset public_5dd338 @0x52b6d5*/
  FIXUP public_52b6d5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd338
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_52b75b
        mov eax, dword ptr ds : [edi+0x34]
        cmp eax, ebx
        je public_52b751
        mov ecx, dword ptr ds : [edi+0x38]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x58], edx
        je public_52b751
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi+0x38]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        sub ecx, 0xC
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_52b89c
/*FIXUP public_52b751 : nop
        push offset public_5dd3c8 @0x52b751*/
  FIXUP public_52b751 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd3c8
        jmp public_52b894
/*FIXUP public_52b75b : nop
        push offset public_5dd3b8 @0x52b75b*/
  FIXUP public_52b75b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd3b8
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_52b89c
        mov eax, dword ptr ds : [edi+0x34]
        cmp eax, ebx
        je public_52b88f
        mov ecx, dword ptr ds : [edi+0x38]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x58], edx
        je public_52b88f
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0xC]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fmul dword ptr ds : [public_5c77f4]
        mov eax, dword ptr ds : [edi+0x38]
        sub eax, 0x30
        fst dword ptr ss : [esp+0x58]
        lea ecx, ds:[eax+0x18]
        fcos 
        lea edx, ds:[eax+0xC]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+0x10], 0x3F800000
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [edx], ebx
        fld dword ptr ss : [esp+0x58]
        fsin 
        fld st(1)
        fstp dword ptr ds : [eax]
        fst dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [eax+0x20]
        mov eax, ecx
        fld dword ptr ss : [esp+0xC]
        mov ecx, 3
        fmul dword ptr ds : [public_5c77f4]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x58]
        fsin 
        lea esp, ss:[esp]
        public_52b820 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax-4]
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_52b820
        fstp st(0)
        mov eax, edx
        fld dword ptr ss : [esp+0x10]
        mov ecx, 3
        fmul dword ptr ds : [public_5c77f4]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x58]
        fsin 
        public_52b864 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax-4]
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_52b864
        fstp st(0)
        jmp public_52b89c
/*FIXUP public_52b88f : nop
        push offset public_5dd370 @0x52b88f*/
  FIXUP public_52b88f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd370
        public_52b894 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        public_52b89c : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_52b610
        pop ebx
        public_52b8ad : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x52b5f0)
    }
}

#undef public_52b610
#undef public_52b64c
#undef public_52b66c
#undef public_52b6d5
#undef public_52b751
#undef public_52b75b
#undef public_52b820
#undef public_52b864
#undef public_52b88f
#undef public_52b894
#undef public_52b89c
#undef public_52b8ad
