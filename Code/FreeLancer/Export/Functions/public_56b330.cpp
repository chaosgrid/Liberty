#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_488b70);
CLANG_FORWARD_PROC_SYMBOL(public_4890c0);
CLANG_FORWARD_PROC_SYMBOL(public_56bd10);
CLANG_FORWARD_PROC_SYMBOL(public_56bd40);
CLANG_FORWARD_PROC_SYMBOL(public_56d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5755a0);
CLANG_FORWARD_PROC_SYMBOL(public_575700);
CLANG_FORWARD_PROC_SYMBOL(public_575950);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_595f30);
CLANG_FORWARD_PROC_SYMBOL(public_595f50);
CLANG_FORWARD_PROC_SYMBOL(public_5a1f50);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);
CLANG_FORWARD_PROC_SYMBOL(public_5aade0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c299f);

#define public_56b5b1 _public_56b5b1
#define public_56b65f _public_56b65f
#define public_56b679 _public_56b679
#define public_56b6a0 _public_56b6a0
#define public_56b6b5 _public_56b6b5
#define public_56b738 _public_56b738
#define public_56bcb0 _public_56bcb0
#define public_56bce5 _public_56bce5

PROC_DECLARE(0x56b330, internal_56b330, public_56b330);
extern "C" NAKED register_t __cdecl internal_56b330()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c299f @0x56b338*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c299f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        push ebp
        push eax
        mov esi, ecx
        call public_591cd0
        lea edi, ds:[esi+0x7C]
        mov dword ptr ds : [esi+0xB4], ebp
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b90 @0x56b366*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b90
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xC4], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2a24 @0x56b378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2a24
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xC8], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2a04 @0x56b38a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2a04
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xCC], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e29f8 @0x56b39c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29f8
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xD0], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b80 @0x56b3ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b80
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xB8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b70 @0x56b3c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b70
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xBC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b5c @0x56b3d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b5c
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xC0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b50 @0x56b3e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b50
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xD4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b44 @0x56b3f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b44
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xD8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b38 @0x56b408*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b38
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xDC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b2c @0x56b41a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b2c
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xE0], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b20 @0x56b42c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b20
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xE4], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b10 @0x56b43e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b10
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xE8], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e2b04 @0x56b450*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2b04
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0xEC], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e2af8 @0x56b462*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2af8
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        push 0xF
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0xF0], eax
        call public_5760d0
        mov ecx, dword ptr ds : [esi+0xD4]
/*FIXUP push offset public_679bb4 @0x56b485*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
/*FIXUP push offset public_679bb4 @0x56b48a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_595f30
        mov ecx, dword ptr ds : [esi+0xD4]
/*FIXUP push offset public_679bb4 @0x56b49a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
/*FIXUP push offset public_679bb4 @0x56b49f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_595f50
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x41A00000
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0xC8]
        push ebp
        call public_579860
        mov ecx, dword ptr ds : [esi+0xCC]
        push ebp
        call public_579860
        mov ecx, dword ptr ds : [esi+0xD0]
        push ebp
        call public_579860
        mov ecx, offset public_67e7b8
        mov byte ptr ds : [esi+0x318], 0
        mov byte ptr ds : [esi+0x319], 0
        mov dword ptr ds : [esi+0x108], ebp
        mov dword ptr ds : [esi+0x10C], 0xC0000000
        call public_5aade0
        mov ecx, offset public_67e7b8
        call public_5aa680
        or ebx, 0xFFFFFFFF
        cmp eax, 1
        jne public_56b738
        mov eax, dword ptr ds : [esi+0xD8]
        mov dword ptr ds : [eax+0x8A4], ebp
        mov eax, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [eax+0x8A4], ebp
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x41A00000
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x3F800000
        call public_595e10
        mov eax, dword ptr ds : [esi+0xD4]
        or byte ptr ds : [eax+0x6C], 3
        mov ecx, offset public_67e96c
        mov dword ptr ss : [esp+0x10], ebp
        call public_575950
        mov ecx, dword ptr ds : [esi+0x35C]
        lea edi, ds:[esi+0x358]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebp
        call public_4890c0
        push ebp
        mov ecx, edi
        call public_5755a0
        test ebp, ebp
        mov dword ptr ss : [esp+0x64], 0
        jbe public_56b6b5
        public_56b5b1 : nop
        mov eax, dword ptr ss : [esp+0x64]
        push eax
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov ebp, eax
        test ebp, ebp
        je public_56b6a0
        mov al, byte ptr ss : [ebp+0x200]
        test al, al
        jne public_56b6a0
        lea ecx, ss:[esp+0x30]
        call public_56d4b0
        push ebp
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x34], ebp
        call public_488b70
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c71c8]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6fb0]
        add ebp, 0x228
        push ebp
        call dword ptr ds : [public_5c63d0]
        mov ebp, eax
        push ebp
        call dword ptr ds : [public_5c71c8]
        add esp, 8
        push eax
        push ebp
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6fb0]
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        mov ecx, edi
        call public_575700
        mov ebp, dword ptr ds : [esi+0x360]
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [esp+0x14], edx
        jne public_56b65f
        mov eax, dword ptr ds : [public_5c700c]
        public_56b65f : nop
        mov ecx, dword ptr ds : [esi+0xD8]
        push edx
        push eax
        call public_5a1f50
        mov ebp, dword ptr ss : [ebp-0xC]
        test ebp, ebp
        jne public_56b679
        mov ebp, dword ptr ds : [public_5c700c]
        public_56b679 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0xDC]
        push eax
        push ebp
        call public_5a1f50
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x5C], ebx
        call public_487c30
        public_56b6a0 : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x64], eax
        jb public_56b5b1
        public_56b6b5 : nop
        mov ecx, dword ptr ds : [esi+0xD4]
        fild dword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        call public_595d60
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x41A00000
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0
        call public_595db0
        mov ecx, esi
        call public_56bd10
        mov ecx, dword ptr ds : [esi+0xD4]
        mov edi, dword ptr ds : [esi+0xD8]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ds : [edi+0x88C], eax
        mov ecx, dword ptr ds : [esi+0xD4]
        mov edi, dword ptr ds : [esi+0xDC]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ds : [edi+0x88C], eax
        xor ebp, ebp
        public_56b738 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57b370
        mov eax, dword ptr ds : [esi+0xC8]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0xCC]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0xD0]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0xD8]
        mov byte ptr ds : [eax+0x8A0], 0
        mov eax, dword ptr ds : [esi+0xD8]
        mov byte ptr ds : [eax+0x8A1], 1
        mov eax, dword ptr ds : [esi+0xDC]
        mov byte ptr ds : [eax+0x8A0], 0
        mov eax, dword ptr ds : [esi+0xDC]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [eax+0x8A1], 1
        call public_56bd40
        mov ecx, dword ptr ds : [esi+0xB8]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xBC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xC0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xC4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xF0]
        and byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [esi+0x320]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x31C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x594
        call public_57da40
        mov eax, dword ptr ds : [esi+0x32C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x328]
        push eax
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x5EC
        call public_57da40
        mov eax, dword ptr ds : [esi+0x338]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x334]
        push eax
        push ecx
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x593
        call public_57da40
        mov eax, dword ptr ds : [esi+0x344]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x340]
        push eax
        push ecx
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x591
        call public_57da40
        mov eax, dword ptr ds : [esi+0x350]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x34C]
        push eax
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x4F5
        call public_57da40
        mov ecx, dword ptr ds : [esi+0xE0]
        add esp, 8
        call public_57b370
        mov edi, dword ptr ds : [public_5c62b8]
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xE0]
        push eax
        mov dword ptr ss : [esp+0x60], 1
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62b4]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call ebp
        lea eax, ds:[esi+0x31C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0xE0]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x60], 2
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xE4]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xE4]
        push eax
        mov dword ptr ss : [esp+0x60], 3
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call ebp
        lea eax, ds:[esi+0x328]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0xE4]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x60], 4
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xE8]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xE8]
        push eax
        mov dword ptr ss : [esp+0x60], 5
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call ebp
        lea eax, ds:[esi+0x334]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0xE8]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x60], 6
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xEC]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xEC]
        push eax
        mov dword ptr ss : [esp+0x60], 7
        call public_57b470
        mov dword ptr ss : [esp+0x5C], ebx
        lea ecx, ss:[esp+0x1C]
        call ebp
        lea eax, ds:[esi+0x340]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0xEC]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x60], 8
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xF0]
        call public_57b370
        push 0x1DF5
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xF0]
        push eax
        mov dword ptr ss : [esp+0x60], 9
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call ebp
        lea eax, ds:[esi+0x34C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0xF0]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x60], 0xA
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_5c62c8]
        mov al, byte ptr ss : [esp+0x64]
        push 0
        push 0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], 0
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_5e2af4 @0x56bb52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2af4
        mov dword ptr ss : [esp+0x68], 0xB
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_5e2af4 @0x56bb69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2af4
        call public_57e2c0
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 0x10
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xC4]
        push eax
        mov byte ptr ss : [esp+0x60], 0xC
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x5C], 0xB
        call ebp
        mov ecx, dword ptr ds : [esi+0xC4]
        lea edx, ss:[esp+0x24]
        push edx
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xB8]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xB8]
        push eax
        mov byte ptr ss : [esp+0x60], 0xD
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x5C], 0xB
        call ebp
        mov ecx, dword ptr ds : [esi+0xB8]
        lea eax, ss:[esp+0x24]
        push eax
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xBC]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0xBC]
        push eax
        mov byte ptr ss : [esp+0x60], 0xE
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x5C], 0xB
        call ebp
        mov ecx, dword ptr ds : [esi+0xBC]
        lea edx, ss:[esp+0x24]
        push edx
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0xC0]
        call public_57b370
        push 0x5724
        lea ecx, ss:[esp+0x18]
        call edi
        mov ecx, dword ptr ds : [esi+0xC0]
        push eax
        mov byte ptr ss : [esp+0x60], 0xF
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x5C], 0xB
        call ebp
        mov ecx, dword ptr ds : [esi+0xC0]
        lea eax, ss:[esp+0x24]
        push eax
        call public_57b3e0
        mov eax, dword ptr ds : [esi+0xD8]
        mov ecx, 0x14
        mov dword ptr ds : [eax+0x8A8], ecx
        mov esi, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [esi+0x8A8], ecx
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x5C], ebx
        mov edi, eax
        je public_56bce5
        nop 
        lea esp, ss:[esp]
        public_56bcb0 : nop
        mov ebx, esi
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[ebx+8]
        call public_45eeb0
        push ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_56bcb0
        mov eax, dword ptr ss : [esp+0x28]
        public_56bce5 : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x56b330)
    }
}

#undef public_56b5b1
#undef public_56b65f
#undef public_56b679
#undef public_56b6a0
#undef public_56b6b5
#undef public_56b738
#undef public_56bcb0
#undef public_56bce5
