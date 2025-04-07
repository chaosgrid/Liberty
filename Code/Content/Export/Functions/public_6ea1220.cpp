#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1220);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa939a);

#define public_6ea1308 _public_6ea1308
#define public_6ea1319 _public_6ea1319
#define public_6ea132e _public_6ea132e
#define public_6ea1354 _public_6ea1354
#define public_6ea1379 _public_6ea1379
#define public_6ea1382 _public_6ea1382
#define public_6ea13d7 _public_6ea13d7
#define public_6ea13e2 _public_6ea13e2
#define public_6ea13f1 _public_6ea13f1
#define public_6ea1407 _public_6ea1407
#define public_6ea1427 _public_6ea1427
#define public_6ea1430 _public_6ea1430

PROC_DECLARE(0x6ea1220, internal_6ea1220, public_6ea1220);
extern "C" NAKED register_t __cdecl internal_6ea1220()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa939a @0x6ea1228*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa939a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x158C]
        push edi
        push esi
        lea eax, ss:[esp+0x1590]
        mov edi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], edi
        call public_6eb75a0
        xor ebx, ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1584], ebx
        mov dword ptr ds : [edi], offset public_6fb37d0
        call dword ptr ds : [public_6fb300c]
        lea ecx, ss:[esp+0x14]
        push ecx
        add esi, 0xC
        push esi
        mov byte ptr ss : [esp+0x158C], 1
        call public_6f24280
        add esp, 8
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_6eb84c0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3008]
        lea eax, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ds : [public_6fb3304]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_6fb32a8]
        je public_6ea132e
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6ea1319
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6ea1308
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6ea1308 : nop
        mov eax, dword ptr ss : [esp+0x1450]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6ea1319 : nop
        mov ecx, dword ptr ss : [esp+0x144C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6ea132e : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3390]
        je public_6ea1354
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea1354 : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea1382
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea1379
        cmp cl, 0xFF
        je public_6ea1379
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea1382
        public_6ea1379 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea1382 : nop
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov dword ptr ss : [esp+0x144C], ebx
        mov edx, dword ptr ds : [public_6fb3304]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1590], 4
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6ea13f1
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea13e2
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea13d7
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea13d7 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea13e2 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6ea13f1 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea1407
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea1407 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop ebp
        je public_6ea1430
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea1427
        cmp cl, 0xFF
        je public_6ea1427
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea1430
        public_6ea1427 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea1430 : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea1220)
    }
}

#undef public_6ea1308
#undef public_6ea1319
#undef public_6ea132e
#undef public_6ea1354
#undef public_6ea1379
#undef public_6ea1382
#undef public_6ea13d7
#undef public_6ea13e2
#undef public_6ea13f1
#undef public_6ea1407
#undef public_6ea1427
#undef public_6ea1430
