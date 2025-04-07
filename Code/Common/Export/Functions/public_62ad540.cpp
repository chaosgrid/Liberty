#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f260);
CLANG_FORWARD_PROC_SYMBOL(public_62858e0);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62ad6f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6394178);

#define public_62ad5e0 _public_62ad5e0
#define public_62ad646 _public_62ad646
#define public_62ad655 _public_62ad655
#define public_62ad66e _public_62ad66e
#define public_62ad675 _public_62ad675
#define public_62ad69c _public_62ad69c
#define public_62ad6b0 _public_62ad6b0
#define public_62ad6c3 _public_62ad6c3
#define public_62ad6d2 _public_62ad6d2

PROC_DECLARE(0x62ad540, internal_62ad540, public_62ad540);
extern "C" NAKED register_t __cdecl internal_62ad540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394178 @0x62ad542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394178
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        mov al, byte ptr ss : [esp+0x38]
        push ebp
        push esi
        mov byte ptr ss : [esp+0x20], al
        xor eax, eax
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x20], eax
        call public_628e0b0
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x13], 1
        call public_627f260
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_62bed70
        mov ebp, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_62ad69c
        lea esp, ss:[esp]
        public_62ad5e0 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_62ad66e
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_627f260
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_62ad646
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_628e0b0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x13], 1
        call public_627f260
        lea edx, ss:[esp+0xF]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        jmp public_62ad655
        public_62ad646 : nop
        lea ecx, ss:[esp+0xF]
        push ecx
        lea edx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x13], 0
        push edx
        public_62ad655 : nop
        lea ecx, ss:[esp+0x24]
        call public_62bed70
        lea eax, ss:[esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push eax
        jmp public_62ad675
        public_62ad66e : nop
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        push edi
        public_62ad675 : nop
        call public_62ad6f0
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push esi
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_62ad5e0
        public_62ad69c : nop
        mov esi, dword ptr ss : [esp+0x28]
        cmp esi, dword ptr ss : [esp+0x2C]
        je public_62ad6d2
        mov edi, dword ptr ss : [esp+0x44]
        lea ebx, ds:[ebx]
        public_62ad6b0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62ad6c3
        push edi
        push eax
        call public_62858e0
        add esp, 8
        public_62ad6c3 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        add esi, 4
        cmp esi, eax
        jne public_62ad6b0
        mov esi, dword ptr ss : [esp+0x28]
        public_62ad6d2 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x62ad540)
    }
}

#undef public_62ad5e0
#undef public_62ad646
#undef public_62ad655
#undef public_62ad66e
#undef public_62ad675
#undef public_62ad69c
#undef public_62ad6b0
#undef public_62ad6c3
#undef public_62ad6d2
