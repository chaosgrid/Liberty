#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4eef50);
CLANG_FORWARD_PROC_SYMBOL(public_58a580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4eef87 _public_4eef87
#define public_4eef8e _public_4eef8e
#define public_4eef96 _public_4eef96
#define public_4eefac _public_4eefac
#define public_4eefef _public_4eefef

PROC_DECLARE(0x4eef50, internal_4eef50, public_4eef50);
extern "C" NAKED register_t __cdecl internal_4eef50()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 0x100
        fcomp qword ptr ds : [public_5c8ba8]
        push edi
        mov edi, ecx
        fnstsw ax
        test ah, 0x41
        jne public_4eef87
        fild dword ptr ss : [esp+0x114]
        fsub dword ptr ss : [esp+0x10C]
        call public_5b7ec0
        mov ecx, eax
        test ecx, ecx
        jge public_4eef8e
        xor ecx, ecx
        jmp public_4eef96
        public_4eef87 : nop
        mov ecx, dword ptr ss : [esp+0x114]
        public_4eef8e : nop
        cmp ecx, 0x7D0
        jg public_4eefac
        public_4eef96 : nop
        push ecx
        lea eax, ss:[esp+8]
/*FIXUP push offset public_5d9628 @0x4eef9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9628
        push eax
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        jmp public_4eefef
        public_4eefac : nop
        mov eax, 0x10624DD3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push esi
        mov esi, edx
        imul edx, 0x3E8
        sub ecx, edx
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push edx
        push esi
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_5d9620 @0x4eefdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9620
        push ecx
        call dword ptr ds : [public_5c71ec]
        add esp, 0x10
        pop esi
        public_4eefef : nop
        mov ecx, dword ptr ds : [edi+0x40C]
        lea edx, ss:[esp+4]
        push edx
        call public_58a580
        mov edx, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [edi+0x40C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 5
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x40C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        pop edi
        add esp, 0x100
        ret 0x14
        UNREACHABLE_TRAP(0x4eef50)
    }
}

#undef public_4eef87
#undef public_4eef8e
#undef public_4eef96
#undef public_4eefac
#undef public_4eefef
