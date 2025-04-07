#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f67d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafcb0);

#define public_6f67df2 _public_6f67df2
#define public_6f67e65 _public_6f67e65
#define public_6f67ed3 _public_6f67ed3
#define public_6f67ee9 _public_6f67ee9
#define public_6f67f48 _public_6f67f48
#define public_6f67f5c _public_6f67f5c
#define public_6f67f74 _public_6f67f74
#define public_6f67f91 _public_6f67f91
#define public_6f67fff _public_6f67fff
#define public_6f6802d _public_6f6802d
#define public_6f68035 _public_6f68035
#define public_6f68046 _public_6f68046
#define public_6f68060 _public_6f68060
#define public_6f680a3 _public_6f680a3
#define public_6f680a7 _public_6f680a7
#define public_6f680b6 _public_6f680b6
#define public_6f680c5 _public_6f680c5
#define public_6f680f2 _public_6f680f2
#define public_6f68125 _public_6f68125
#define public_6f6817c _public_6f6817c
#define public_6f681a8 _public_6f681a8
#define public_6f681b7 _public_6f681b7
#define public_6f681d7 _public_6f681d7
#define public_6f6822e _public_6f6822e
#define public_6f68257 _public_6f68257

PROC_DECLARE(0x6f67d80, internal_6f67d80, public_6f67d80);
extern "C" NAKED register_t __cdecl internal_6f67d80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafcb0 @0x6f67d88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafcb0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        test al, al
        push esi
        push edi
        je public_6f681d7
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        push ebp
        push eax
        mov ecx, ebx
        call public_6f73930
        mov cl, byte ptr ss : [esp+0x74]
        xor esi, esi
        mov dword ptr ss : [esp+0x64], eax
        mov byte ptr ss : [esp+0x44], cl
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x50], esi
        mov eax, dword ptr ds : [eax+0x154]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x5C], esi
        jne public_6f67df2
        lea edx, ss:[esp+0x64]
        push edx
        push esi
        lea ecx, ss:[esp+0x4C]
        call public_6eb5770
        jmp public_6f67e65
        public_6f67df2 : nop
        push 0x14
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x4C]
        push edi
        push eax
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6eed270
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        push edx
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[edi+0x14]
        add esp, 4
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x50], edx
        call public_6fa3db0
        mov ecx, dword ptr ss : [esp+0x64]
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x48], edi
        mov eax, dword ptr ds : [ecx+0x154]
        push eax
        lea edx, ss:[esp+0x48]
        push edx
        call public_6f66220
        add esp, 8
        public_6f67e65 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        test eax, 0x7F0000
        je public_6f680f2
        mov dl, byte ptr ss : [esp+0x74]
        mov byte ptr ss : [esp+0x34], dl
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x60], 1
        call public_6f73930
        mov dword ptr ss : [esp+0x10], eax
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        jne public_6f67ed3
        mov edx, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x40]
        call public_6f937c0
        jmp public_6f67f5c
        public_6f67ed3 : nop
        mov edx, dword ptr ss : [esp+0x38]
        cmp edx, esi
        je public_6f67ee9
        mov ecx, dword ptr ss : [esp+0x40]
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 5
        jae public_6f67f48
        public_6f67ee9 : nop
        push 0x14
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6eed270
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x14]
        add esp, 4
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x40], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], esi
        public_6f67f48 : nop
        mov ecx, dword ptr ds : [eax+0x154]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_6f66220
        add esp, 8
        public_6f67f5c : nop
        mov edi, dword ptr ss : [esp+0x48]
        cmp edi, dword ptr ss : [esp+0x4C]
        je public_6f680c5
        mov ebp, dword ptr ss : [esp+0x78]
        mov ebx, dword ptr ds : [public_6fb33f4]
        public_6f67f74 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f68046
        mov esi, dword ptr ss : [esp+0x38]
        cmp esi, dword ptr ss : [esp+0x3C]
        je public_6f680b6
        public_6f67f91 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        test al, al
        mov eax, dword ptr ds : [esi]
        je public_6f67fff
        mov ecx, dword ptr ds : [eax+8]
        call public_6f33f80
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x78], eax
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        mov ebx, dword ptr ds : [public_6fb33f4]
        push ebp
        lea edx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call ebx
        mov al, byte ptr ss : [esp+0x80]
        add esp, 0xC
        test al, al
        je public_6f68035
        mov ecx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [edx+8]
        call public_6f33f80
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x20]
        jmp public_6f6802d
        public_6f67fff : nop
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x24]
        push edx
        push ecx
        call dword ptr ds : [public_6fb364c]
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edx+8]
        add esp, 8
        call public_6f33f80
        mov ebx, dword ptr ds : [public_6fb33f4]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x24]
        lea ecx, ss:[esp+0x28]
        public_6f6802d : nop
        push ebp
        push eax
        push ecx
        call ebx
        add esp, 0xC
        public_6f68035 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        add esi, 4
        cmp esi, eax
        jne public_6f67f91
        jmp public_6f680b6
        public_6f68046 : nop
        mov al, byte ptr ss : [esp+0x74]
        test al, al
        je public_6f680b6
        mov esi, dword ptr ss : [esp+0x38]
        cmp esi, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x70], esi
        je public_6f680b6
        lea esp, ss:[esp]
        public_6f68060 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        test al, al
        je public_6f680a3
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x2C]
        push eax
        push edx
        call dword ptr ds : [public_6fb364c]
        mov esi, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        call public_6f33f80
        push ebp
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        call ebx
        add esp, 0xC
        jmp public_6f680a7
        public_6f680a3 : nop
        mov esi, dword ptr ss : [esp+0x70]
        public_6f680a7 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x70], esi
        jne public_6f68060
        public_6f680b6 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        add edi, 4
        cmp edi, eax
        jne public_6f67f74
        public_6f680c5 : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 4
        push eax
        call public_6fa8fe0
        add esp, 4
        pop ebp
        pop ebx
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f680f2 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov esi, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x70]
        push ecx
        push edx
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        test eax, eax
        jne public_6f681b7
        cmp esi, dword ptr ss : [esp+0x4C]
        je public_6f681b7
        mov edi, dword ptr ss : [esp+0x78]
        mov ebp, dword ptr ds : [public_6fb33f4]
        public_6f68125 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f6817c
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        push edi
        lea edx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x7C], eax
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        call ebp
        mov al, byte ptr ss : [esp+0x80]
        add esp, 0xC
        test al, al
        je public_6f681a8
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        push edi
        lea edx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x34], eax
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        call ebp
        add esp, 0xC
        jmp public_6f681a8
        public_6f6817c : nop
        mov al, byte ptr ss : [esp+0x74]
        test al, al
        je public_6f681a8
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [public_6fb364c]
        push edi
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        call ebp
        add esp, 0x14
        public_6f681a8 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        add esi, 4
        cmp esi, eax
        jne public_6f68125
        public_6f681b7 : nop
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop ebp
        pop ebx
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f681d7 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov esi, dword ptr ds : [public_6fb364c]
        lea ecx, ss:[esp+0x68]
        push ecx
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6f68257
        mov ecx, dword ptr ss : [esp+0x64]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6f68257
        lea edx, ss:[esp+0x60]
        push edx
        call public_6f49bc0
        mov esi, dword ptr ss : [esp+0x74]
        mov edi, dword ptr ds : [public_6fb33f4]
        add esp, 4
        test eax, eax
        jne public_6f6822e
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        call edi
        add esp, 0xC
        public_6f6822e : nop
        mov al, byte ptr ss : [esp+0x6C]
        test al, al
        je public_6f68257
        lea edx, ss:[esp+0x64]
        push edx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6f68257
        push esi
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        call edi
        add esp, 0xC
        public_6f68257 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6f67d80)
    }
}

#undef public_6f67df2
#undef public_6f67e65
#undef public_6f67ed3
#undef public_6f67ee9
#undef public_6f67f48
#undef public_6f67f5c
#undef public_6f67f74
#undef public_6f67f91
#undef public_6f67fff
#undef public_6f6802d
#undef public_6f68035
#undef public_6f68046
#undef public_6f68060
#undef public_6f680a3
#undef public_6f680a7
#undef public_6f680b6
#undef public_6f680c5
#undef public_6f680f2
#undef public_6f68125
#undef public_6f6817c
#undef public_6f681a8
#undef public_6f681b7
#undef public_6f681d7
#undef public_6f6822e
#undef public_6f68257
