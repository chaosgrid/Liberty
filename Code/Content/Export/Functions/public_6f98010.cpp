#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6f98010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb176b);

#define public_6f980a8 _public_6f980a8
#define public_6f980d0 _public_6f980d0
#define public_6f980ec _public_6f980ec
#define public_6f9812a _public_6f9812a
#define public_6f98136 _public_6f98136
#define public_6f98182 _public_6f98182
#define public_6f98193 _public_6f98193
#define public_6f981a3 _public_6f981a3
#define public_6f981c2 _public_6f981c2
#define public_6f981cb _public_6f981cb
#define public_6f981d6 _public_6f981d6
#define public_6f98245 _public_6f98245

PROC_DECLARE(0x6f98010, internal_6f98010, public_6f98010);
extern "C" NAKED register_t __cdecl internal_6f98010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb176b @0x6f98012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb176b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        mov eax, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [ecx+0x48]
        push 0x14
        lea ecx, ss:[esp+0x48]
        push ecx
        push 0x3F800000
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [public_6fb3398]
        mov al, byte ptr ss : [esp+0x3F]
        xor ebx, ebx
        xor edi, edi
        xor edx, edx
        add esp, 0x18
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], ebx
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x10], eax
        jbe public_6f9812a
        jge public_6f980a8
        xor eax, eax
        public_6f980a8 : nop
        lea ecx, ds:[eax*8]
        push ebp
        push ecx
        call public_6fa912a
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        mov ebx, edi
        mov ebp, eax
        je public_6f980ec
        nop 
        lea esp, ss:[esp]
        public_6f980d0 : nop
        push esi
        push ebx
        call public_6f305b0
        add esi, 8
        add esp, 8
        add ebx, 8
        cmp esi, ebp
        jne public_6f980d0
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        public_6f980ec : nop
        push eax
        push esi
        lea ecx, ss:[esp+0x20]
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ss : [esp+0x28], ecx
        add esp, 4
        lea ecx, ss:[esp+0x18]
        call public_6eae300
        lea edx, ds:[edi+eax*8]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x1C], edi
        xor ebx, ebx
        pop ebp
        public_6f9812a : nop
        xor esi, esi
        cmp eax, ebx
        jbe public_6f98193
        mov edi, dword ptr ds : [public_6fb35b8]
        public_6f98136 : nop
        mov eax, dword ptr ss : [esp+esi*4+0x40]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov dword ptr ss : [esp+0x14], ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f98182
        cmp dword ptr ss : [esp+0xC], ebx
        je public_6f98182
        mov ecx, dword ptr ss : [esp+esi*4+0x40]
        push ecx
        call dword ptr ds : [public_6fb3558]
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+esi*4+0x44]
        add esp, 4
        lea eax, ss:[esp+0x2C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], edx
        call public_6f96770
        public_6f98182 : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc esi
        cmp esi, eax
        jb public_6f98136
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        public_6f98193 : nop
        xor esi, esi
        cmp edi, edx
        mov dword ptr ss : [esp+0xC], 0xBF800000
        mov ecx, edi
        je public_6f981d6
        public_6f981a3 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6f981c2
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6f981cb
        public_6f981c2 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        public_6f981cb : nop
        add ecx, 8
        cmp ecx, edx
        jne public_6f981a3
        cmp esi, ebx
        jne public_6f98245
        public_6f981d6 : nop
        mov edx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ds : [edx+0x48]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [public_6fb35b4]
        fld dword ptr ds : [public_6fbcd10]
        fdiv dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6fbbb5c]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        call public_6fa9130
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x14]
        mov esi, eax
        fdiv dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        add esp, 8
        call public_6fa9130
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+esi*8+1]
        public_6f98245 : nop
        push edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x94]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6f98010)
    }
}

#undef public_6f980a8
#undef public_6f980d0
#undef public_6f980ec
#undef public_6f9812a
#undef public_6f98136
#undef public_6f98182
#undef public_6f98193
#undef public_6f981a3
#undef public_6f981c2
#undef public_6f981cb
#undef public_6f981d6
#undef public_6f98245
