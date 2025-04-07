#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f29320);
CLANG_FORWARD_PROC_SYMBOL(public_6f29750);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d190);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae52d);

#define public_6f29802 _public_6f29802
#define public_6f29829 _public_6f29829
#define public_6f29836 _public_6f29836
#define public_6f29870 _public_6f29870
#define public_6f29895 _public_6f29895
#define public_6f2989f _public_6f2989f
#define public_6f298e0 _public_6f298e0
#define public_6f29907 _public_6f29907
#define public_6f29914 _public_6f29914
#define public_6f299e7 _public_6f299e7
#define public_6f299f0 _public_6f299f0

PROC_DECLARE(0x6f29750, internal_6f29750, public_6f29750);
extern "C" NAKED register_t __cdecl internal_6f29750()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fae52d @0x6f29758*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae52d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x4040
        mov dword ptr fs : [0], esp
        call public_6fa9000
        mov eax, dword ptr ds : [public_6fd07c8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        push eax
        push ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd07c4
        call public_6f2d190
        mov eax, dword ptr ds : [public_6fd07b0]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd07ac
        call public_6f2d190
        mov eax, dword ptr ds : [public_6fd0798]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6fd0794
        call public_6f2d190
        mov edi, dword ptr ds : [public_6fb300c]
        lea ecx, ss:[esp+0x2AE4]
        call edi
        lea eax, ss:[esp+0x2AE4]
        push eax
/*FIXUP push offset public_6fb92c4 @0x6f297d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92c4
        mov dword ptr ss : [esp+0x405C], 0
        call public_6f24280
        mov esi, dword ptr ds : [public_6fb3024]
        add esp, 8
        lea ecx, ss:[esp+0x2AE4]
        call esi
        test al, al
        mov ebx, dword ptr ds : [public_6fb301c]
        je public_6f29836
/*FIXUP public_6f29802 : nop
        push offset public_6fb92b0 @0x6f29802*/
  FIXUP public_6f29802 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92b0
        lea ecx, ss:[esp+0x2AE8]
        call ebx
        test al, al
        je public_6f29829
        lea ecx, ss:[esp+0x2AE4]
/*FIXUP push offset public_6fd07c4 @0x6f2981b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd07c4
        push ecx
        call public_6f29320
        add esp, 8
        public_6f29829 : nop
        lea ecx, ss:[esp+0x2AE4]
        call esi
        test al, al
        jne public_6f29802
        public_6f29836 : nop
        push ebp
        mov ebp, dword ptr ds : [public_6fb3008]
        lea ecx, ss:[esp+0x2AE8]
        call ebp
        lea ecx, ss:[esp+0x18]
        call edi
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_6fb928c @0x6f29851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb928c
        mov byte ptr ss : [esp+0x4060], 1
        call public_6f24280
        add esp, 8
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_6f2989f
/*FIXUP public_6f29870 : nop
        push offset public_6fb92b0 @0x6f29870*/
  FIXUP public_6f29870 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92b0
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f29895
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fd07ac @0x6f29887*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd07ac
        push eax
        call public_6f29320
        add esp, 8
        public_6f29895 : nop
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        jne public_6f29870
        public_6f2989f : nop
        lea ecx, ss:[esp+0x18]
        call ebp
        lea ecx, ss:[esp+0x1580]
        call edi
        lea ecx, ss:[esp+0x1580]
        push ecx
/*FIXUP push offset public_6fb9268 @0x6f298b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9268
        mov byte ptr ss : [esp+0x4060], 2
        call public_6f24280
        add esp, 8
        lea ecx, ss:[esp+0x1580]
        call esi
        test al, al
        je public_6f29914
        mov edi, dword ptr ds : [public_6fb301c]
        mov edi, edi
/*FIXUP public_6f298e0 : nop
        push offset public_6fb92b0 @0x6f298e0*/
  FIXUP public_6f298e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92b0
        lea ecx, ss:[esp+0x1584]
        call edi
        test al, al
        je public_6f29907
        lea edx, ss:[esp+0x1580]
/*FIXUP push offset public_6fd0794 @0x6f298f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0794
        push edx
        call public_6f29320
        add esp, 8
        public_6f29907 : nop
        lea ecx, ss:[esp+0x1580]
        call esi
        test al, al
        jne public_6f298e0
        public_6f29914 : nop
        lea ecx, ss:[esp+0x1580]
        call ebp
        lea eax, ss:[esp+0x29A8]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x29A8]
        mov byte ptr ss : [esp+0x4058], 4
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x29AC]
        mov byte ptr ss : [esp+0x405C], 3
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x1580]
        mov byte ptr ss : [esp+0x4058], 5
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x1584]
        mov byte ptr ss : [esp+0x405C], 1
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x1440]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x1440]
        mov byte ptr ss : [esp+0x4058], 7
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x405C], 6
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4058], 8
        call dword ptr ds : [public_6fb304c]
        mov eax, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        pop ebp
        je public_6f299f0
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f299e7
        cmp cl, 0xFF
        je public_6f299e7
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f299f0
        public_6f299e7 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f299f0 : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov ebx, 9
        lea edx, ss:[esp+0x3F0C]
        mov dword ptr ss : [esp+0x4054], ebx
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ss:[esp+0x3F0C]
        mov byte ptr ss : [esp+0x4054], 0xA
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x3F10]
        mov byte ptr ss : [esp+0x4058], bl
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x2AE4]
        mov dword ptr ss : [esp+0x4054], 0xB
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x2AE8]
        mov dword ptr ss : [esp+0x4058], 0xFFFFFFFF
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x404C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x404C
        ret 
        UNREACHABLE_TRAP(0x6f29750)
    }
}

#undef public_6f29802
#undef public_6f29829
#undef public_6f29836
#undef public_6f29870
#undef public_6f29895
#undef public_6f2989f
#undef public_6f298e0
#undef public_6f29907
#undef public_6f29914
#undef public_6f299e7
#undef public_6f299f0
