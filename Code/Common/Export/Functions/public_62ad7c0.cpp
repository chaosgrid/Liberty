#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f260);
CLANG_FORWARD_PROC_SYMBOL(public_62817c0);
CLANG_FORWARD_PROC_SYMBOL(public_62858c0);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad6f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6394178);

#define public_62ad860 _public_62ad860
#define public_62ad8c6 _public_62ad8c6
#define public_62ad8d4 _public_62ad8d4
#define public_62ad8ed _public_62ad8ed
#define public_62ad8f4 _public_62ad8f4
#define public_62ad91b _public_62ad91b
#define public_62ad930 _public_62ad930
#define public_62ad94f _public_62ad94f
#define public_62ad95e _public_62ad95e

PROC_DECLARE(0x62ad7c0, internal_62ad7c0, public_62ad7c0);
extern "C" NAKED register_t __cdecl internal_62ad7c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394178 @0x62ad7c2*/
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
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x24], ebx
        call public_628e0b0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x17], 1
        call public_627f260
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
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
        je public_62ad91b
        lea ecx, ds:[ecx]
        public_62ad860 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_62ad8ed
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_627f260
        mov ecx, dword ptr ss : [esp+0x30]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62ad8c6
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_628e0b0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x17], 1
        call public_627f260
        lea edx, ss:[esp+0x13]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        jmp public_62ad8d4
        public_62ad8c6 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x17], bl
        push edx
        public_62ad8d4 : nop
        lea ecx, ss:[esp+0x28]
        call public_62bed70
        lea eax, ss:[esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push eax
        jmp public_62ad8f4
        public_62ad8ed : nop
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        push edi
        public_62ad8f4 : nop
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
        jne public_62ad860
        public_62ad91b : nop
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, dword ptr ss : [esp+0x30]
        je public_62ad95e
        mov edi, dword ptr ss : [esp+0x48]
        lea esp, ss:[esp]
        public_62ad930 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_62858c0
        add esp, 4
        test al, al
        je public_62ad94f
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x84]
        push edi
        push 1
        call public_62817c0
        public_62ad94f : nop
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 4
        cmp esi, eax
        jne public_62ad930
        mov esi, dword ptr ss : [esp+0x2C]
        public_62ad95e : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x62ad7c0)
    }
}

#undef public_62ad860
#undef public_62ad8c6
#undef public_62ad8d4
#undef public_62ad8ed
#undef public_62ad8f4
#undef public_62ad91b
#undef public_62ad930
#undef public_62ad94f
#undef public_62ad95e
