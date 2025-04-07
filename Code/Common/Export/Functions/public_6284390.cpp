#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62842e0);
CLANG_FORWARD_PROC_SYMBOL(public_6284390);
CLANG_FORWARD_PROC_SYMBOL(public_6284480);
CLANG_FORWARD_PROC_SYMBOL(public_6284570);
CLANG_FORWARD_PROC_SYMBOL(public_6345ea0);

#define public_62843d1 _public_62843d1
#define public_62843e0 _public_62843e0
#define public_62843ef _public_62843ef
#define public_62843f3 _public_62843f3
#define public_6284406 _public_6284406
#define public_6284415 _public_6284415
#define public_6284423 _public_6284423
#define public_6284455 _public_6284455
#define public_6284476 _public_6284476
#define public_628447a _public_628447a

PROC_DECLARE(0x6284390, internal_6284390, public_6284390);
extern "C" NAKED register_t __cdecl internal_6284390()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x74]
        sub eax, 0
        je public_6284406
        dec eax
        je public_62843ef
        dec eax
        je public_62843d1
/*FIXUP push offset public_639b9c4 @0x62843ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b9c4
        push 0xC8
/*FIXUP push offset public_639b99c @0x62843b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b99c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62843bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6284423
        public_62843d1 : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_62843e0
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6284415
        public_62843e0 : nop
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x18], 0
        jmp public_6284423
        public_62843ef : nop
        test bl, bl
        je public_62843e0
        public_62843f3 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        call public_6345ea0
        fstp dword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x18], 0
        jmp public_6284423
        public_6284406 : nop
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_62843f3
        lea edx, ss:[esp+0x20]
        push edx
        public_6284415 : nop
        push esi
        call public_62842e0
        add esp, 8
        mov byte ptr ss : [esp+0x18], 1
        public_6284423 : nop
        push edi
        lea eax, ss:[esp+0xC]
        push esi
        push eax
        call public_6284570
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        test bl, bl
        mov dword ptr ds : [edx+8], eax
        pop edi
        jne public_6284455
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        je public_6284476
        public_6284455 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push ebx
        push eax
        push esi
        push ecx
        call public_6284480
        fcom dword ptr ss : [esp+0x34]
        add esp, 0x14
        fnstsw ax
        test ah, 0x41
        je public_628447a
        fstp st(0)
        public_6284476 : nop
        fld dword ptr ss : [esp+0x20]
        public_628447a : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6284390)
    }
}

#undef public_62843d1
#undef public_62843e0
#undef public_62843ef
#undef public_62843f3
#undef public_6284406
#undef public_6284415
#undef public_6284423
#undef public_6284455
#undef public_6284476
#undef public_628447a
