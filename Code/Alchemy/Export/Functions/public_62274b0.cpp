#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62274b0);
CLANG_FORWARD_PROC_SYMBOL(public_6229f90);
CLANG_FORWARD_JUMP_SYMBOL(public_6249078);

#define public_6227510 _public_6227510
#define public_6227534 _public_6227534
#define public_6227538 _public_6227538
#define public_622753d _public_622753d
#define public_6227562 _public_6227562
#define public_6227578 _public_6227578
#define public_622757f _public_622757f
#define public_6227594 _public_6227594
#define public_62275e3 _public_62275e3
#define public_6227618 _public_6227618
#define public_6227623 _public_6227623
#define public_6227643 _public_6227643
#define public_6227647 _public_6227647
#define public_622765d _public_622765d
#define public_6227660 _public_6227660

PROC_DECLARE(0x62274b0, internal_62274b0, public_62274b0);
extern "C" NAKED register_t __cdecl internal_62274b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249078 @0x62274b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249078
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        push ebx
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0xC]
        xor esi, esi
        mov ebp, eax
        mov dword ptr ss : [esp+0x30], esi
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x30]
        push edx
        push ebp
        push edi
        mov dword ptr ss : [esp+0x34], esi
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, esi
        je public_622757f
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x78]
        mov esi, ebx
        mov eax, dword ptr ss : [esp+0x34]
        public_6227510 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6227538
        test cl, cl
        je public_6227534
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6227538
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6227510
        public_6227534 : nop
        xor eax, eax
        jmp public_622753d
        public_6227538 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622753d : nop
        test eax, eax
        je public_6227562
/*FIXUP push offset public_625614c @0x6227541*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625614c
        push 0x43
        mov eax, 0x100001
/*FIXUP push offset public_62563d0 @0x622754d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563d0
/*FIXUP push offset public_625506c @0x6227552*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6227562 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        test eax, eax
        je public_6227578
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6227578 : nop
        xor eax, eax
        jmp public_6227660
        public_622757f : nop
        mov esi, dword ptr ss : [esp+0x38]
        push ebx
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x7C]
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        je public_6227594
        mov dword ptr ds : [eax], ebp
        public_6227594 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x38], esi
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, dword ptr ds : [esi]
        mov bl, 1
        push esi
        mov byte ptr ss : [esp+0x2C], bl
        call dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ds:[edi+8]
        mov byte ptr ss : [esp+0x30], 2
        call public_6229f90
        mov byte ptr ss : [esp+0x28], bl
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_62275e3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], 0
        public_62275e3 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+8]
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_6227647
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        je public_6227618
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [edx+0x50]
        jmp public_6227623
        public_6227618 : nop
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [ecx+0x50]
        mov dword ptr ds : [edi+0x1C], esi
        public_6227623 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edi+0x20], esi
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        inc edx
        test eax, eax
        mov dword ptr ds : [edi+4], edx
        je public_6227643
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6227643 : nop
        xor eax, eax
        jmp public_6227660
        public_6227647 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        test eax, eax
        je public_622765d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_622765d : nop
        or eax, 0xFFFFFFFF
        public_6227660 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x62274b0)
    }
}

#undef public_6227510
#undef public_6227534
#undef public_6227538
#undef public_622753d
#undef public_6227562
#undef public_6227578
#undef public_622757f
#undef public_6227594
#undef public_62275e3
#undef public_6227618
#undef public_6227623
#undef public_6227643
#undef public_6227647
#undef public_622765d
#undef public_6227660
