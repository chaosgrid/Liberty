#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553100);
CLANG_FORWARD_PROC_SYMBOL(public_5547c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c147f);

#define public_554860 _public_554860
#define public_554887 _public_554887
#define public_5548ad _public_5548ad
#define public_5548be _public_5548be
#define public_5548cf _public_5548cf
#define public_55493f _public_55493f
#define public_554950 _public_554950
#define public_554965 _public_554965
#define public_55498a _public_55498a
#define public_5549af _public_5549af
#define public_5549b8 _public_5549b8
#define public_554a1e _public_554a1e
#define public_554a2f _public_554a2f
#define public_554a44 _public_554a44
#define public_554a64 _public_554a64
#define public_554a89 _public_554a89
#define public_554a92 _public_554a92

PROC_DECLARE(0x5547c0, internal_5547c0, public_5547c0);
extern "C" NAKED register_t __cdecl internal_5547c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c147f @0x5547c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c147f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1670
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x1680]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        push ecx
        call dword ptr ds : [public_5c6094]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c6b7c]
        add esp, 8
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c605c]
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x168C], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5548cf
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5548cf
        mov esi, dword ptr ds : [public_5c6cf4]
        mov edi, dword ptr ds : [public_5c6698]
        lea ecx, ds:[ecx]
/*FIXUP public_554860 : nop
        push offset public_5e0fe8 @0x554860*/
  FIXUP public_554860 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0fe8
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_5548be
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5548be
/*FIXUP public_554887 : nop
        push offset public_5e11b0 @0x554887*/
  FIXUP public_554887 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e11b0
        lea ecx, ss:[esp+0x118]
        call esi
        test al, al
        je public_5548ad
        push 2
        lea ecx, ss:[esp+0x118]
        call edi
        push eax
        call public_553100
        add esp, 8
        public_5548ad : nop
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_554887
        public_5548be : nop
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_554860
        public_5548cf : nop
        push ebp
        lea edx, ss:[esp+0x1540]
        mov dword ptr ss : [esp+0x1688], 1
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1548]
        mov byte ptr ss : [esp+0x1690], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1550], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_554965
        cmp dword ptr ss : [esp+0x1554], ebx
        je public_554950
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, ebx
        je public_55493f
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1558], ebx
        mov dword ptr ss : [esp+0x155C], ebx
        public_55493f : nop
        mov edx, dword ptr ss : [esp+0x1554]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1554], ebx
        public_554950 : nop
        mov eax, dword ptr ss : [esp+0x1550]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1550], 0xFFFFFFFF
        public_554965 : nop
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_55498a
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1558], ebx
        mov dword ptr ss : [esp+0x155C], ebx
        public_55498a : nop
        mov eax, dword ptr ss : [esp+0x1544]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1560], ebx
        je public_5549b8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5549af
        cmp cl, 0xFF
        je public_5549af
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5549b8
        public_5549af : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5549b8 : nop
        mov dword ptr ss : [esp+0x1544], ebx
        mov dword ptr ss : [esp+0x1548], ebx
        mov dword ptr ss : [esp+0x154C], ebx
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x1690], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x128], 0xFFFFFFFF
        je public_554a44
        cmp dword ptr ss : [esp+0x12C], ebx
        je public_554a2f
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, ebx
        je public_554a1e
        push eax
        call ebp
        mov dword ptr ss : [esp+0x130], ebx
        mov dword ptr ss : [esp+0x134], ebx
        public_554a1e : nop
        mov eax, dword ptr ss : [esp+0x12C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x12C], ebx
        public_554a2f : nop
        mov ecx, dword ptr ss : [esp+0x128]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        public_554a44 : nop
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, ebx
        pop ebp
        je public_554a64
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x12C], ebx
        mov dword ptr ss : [esp+0x130], ebx
        public_554a64 : nop
        mov eax, dword ptr ss : [esp+0x118]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x134], ebx
        je public_554a92
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_554a89
        cmp cl, 0xFF
        je public_554a89
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_554a92
        public_554a89 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_554a92 : nop
        mov ecx, dword ptr ss : [esp+0x167C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 
        UNREACHABLE_TRAP(0x5547c0)
    }
}

#undef public_554860
#undef public_554887
#undef public_5548ad
#undef public_5548be
#undef public_5548cf
#undef public_55493f
#undef public_554950
#undef public_554965
#undef public_55498a
#undef public_5549af
#undef public_5549b8
#undef public_554a1e
#undef public_554a2f
#undef public_554a44
#undef public_554a64
#undef public_554a89
#undef public_554a92
