#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6267db0);
CLANG_FORWARD_PROC_SYMBOL(public_626c160);
CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62672a5 _public_62672a5
#define public_62672b5 _public_62672b5
#define public_62672e4 _public_62672e4
#define public_62672e6 _public_62672e6
#define public_62672ee _public_62672ee
#define public_62672f2 _public_62672f2
#define public_62672fe _public_62672fe
#define public_6267320 _public_6267320
#define public_6267340 _public_6267340
#define public_6267352 _public_6267352
#define public_6267376 _public_6267376
#define public_6267389 _public_6267389
#define public_6267390 _public_6267390
#define public_62673a3 _public_62673a3
#define public_62673e8 _public_62673e8
#define public_6267427 _public_6267427
#define public_6267444 _public_6267444
#define public_6267455 _public_6267455
#define public_626745b _public_626745b
#define public_626746c _public_626746c

PROC_DECLARE(0x6267290, internal_6267290, public_6267290);
extern "C" NAKED register_t __cdecl internal_6267290()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, edx
        cmp ecx, edx
        push edi
        je public_62672b5
        public_62672a5 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_62672a5
        public_62672b5 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [esi+4]
        sub ebp, ebx
        sub ecx, eax
        sar ebp, 1
        sar ecx, 1
        cmp ecx, ebp
        mov dword ptr ds : [esi+8], eax
        jae public_62673e8
        test edi, edi
        je public_62672e4
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        cmp ebp, ecx
        jb public_62672e6
        public_62672e4 : nop
        mov ecx, ebp
        public_62672e6 : nop
        test edi, edi
        jne public_62672ee
        xor eax, eax
        jmp public_62672f2
        public_62672ee : nop
        sub eax, edi
        sar eax, 1
        public_62672f2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_62672fe
        xor eax, eax
        public_62672fe : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6267340
        lea esp, ss:[esp]
        public_6267320 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push eax
        call public_626c1c0
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 2
        add ebx, 2
        add esp, 8
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], edx
        jne public_6267320
        public_6267340 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6267376
        public_6267352 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push edx
        call public_626c1c0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x2C]
        add edx, 2
        add ebx, 2
        add esp, 8
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_6267352
        public_6267376 : nop
        mov ebx, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_62673a3
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, edi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6267390
        public_6267389 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ds:[ecx]
        public_6267390 : nop
        add eax, edi
        push edi
        push eax
        call public_626c1c0
        add edi, 2
        add esp, 8
        cmp edi, ebx
        jne public_6267389
        public_62673a3 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*2]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6266ff0
        add eax, ebp
        lea edx, ds:[edi+eax*2]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_62673e8 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        cmp ecx, ebp
        jae public_6267427
        add ebp, ebp
        lea edx, ds:[edi+ebp]
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6267db0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        sub eax, edi
        sar eax, 1
        push ecx
        lea edx, ds:[ebx+eax*2]
        push edx
        mov ecx, esi
        call public_6267db0
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        sar eax, 1
        push edi
        lea ecx, ds:[ebx+eax*2]
        push ecx
        jmp public_626745b
        public_6267427 : nop
        test ebp, ebp
        jbe public_626746c
        push eax
        push eax
        add ebp, ebp
        sub eax, ebp
        push eax
        mov ecx, esi
        call public_6267db0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edi, eax
        je public_6267455
        public_6267444 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edi
        mov word ptr ds : [ecx], dx
        jne public_6267444
        public_6267455 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push edi
        push eax
        public_626745b : nop
        push ebx
        call public_626c160
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        add eax, ebp
        mov dword ptr ds : [esi+8], eax
        public_626746c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6267290)
    }
}

#undef public_62672a5
#undef public_62672b5
#undef public_62672e4
#undef public_62672e6
#undef public_62672ee
#undef public_62672f2
#undef public_62672fe
#undef public_6267320
#undef public_6267340
#undef public_6267352
#undef public_6267376
#undef public_6267389
#undef public_6267390
#undef public_62673a3
#undef public_62673e8
#undef public_6267427
#undef public_6267444
#undef public_6267455
#undef public_626745b
#undef public_626746c
