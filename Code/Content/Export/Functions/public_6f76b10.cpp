#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f143d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f205e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f594c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f76b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f792f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f79500);
CLANG_FORWARD_PROC_SYMBOL(public_6f79bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a050);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a350);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb035d);

#define public_6f76b70 _public_6f76b70
#define public_6f76cd2 _public_6f76cd2
#define public_6f76cee _public_6f76cee
#define public_6f76d33 _public_6f76d33
#define public_6f76d40 _public_6f76d40
#define public_6f76d4f _public_6f76d4f
#define public_6f76d53 _public_6f76d53
#define public_6f76e02 _public_6f76e02
#define public_6f76e4c _public_6f76e4c
#define public_6f76e70 _public_6f76e70
#define public_6f76e80 _public_6f76e80
#define public_6f76e8d _public_6f76e8d
#define public_6f76e96 _public_6f76e96
#define public_6f76e98 _public_6f76e98
#define public_6f76f55 _public_6f76f55
#define public_6f76f9b _public_6f76f9b
#define public_6f77051 _public_6f77051
#define public_6f77070 _public_6f77070

PROC_DECLARE(0x6f76b10, internal_6f76b10, public_6f76b10);
extern "C" NAKED register_t __cdecl internal_6f76b10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb035d @0x6f76b12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb035d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x244
        mov eax, dword ptr ds : [ecx+0xF0]
        push ebx
        push esi
        lea esi, ds:[ecx+0xE8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], esi
        call public_6f7a350
        mov ebx, dword ptr ss : [esp+0x25C]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, ebx
        call public_6f1df30
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_6f77051
        push ebp
        push edi
        lea esp, ss:[esp]
        public_6f76b70 : nop
        lea ecx, ss:[esp+0x3C]
        call public_6eac620
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x25C], 0
        call public_6f143d0
        lea ecx, ss:[esp+0x26]
        push ecx
        lea ecx, ss:[esp+0x98]
        call public_6ead6a0
        lea edx, ss:[esp+0x27]
        push edx
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x260], 1
        call public_6ead6a0
        lea ecx, ss:[esp+0xC4]
        mov byte ptr ss : [esp+0x25C], 2
        mov dword ptr ss : [esp+0xB4], 0xBF800000
        mov dword ptr ss : [esp+0xB8], 0xBF800000
        mov dword ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0xC0], 0
        call public_6eac620
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x58]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x25C], 3
        call public_6f79bb0
        add eax, 0x14
        push eax
        lea ecx, ss:[esp+0x1F8]
        call public_6f594c0
        lea ecx, ss:[esp+0x10]
        call public_6f79bb0
        add eax, 8
        mov edi, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xF4], ecx
        lea ecx, ss:[esp+0x10]
        call public_6f79bb0
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0xF4]
        mov dword ptr ss : [esp+0xF8], eax
        lea eax, ss:[esp+0x1F4]
        push eax
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x100], edi
        mov dword ptr ss : [esp+0x104], ebp
        mov dword ptr ss : [esp+0x108], edx
        call public_6f594c0
        mov edx, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0xF8]
        push ecx
        push edx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x140], esi
        call public_6f792f0
        mov eax, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x20]
        mov ecx, 9
        lea edi, ss:[esp+0x64]
        rep movsd
        mov edx, dword ptr ds : [eax+0x50]
        mov ecx, 0x3FFFFFFF
        test ecx, edx
        jne public_6f76cd2
        lea edx, ds:[eax+0x14]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x50], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x54], edx
        public_6f76cd2 : nop
        test dword ptr ds : [eax+0x54], ecx
        jne public_6f76cee
        lea ecx, ds:[eax+0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x5C], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x60], ecx
        public_6f76cee : nop
        mov edx, dword ptr ds : [eax+0x50]
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x20], edx
        mov ecx, dword ptr ds : [eax+0x54]
        push eax
        lea edx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x40], edi
        call public_6f205e0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6f7b0f0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f76e4c
        public_6f76d33 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        cmp eax, edx
        je public_6f76d4f
        nop 
        public_6f76d40 : nop
        cmp dword ptr ds : [eax], edi
        je public_6f76e8d
        add eax, 0x44
        cmp eax, edx
        jne public_6f76d40
        public_6f76d4f : nop
        mov dword ptr ss : [esp+0x28], edx
        public_6f76d53 : nop
        mov esi, dword ptr ds : [ecx+0x58]
        lea ecx, ss:[esp+0x14]
        call public_6f79bb0
        add eax, 0x14
        push eax
        lea ecx, ss:[esp+0x228]
        call public_6f594c0
        lea ecx, ss:[esp+0x14]
        call public_6f79bb0
        add eax, 8
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x14]
        call public_6f79bb0
        mov eax, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x224]
        push edx
        lea ecx, ss:[esp+0x150]
        mov dword ptr ss : [esp+0x140], eax
        mov dword ptr ss : [esp+0x144], edi
        mov dword ptr ss : [esp+0x148], ebx
        mov dword ptr ss : [esp+0x14C], ebp
        call public_6f594c0
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x13C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x188], esi
        call public_6f7a050
        mov eax, dword ptr ss : [esp+0x14]
        test dword ptr ds : [eax+0x50], 0x3FFFFFFF
        jne public_6f76e02
        lea edx, ds:[eax+0x14]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x50], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x54], edx
        public_6f76e02 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x264]
        push eax
        lea edx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, esi
        call public_6f205e0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, esi
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x34]
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6f76d33
        mov edi, dword ptr ss : [esp+0x38]
        mov ebx, esi
        public_6f76e4c : nop
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f7b0f0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6f76f9b
        lea esp, ss:[esp]
        public_6f76e70 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x44]
        cmp eax, ebp
        je public_6f76e98
        lea esp, ss:[esp]
        public_6f76e80 : nop
        cmp dword ptr ds : [eax], edi
        je public_6f76e96
        add eax, 0x44
        cmp eax, ebp
        jne public_6f76e80
        jmp public_6f76e98
        public_6f76e8d : nop
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6f76d53
        public_6f76e96 : nop
        mov ebp, eax
        public_6f76e98 : nop
        mov ebx, dword ptr ds : [ecx+0x58]
        lea ecx, ss:[esp+0x18]
        add ebp, 0x44
        call public_6f79bb0
        add eax, 0x14
        push eax
        lea ecx, ss:[esp+0x1C8]
        call public_6f594c0
        lea ecx, ss:[esp+0x18]
        call public_6f79bb0
        add eax, 8
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xE8], ecx
        lea ecx, ss:[esp+0x18]
        call public_6f79bb0
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x180], eax
        lea eax, ss:[esp+0x180]
        mov dword ptr ss : [esp+0x184], esi
        mov dword ptr ss : [esp+0x188], edi
        push eax
        mov dword ptr ss : [esp+0x190], edx
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C8]
        lea edi, ss:[esp+0x194]
        rep movsd
        push 1
        push ebp
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x1CC], ebx
        call public_6f7a050
        mov eax, dword ptr ss : [esp+0x18]
        test dword ptr ds : [eax+0x54], 0x3FFFFFFF
        jne public_6f76f55
        lea ecx, ds:[eax+0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x5C], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x60], ecx
        public_6f76f55 : nop
        mov edx, dword ptr ds : [eax+0x54]
        mov esi, dword ptr ss : [esp+0x264]
        mov edi, dword ptr ss : [esp+0x1C]
        push eax
        lea eax, ss:[esp+0xDC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edx
        call public_6f205e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f76e70
        mov ebx, esi
        public_6f76f9b : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x3C]
        push edx
        push 1
        push eax
        call public_6f7b4d0
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0x25C], 6
        call public_6f79500
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ss : [esp+0xA8]
        push eax
        push ecx
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x264], 5
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0xA8]
        push edx
        call public_6fa8fe0
        xor esi, esi
        add esp, 4
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0xA8], esi
        mov dword ptr ss : [esp+0xAC], esi
        mov dword ptr ss : [esp+0xB0], esi
        mov byte ptr ss : [esp+0x25C], 4
        call public_6eec8d0
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x25C], 0xFFFFFFFF
        call public_6eec8d0
        cmp dword ptr ds : [ebx+0x10], esi
        jne public_6f76b70
        mov esi, dword ptr ss : [esp+0x2C]
        pop edi
        pop ebp
        public_6f77051 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f77070
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x6BCA1AF3
        imul esi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f77070 : nop
        mov ecx, dword ptr ss : [esp+0x24C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x250
        ret 4
        UNREACHABLE_TRAP(0x6f76b10)
    }
}

#undef public_6f76b70
#undef public_6f76cd2
#undef public_6f76cee
#undef public_6f76d33
#undef public_6f76d40
#undef public_6f76d4f
#undef public_6f76d53
#undef public_6f76e02
#undef public_6f76e4c
#undef public_6f76e70
#undef public_6f76e80
#undef public_6f76e8d
#undef public_6f76e96
#undef public_6f76e98
#undef public_6f76f55
#undef public_6f76f9b
#undef public_6f77051
#undef public_6f77070
