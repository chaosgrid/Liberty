#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1250);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6306020);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6336380);

#define public_63363b3 _public_63363b3
#define public_63363d8 _public_63363d8
#define public_63363ee _public_63363ee
#define public_6336418 _public_6336418
#define public_6336435 _public_6336435
#define public_6336461 _public_6336461
#define public_633647f _public_633647f
#define public_63364a4 _public_63364a4
#define public_63364fd _public_63364fd
#define public_6336531 _public_6336531
#define public_6336550 _public_6336550
#define public_63365b7 _public_63365b7
#define public_63365e2 _public_63365e2
#define public_633660a _public_633660a
#define public_6336625 _public_6336625
#define public_6336644 _public_6336644
#define public_6336666 _public_6336666
#define public_63366c0 _public_63366c0
#define public_63366c8 _public_63366c8
#define public_63366f7 _public_63366f7
#define public_6336701 _public_6336701
#define public_6336716 _public_6336716
#define public_6336722 _public_6336722
#define public_6336741 _public_6336741

PROC_DECLARE(0x6336380, internal_6336380, public_6336380);
extern "C" NAKED register_t __cdecl internal_6336380()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push edi
        xor eax, eax
        mov ecx, 0x46
        mov edi, ebx
        rep stosd
        mov ecx, ebp
        mov byte ptr ds : [ebx+0x114], al
        mov byte ptr ss : [esp+0x2C], al
        call public_6310170
        test al, al
        je public_6336741
        push esi
/*FIXUP public_63363b3 : nop
        push offset public_63994e8 @0x63363b3*/
  FIXUP public_63363b3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_63363ee
        call public_6310b70
        test eax, eax
        jne public_63363d8
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [ebx+4], al
        jmp public_6336722
        public_63363d8 : nop
        push eax
        lea eax, ds:[ebx+4]
        push 0x40
        push eax
        call public_6306020
        add esp, 0xC
        mov dword ptr ds : [ebx], eax
        jmp public_6336722
/*FIXUP public_63363ee : nop
        push offset public_639eb60 @0x63363ee*/
  FIXUP public_63363ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eb60
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6336435
        call public_6310b70
        test eax, eax
        jne public_6336418
        mov dword ptr ds : [ebx+0x8C], eax
        mov byte ptr ds : [ebx+0x90], al
        jmp public_6336722
        public_6336418 : nop
        push eax
        lea ecx, ds:[ebx+0x90]
        push 0x40
        push ecx
        call public_6306020
        add esp, 0xC
        mov dword ptr ds : [ebx+0x8C], eax
        jmp public_6336722
/*FIXUP public_6336435 : nop
        push offset public_639eb6c @0x6336435*/
  FIXUP public_6336435 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eb6c
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_63364a4
        call public_6310b70
        mov esi, eax
        test esi, esi
        jne public_6336461
        mov dword ptr ds : [ebx+0xD0], eax
        mov byte ptr ds : [ebx+0xD4], al
        jmp public_6336722
        public_6336461 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+0xD4]
        jb public_633647f
        mov eax, 0x3F
        public_633647f : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0xD4], 0
        mov dword ptr ds : [ebx+0xD0], eax
        jmp public_6336722
/*FIXUP public_63364a4 : nop
        push offset public_639ec90 @0x63364a4*/
  FIXUP public_63364a4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ec90
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_63364fd
        push 1
        call public_63108f0
        fstp qword ptr ss : [esp+0x14]
        push 0
        mov ecx, ebp
        call public_63108f0
        fstp dword ptr ss : [esp+0x20]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x28]
        call public_63108f0
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[ebx+0x44]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_6336722
/*FIXUP public_63364fd : nop
        push offset public_639ec94 @0x63364fd*/
  FIXUP public_63364fd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ec94
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6336531
        call public_6310b70
        push eax
        call public_630d3f0
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_62f1250
        add esp, 8
        mov dword ptr ds : [ebx+0x50], eax
        jmp public_6336722
/*FIXUP public_6336531 : nop
        push offset public_6399f18 @0x6336531*/
  FIXUP public_6336531 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f18
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6336550
        push 0
        call public_63107c0
        mov dword ptr ds : [ebx+0x54], eax
        jmp public_6336722
/*FIXUP public_6336550 : nop
        push offset public_6399f04 @0x6336550*/
  FIXUP public_6336550 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f04
        call public_6310410
        test al, al
        jne public_6336716
/*FIXUP push offset public_63a4b88 @0x6336562*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b88
        mov ecx, ebp
        call public_6310410
        test al, al
        jne public_6336716
/*FIXUP push offset public_639eca8 @0x6336576*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eca8
        mov ecx, ebp
        call public_6310410
        test al, al
        jne public_6336716
/*FIXUP push offset public_639ec68 @0x633658a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ec68
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_63365b7
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx+0x84], eax
        jmp public_6336722
/*FIXUP public_63365b7 : nop
        push offset public_639ebe0 @0x63365b7*/
  FIXUP public_63365b7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ebe0
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_63365e2
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [ebx+0x80], eax
        jmp public_6336722
/*FIXUP public_63365e2 : nop
        push offset public_63a4b7c @0x63365e2*/
  FIXUP public_63365e2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b7c
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6336644
        push 0
        call public_6310a30
        mov esi, eax
        test esi, esi
        jne public_633660a
        mov dword ptr ds : [ebx+0x5C], eax
        mov byte ptr ds : [ebx+0x60], al
        jmp public_6336722
        public_633660a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ds:[ebx+0x60]
        jb public_6336625
        mov eax, 0x1F
        public_6336625 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x60], 0
        mov dword ptr ds : [ebx+0x5C], eax
        jmp public_6336722
/*FIXUP public_6336644 : nop
        push offset public_639ec78 @0x6336644*/
  FIXUP public_6336644 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ec78
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6336666
        push 0
        call public_63107c0
        mov byte ptr ds : [ebx+0x114], al
        jmp public_6336722
/*FIXUP public_6336666 : nop
        push offset public_6399770 @0x6336666*/
  FIXUP public_6336666 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399770
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6336701
        call public_6310b70
        mov esi, eax
        push esi
        call public_630d3f0
        mov edi, dword ptr ds : [public_658a840]
        mov dword ptr ss : [esp+0x38], eax
        add esp, 4
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, offset public_658a83c
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_658a840]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        je public_63366c0
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63366c0
        lea eax, ss:[esp+0x14]
        jmp public_63366c8
        public_63366c0 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        public_63366c8 : nop
        cmp dword ptr ds : [eax], edi
        jne public_63366f7
        mov ecx, dword ptr ds : [public_6399028]
        push esi
        push 0xBFF
/*FIXUP push offset public_63a4b20 @0x63366d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a4b50 @0x63366e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b50
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        mov dword ptr ds : [ebx+0x88], eax
        jmp public_6336722
        public_63366f7 : nop
        mov eax, edx
        mov dword ptr ds : [ebx+0x88], eax
        jmp public_6336722
/*FIXUP public_6336701 : nop
        push offset public_63a4b48 @0x6336701*/
  FIXUP public_6336701 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b48
        call public_6310410
        test al, al
        je public_6336722
        mov byte ptr ss : [esp+0x30], 1
        jmp public_6336722
        public_6336716 : nop
        push 0
        mov ecx, ebp
        call public_63107c0
        mov dword ptr ds : [ebx+0x58], eax
        public_6336722 : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        jne public_63363b3
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        pop esi
        je public_6336741
        mov byte ptr ds : [ebx+0x114], 1
        public_6336741 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6336380)
    }
}

#undef public_63363b3
#undef public_63363d8
#undef public_63363ee
#undef public_6336418
#undef public_6336435
#undef public_6336461
#undef public_633647f
#undef public_63364a4
#undef public_63364fd
#undef public_6336531
#undef public_6336550
#undef public_63365b7
#undef public_63365e2
#undef public_633660a
#undef public_6336625
#undef public_6336644
#undef public_6336666
#undef public_63366c0
#undef public_63366c8
#undef public_63366f7
#undef public_6336701
#undef public_6336716
#undef public_6336722
#undef public_6336741
