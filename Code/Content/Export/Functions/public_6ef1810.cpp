#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1810);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac096);

#define public_6ef1891 _public_6ef1891
#define public_6ef18c0 _public_6ef18c0
#define public_6ef18fc _public_6ef18fc
#define public_6ef1905 _public_6ef1905
#define public_6ef1910 _public_6ef1910
#define public_6ef192b _public_6ef192b
#define public_6ef1980 _public_6ef1980
#define public_6ef19b0 _public_6ef19b0
#define public_6ef19ec _public_6ef19ec
#define public_6ef19f5 _public_6ef19f5
#define public_6ef1a06 _public_6ef1a06
#define public_6ef1a2e _public_6ef1a2e
#define public_6ef1a3b _public_6ef1a3b
#define public_6ef1a40 _public_6ef1a40
#define public_6ef1a57 _public_6ef1a57
#define public_6ef1a5f _public_6ef1a5f
#define public_6ef1a68 _public_6ef1a68
#define public_6ef1a6f _public_6ef1a6f
#define public_6ef1a89 _public_6ef1a89
#define public_6ef1a92 _public_6ef1a92
#define public_6ef1a94 _public_6ef1a94

PROC_DECLARE(0x6ef1810, internal_6ef1810, public_6ef1810);
extern "C" NAKED register_t __cdecl internal_6ef1810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac096 @0x6ef1812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac096
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x440
        push ebx
        mov ebx, dword ptr ss : [esp+0x454]
        mov eax, dword ptr ds : [ebx+0x48]
        push ebp
        push esi
        push edi
        push eax
        call public_6f4d5e0
        mov al, byte ptr ss : [esp+0x17]
        xor edi, edi
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov eax, dword ptr ds : [ebx+0x48]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [public_6fb761c]
        push 0x100
        lea edx, ss:[esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x474]
        push ecx
        push edx
        push eax
        mov dword ptr ss : [esp+0x474], edi
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 0x1C
        xor ebp, ebp
        cmp eax, edi
        jbe public_6ef1910
        public_6ef1891 : nop
        mov ecx, dword ptr ss : [esp+ebp*4+0x50]
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb347c]
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x470]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_6ef1905
        nop 
        public_6ef18c0 : nop
        cmp dword ptr ds : [esi], 0x62E8
        je public_6ef18fc
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push esi
        push ecx
        call dword ptr ds : [public_6fb3474]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb75e0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jp public_6ef18fc
        push esi
        lea edx, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f95e00
        public_6ef18fc : nop
        mov eax, dword ptr ds : [edi]
        add esi, 8
        cmp esi, eax
        jne public_6ef18c0
        public_6ef1905 : nop
        mov eax, dword ptr ss : [esp+0x30]
        inc ebp
        cmp ebp, eax
        jb public_6ef1891
        xor edi, edi
        public_6ef1910 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, edi
        je public_6ef192b
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        jne public_6ef1a2e
        public_6ef192b : nop
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x38], al
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x34], offset public_6fb782c
        mov eax, dword ptr ds : [ebx+0x48]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov byte ptr ss : [esp+0x460], 1
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6fb3478]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 8
        cmp eax, ecx
        mov ebp, eax
        je public_6ef1a06
        nop 
        lea esp, ss:[esp]
        public_6ef1980 : nop
        mov ecx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_6fb347c]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x470]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_6ef19f5
        lea ecx, ds:[ecx]
        public_6ef19b0 : nop
        cmp dword ptr ds : [esi], 0x62E8
        je public_6ef19ec
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push esi
        push ecx
        call dword ptr ds : [public_6fb3474]
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_6fb75e0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jp public_6ef19ec
        push esi
        lea edx, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f95e00
        public_6ef19ec : nop
        mov eax, dword ptr ds : [edi]
        add esi, 8
        cmp esi, eax
        jne public_6ef19b0
        public_6ef19f5 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        add ebp, 4
        cmp ebp, ecx
        jne public_6ef1980
        mov eax, dword ptr ss : [esp+0x3C]
        xor edi, edi
        public_6ef1a06 : nop
        push ecx
        push eax
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x460], 0
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 4
        public_6ef1a2e : nop
        cmp ecx, edi
        je public_6ef1a3b
        sub edx, ecx
        sar edx, 2
        cmp edx, edi
        jne public_6ef1a40
        public_6ef1a3b : nop
        or esi, 0xFFFFFFFF
        jmp public_6ef1a94
        public_6ef1a40 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6fa3db0
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x20]
        jne public_6ef1a57
        mov edx, dword ptr ss : [esp+0x24]
        jmp public_6ef1a92
        public_6ef1a57 : nop
        cmp ecx, edi
        jne public_6ef1a5f
        xor esi, esi
        jmp public_6ef1a68
        public_6ef1a5f : nop
        mov esi, dword ptr ss : [esp+0x24]
        sub esi, ecx
        sar esi, 2
        public_6ef1a68 : nop
        dec esi
        jne public_6ef1a6f
        xor eax, eax
        jmp public_6ef1a89
        public_6ef1a6f : nop
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x20]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6ef1a89 : nop
        cmp eax, edi
        mov edx, ecx
        jbe public_6ef1a92
        lea edx, ds:[ecx+eax*4]
        public_6ef1a92 : nop
        mov esi, dword ptr ds : [edx]
        public_6ef1a94 : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x454]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44C
        ret 0xC
        UNREACHABLE_TRAP(0x6ef1810)
    }
}

#undef public_6ef1891
#undef public_6ef18c0
#undef public_6ef18fc
#undef public_6ef1905
#undef public_6ef1910
#undef public_6ef192b
#undef public_6ef1980
#undef public_6ef19b0
#undef public_6ef19ec
#undef public_6ef19f5
#undef public_6ef1a06
#undef public_6ef1a2e
#undef public_6ef1a3b
#undef public_6ef1a40
#undef public_6ef1a57
#undef public_6ef1a5f
#undef public_6ef1a68
#undef public_6ef1a6f
#undef public_6ef1a89
#undef public_6ef1a92
#undef public_6ef1a94
