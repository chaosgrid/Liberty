#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5200);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63946d0);

#define public_62b4853 _public_62b4853
#define public_62b4855 _public_62b4855
#define public_62b4880 _public_62b4880
#define public_62b48b4 _public_62b48b4
#define public_62b48d7 _public_62b48d7
#define public_62b490b _public_62b490b
#define public_62b4910 _public_62b4910
#define public_62b4926 _public_62b4926
#define public_62b4955 _public_62b4955
#define public_62b4963 _public_62b4963
#define public_62b4965 _public_62b4965
#define public_62b4972 _public_62b4972
#define public_62b4993 _public_62b4993

PROC_DECLARE(0x62b4810, internal_62b4810, public_62b4810);
extern "C" NAKED register_t __cdecl internal_62b4810()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63946d0 @0x62b4818*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63946d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1B8]
        test eax, eax
        je public_62b4993
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b4993
        mov eax, dword ptr ds : [edi+0x1B8]
        test eax, eax
        je public_62b4853
        lea ecx, ds:[eax-8]
        jmp public_62b4855
        public_62b4853 : nop
        xor ecx, ecx
        public_62b4855 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [edi+0xB0]
        jne public_62b4993
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        test ebx, ebx
        push ebp
        push esi
        je public_62b48b4
        mov esi, dword ptr ds : [edi+0x1D4]
        cmp esi, dword ptr ds : [edi+0x1D8]
        je public_62b48b4
        nop 
        public_62b4880 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4955
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4955
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        cmp ebp, eax
        je public_62b4910
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b4880
        public_62b48b4 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_62b48d7
        add ebx, 8
        cmp ebx, esi
        je public_62b48d7
        push ebx
        lea ecx, ss:[esp+0x14]
        call public_6341610
        public_62b48d7 : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[edi+0x1D0]
        push 1
        push eax
        mov dword ptr ss : [esp+0x2C], 1
        call public_62b5200
        cmp dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_62b4910
        push esi
        lea ecx, ss:[esp+0x14]
        public_62b490b : nop
        call public_6341610
        public_62b4910 : nop
        mov esi, dword ptr ds : [edi+0x1D4]
        cmp esi, dword ptr ds : [edi+0x1D8]
        mov dword ptr ss : [esp+0x28], 0x4CBEBC20
        je public_62b4972
        public_62b4926 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4965
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4965
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0x3F800000
        call dword ptr ds : [eax+0xD8]
        fld dword ptr ss : [esp+0x28]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b4963
        fstp dword ptr ss : [esp+0x28]
        jmp public_62b4965
        public_62b4955 : nop
        mov eax, dword ptr ds : [esi]
        add ebx, 8
        cmp ebx, eax
        je public_62b4910
        push ebx
        mov ecx, esi
        jmp public_62b490b
        public_62b4963 : nop
        fstp st(0)
        public_62b4965 : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b4926
        public_62b4972 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [edi+0x1CC], ecx
        xor eax, eax
        pop edi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        public_62b4993 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, 0xFFFFFFFE
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62b4810)
    }
}

#undef public_62b4853
#undef public_62b4855
#undef public_62b4880
#undef public_62b48b4
#undef public_62b48d7
#undef public_62b490b
#undef public_62b4910
#undef public_62b4926
#undef public_62b4955
#undef public_62b4963
#undef public_62b4965
#undef public_62b4972
#undef public_62b4993
