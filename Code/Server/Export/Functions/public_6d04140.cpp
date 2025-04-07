#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04140);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d610bf);

#define public_6d041e5 _public_6d041e5
#define public_6d04210 _public_6d04210
#define public_6d04234 _public_6d04234
#define public_6d04255 _public_6d04255
#define public_6d04274 _public_6d04274
#define public_6d04282 _public_6d04282
#define public_6d04294 _public_6d04294
#define public_6d042cd _public_6d042cd
#define public_6d0433d _public_6d0433d
#define public_6d0434e _public_6d0434e
#define public_6d04363 _public_6d04363
#define public_6d04388 _public_6d04388
#define public_6d043ad _public_6d043ad
#define public_6d043b6 _public_6d043b6
#define public_6d0440a _public_6d0440a
#define public_6d04415 _public_6d04415
#define public_6d04424 _public_6d04424
#define public_6d0443b _public_6d0443b
#define public_6d0445a _public_6d0445a
#define public_6d04463 _public_6d04463

PROC_DECLARE(0x6d04140, internal_6d04140, public_6d04140);
extern "C" NAKED register_t __cdecl internal_6d04140()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d610bf @0x6d04148*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d610bf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x227C
        mov dword ptr fs : [0], esp
        call public_6d60160
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [public_6d644f0]
        mov eax, dword ptr ds : [public_6d64a58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x2298]
        push ecx
        push edx
        lea eax, ss:[esp+0x1584]
        push eax
        mov dword ptr ss : [esp+0x229C], ebx
        call dword ptr ds : [public_6d6463c]
        add esp, 0xC
        push ebx
        lea ecx, ss:[esp+0x1580]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d042cd
        lea edx, ss:[esp+0x1680]
        push edx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64644]
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64540]
        test al, al
        je public_6d04294
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP public_6d041e5 : nop
        push offset public_6d677fc @0x6d041e5*/
  FIXUP public_6d041e5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677fc
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6d04282
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6d04282
        lea ebx, ds:[ebx]
/*FIXUP public_6d04210 : nop
        push offset public_6d677f0 @0x6d04210*/
  FIXUP public_6d04210 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677f0
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        lea ecx, ss:[esp+0x14]
        je public_6d04234
        push ebx
        call dword ptr ds : [public_6d64578]
        call public_6d60150
        mov dword ptr ds : [edi+0x18], eax
        jmp public_6d04274
/*FIXUP public_6d04234 : nop
        push offset public_6d677e4 @0x6d04234*/
  FIXUP public_6d04234 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677e4
        call esi
        test al, al
        lea ecx, ss:[esp+0x14]
        je public_6d04255
        push ebx
        call dword ptr ds : [public_6d64578]
        call public_6d60150
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6d04274
/*FIXUP public_6d04255 : nop
        push offset public_6d677cc @0x6d04255*/
  FIXUP public_6d04255 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677cc
        call esi
        test al, al
        je public_6d04274
        push ebx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64578]
        call public_6d60150
        mov dword ptr ss : [esp+0xC], eax
        public_6d04274 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6d04210
        public_6d04282 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6d041e5
        public_6d04294 : nop
        cmp dword ptr ds : [edi], ebx
        je public_6d042cd
        lea eax, ss:[esp+0x1680]
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d644e4]
        mov ecx, dword ptr ds : [edi+0x18]
        push ecx
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_6d64640]
        fild dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x48], ecx
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ds : [eax+0x4C]
        public_6d042cd : nop
        push ebp
        lea edx, ss:[esp+0x1440]
        mov dword ptr ss : [esp+0x2294], 1
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1448]
        mov byte ptr ss : [esp+0x229C], 2
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x1450], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6d04363
        cmp dword ptr ss : [esp+0x1454], ebx
        je public_6d0434e
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, ebx
        je public_6d0433d
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6d0433d : nop
        mov edx, dword ptr ss : [esp+0x1454]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1454], ebx
        public_6d0434e : nop
        mov eax, dword ptr ss : [esp+0x1450]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1450], 0xFFFFFFFF
        public_6d04363 : nop
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_6d64c94]
        je public_6d04388
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6d04388 : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6d043b6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d043ad
        cmp cl, 0xFF
        je public_6d043ad
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d043b6
        public_6d043ad : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d043b6 : nop
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov dword ptr ss : [esp+0x144C], ebx
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x229C], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6d04424
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6d04415
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6d0440a
        push eax
        call ebp
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6d0440a : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6d04415 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6d04424 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        pop ebp
        je public_6d0443b
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_6d0443b : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6d04463
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d0445a
        cmp cl, 0xFF
        je public_6d0445a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d04463
        public_6d0445a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d04463 : nop
        mov ecx, dword ptr ss : [esp+0x2288]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2288
        ret 4
        UNREACHABLE_TRAP(0x6d04140)
    }
}

#undef public_6d041e5
#undef public_6d04210
#undef public_6d04234
#undef public_6d04255
#undef public_6d04274
#undef public_6d04282
#undef public_6d04294
#undef public_6d042cd
#undef public_6d0433d
#undef public_6d0434e
#undef public_6d04363
#undef public_6d04388
#undef public_6d043ad
#undef public_6d043b6
#undef public_6d0440a
#undef public_6d04415
#undef public_6d04424
#undef public_6d0443b
#undef public_6d0445a
#undef public_6d04463
