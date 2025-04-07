#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8f80);
CLANG_FORWARD_PROC_SYMBOL(public_6eab350);
CLANG_FORWARD_PROC_SYMBOL(public_6eab790);
CLANG_FORWARD_PROC_SYMBOL(public_6eac640);
CLANG_FORWARD_PROC_SYMBOL(public_6eac870);
CLANG_FORWARD_PROC_SYMBOL(public_6eaca20);
CLANG_FORWARD_PROC_SYMBOL(public_6eacb50);
CLANG_FORWARD_PROC_SYMBOL(public_6eacce0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eade80);
CLANG_FORWARD_PROC_SYMBOL(public_6eae0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9cdf);

#define public_6eab7e0 _public_6eab7e0
#define public_6eab939 _public_6eab939
#define public_6eab977 _public_6eab977
#define public_6eab998 _public_6eab998
#define public_6eaba05 _public_6eaba05
#define public_6eaba12 _public_6eaba12
#define public_6eaba27 _public_6eaba27
#define public_6eaba70 _public_6eaba70
#define public_6eaba79 _public_6eaba79
#define public_6eabaec _public_6eabaec
#define public_6eabafd _public_6eabafd
#define public_6eabb0e _public_6eabb0e
#define public_6eabb31 _public_6eabb31

PROC_DECLARE(0x6eab790, internal_6eab790, public_6eab790);
extern "C" NAKED register_t __cdecl internal_6eab790()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa9cdf @0x6eab798*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9cdf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16E4
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6fb368c]
        lea eax, ss:[esp+8]
        push edi
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x10], ebx
        call esi
        add esp, 4
        test al, al
        je public_6eab939
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, 9
        public_6eab7e0 : nop
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6ea8f80
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xD0], ecx
        push eax
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0x16FC], ebx
        call public_6ead3e0
        lea edx, ss:[esp+0xD0]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6fcee70
        mov byte ptr ss : [esp+0x1700], 1
        call public_6eae0c0
        lea ecx, ss:[esp+0x178]
        mov byte ptr ss : [esp+0x16F8], 5
        call public_6eacce0
        lea ecx, ss:[esp+0x16C]
        mov byte ptr ss : [esp+0x16F8], 4
        call public_6eacb50
        lea ecx, ss:[esp+0x158]
        mov byte ptr ss : [esp+0x16F8], 3
        call public_6eaca20
        lea ecx, ss:[esp+0x144]
        mov byte ptr ss : [esp+0x16F8], 2
        call public_6eac870
        lea ecx, ss:[esp+0x12C]
        mov byte ptr ss : [esp+0x16F8], bl
        call public_6eac640
        mov ecx, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ss : [esp+0xC4]
        push ecx
        push edx
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x1700], edi
        call public_6eade80
        mov eax, dword ptr ss : [esp+0xC4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0xC4], ebx
        mov dword ptr ss : [esp+0xC8], ebx
        mov dword ptr ss : [esp+0xCC], ebx
        mov byte ptr ss : [esp+0x16F8], 8
        call public_6eacb50
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x16F8], 7
        call public_6eaca20
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x16F8], 6
        call public_6eac870
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x16F8], 0xFFFFFFFF
        call public_6eac640
        lea ecx, ss:[esp+0xC]
        push ecx
        call esi
        add esp, 4
        test al, al
        jne public_6eab7e0
        public_6eab939 : nop
        lea ecx, ss:[esp+0x188]
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x188]
        push edx
/*FIXUP push offset public_6fb4470 @0x6eab94e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4470
        mov dword ptr ss : [esp+0x1700], 0xA
        call public_6f24280
        add esp, 8
        test al, al
        je public_6eab977
        lea ecx, ss:[esp+0x188]
        call dword ptr ds : [public_6fb3024]
        public_6eab977 : nop
        lea ecx, ss:[esp+0x188]
        call dword ptr ds : [public_6fb3070]
        test al, al
        jne public_6eaba27
        mov esi, dword ptr ds : [public_6fb3018]
        mov edi, dword ptr ds : [public_6fb36a8]
/*FIXUP public_6eab998 : nop
        push offset public_6fb4490 @0x6eab998*/
  FIXUP public_6eab998 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4490
        lea ecx, ss:[esp+0x18C]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6eaba27
        lea ecx, ss:[esp+0x188]
        call esi
        lea ecx, ss:[esp+0x188]
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6eaba05
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fcee70
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fcee74]
        je public_6eaba05
        lea ecx, ss:[esp+0x188]
        push ecx
        lea ecx, ds:[eax+0x10]
        call public_6eab350
        jmp public_6eaba12
        public_6eaba05 : nop
        lea ecx, ss:[esp+0x188]
        call dword ptr ds : [public_6fb3024]
        public_6eaba12 : nop
        lea ecx, ss:[esp+0x188]
        call dword ptr ds : [public_6fb3070]
        test al, al
        je public_6eab998
        public_6eaba27 : nop
        lea edx, ss:[esp+0x15B0]
        mov dword ptr ss : [esp+0x16F8], 0xB
        mov dword ptr ss : [esp+0x14], edx
        lea ecx, ss:[esp+0x15B0]
        mov byte ptr ss : [esp+0x16F8], 0xC
        call dword ptr ds : [public_6fb304c]
        mov eax, dword ptr ss : [esp+0x15B4]
        cmp eax, ebx
        je public_6eaba79
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6eaba70
        cmp cl, 0xFF
        je public_6eaba70
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6eaba79
        public_6eaba70 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6eaba79 : nop
        mov dword ptr ss : [esp+0x15B4], ebx
        mov dword ptr ss : [esp+0x15B8], ebx
        mov dword ptr ss : [esp+0x15BC], ebx
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x190]
        mov dword ptr ss : [esp+0x1700], 0xD
        call dword ptr ds : [public_6fb3308]
        mov eax, dword ptr ss : [esp+0x198]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_6eabb0e
        cmp dword ptr ss : [esp+0x19C], ebx
        mov esi, dword ptr ds : [public_6fb32a8]
        je public_6eabafd
        mov eax, dword ptr ss : [esp+0x1A0]
        cmp eax, ebx
        je public_6eabaec
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1A0], ebx
        mov dword ptr ss : [esp+0x1A4], ebx
        public_6eabaec : nop
        mov edx, dword ptr ss : [esp+0x19C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x19C], ebx
        public_6eabafd : nop
        mov eax, dword ptr ss : [esp+0x198]
        push eax
        call esi
        mov dword ptr ss : [esp+0x198], edi
        public_6eabb0e : nop
        mov eax, dword ptr ss : [esp+0x1A0]
        cmp eax, ebx
        je public_6eabb31
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x1A0], ebx
        mov dword ptr ss : [esp+0x1A4], ebx
        public_6eabb31 : nop
        push 1
        lea ecx, ss:[esp+0x18C]
        mov dword ptr ss : [esp+0x1AC], ebx
        mov dword ptr ss : [esp+0x16FC], edi
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x16F0]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16F0
        ret 
        UNREACHABLE_TRAP(0x6eab790)
    }
}

#undef public_6eab7e0
#undef public_6eab939
#undef public_6eab977
#undef public_6eab998
#undef public_6eaba05
#undef public_6eaba12
#undef public_6eaba27
#undef public_6eaba70
#undef public_6eaba79
#undef public_6eabaec
#undef public_6eabafd
#undef public_6eabb0e
#undef public_6eabb31
