#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f60020);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_JUMP_SYMBOL(public_6facee0);

#define public_6f06c5f _public_6f06c5f
#define public_6f06c8f _public_6f06c8f
#define public_6f06cb0 _public_6f06cb0
#define public_6f06ce2 _public_6f06ce2
#define public_6f06d1c _public_6f06d1c
#define public_6f06d4b _public_6f06d4b
#define public_6f06da5 _public_6f06da5
#define public_6f06dad _public_6f06dad
#define public_6f06dc7 _public_6f06dc7

PROC_DECLARE(0x6f06b20, internal_6f06b20, public_6f06b20);
extern "C" NAKED register_t __cdecl internal_6f06b20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6facee0 @0x6f06b28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facee0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f06dc7
        cmp dword ptr ds : [esi+0x18], ebx
        je public_6f06dc7
        push edi
        mov edi, dword ptr ds : [public_6fb3664]
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        lea eax, ss:[esp+0x48]
        push eax
        call public_6eb70f0
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [esi+0x18]
        fld dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x60]
        fmul dword ptr ss : [esp+0x34]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        faddp 
        push edx
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fstp dword ptr ss : [esp+0x28]
        call edi
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0x18
        lea eax, ss:[esp+0x48]
        push eax
        call public_6eb70f0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        add esp, 0xC
        fld dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0xF]
        fmul dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ss:[esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x18]
        call public_6f93460
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x80], ebx
        pop edi
        mov dword ptr ss : [esp+0x10], 0x451C4000
        fnstsw ax
        test ah, 5
        jp public_6f06c5f
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6eb70f0
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call public_6eea860
        push eax
        call public_6f60020
        mov edx, dword ptr ds : [esi]
        add esp, 0x18
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        jmp public_6f06c8f
        public_6f06c5f : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_6eb70f0
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call public_6eea860
        push eax
        call public_6f60020
        add esp, 0x18
        public_6f06c8f : nop
        cmp dword ptr ss : [esp+0x1C], ebx
        je public_6f06da5
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], esi
        je public_6f06cb0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_6f06cb0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x7C], 1
        call dword ptr ds : [eax+0x14]
        cmp eax, 5
        mov ecx, esi
        je public_6f06d4b
        cmp eax, 0x13
        je public_6f06ce2
        mov edx, dword ptr ds : [esi]
        mov byte ptr ss : [esp+0x7C], bl
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x7C], 4
        jmp public_6f06dad
        public_6f06ce2 : nop
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [ecx], 2
        mov edx, dword ptr ds : [esi+0x118]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x7C], bl
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x7C], 2
        public_6f06d1c : nop
        lea ecx, ss:[esp+0x14]
        call public_6ed2a00
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call public_6f15350
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 0x10
        public_6f06d4b : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [eax], 3
        lea ecx, ds:[esi+0x11C]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [edx], 0x44FA0000
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x7C], bl
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x7C], 3
        jmp public_6f06d1c
        public_6f06da5 : nop
        mov dword ptr ss : [esp+0x7C], 6
        public_6f06dad : nop
        lea ecx, ss:[esp+0x14]
        call public_6ed2a00
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call public_6f15350
        public_6f06dc7 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 0x10
        UNREACHABLE_TRAP(0x6f06b20)
    }
}

#undef public_6f06c5f
#undef public_6f06c8f
#undef public_6f06cb0
#undef public_6f06ce2
#undef public_6f06d1c
#undef public_6f06d4b
#undef public_6f06da5
#undef public_6f06dad
#undef public_6f06dc7
