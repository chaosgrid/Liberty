#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635da70);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635dc32 _public_635dc32
#define public_635dc93 _public_635dc93
#define public_635dc96 _public_635dc96
#define public_635dd50 _public_635dd50
#define public_635de49 _public_635de49
#define public_635de4b _public_635de4b
#define public_635de79 _public_635de79

PROC_DECLARE(0x635da70, internal_635da70, public_635da70);
extern "C" NAKED register_t __cdecl internal_635da70()
{
    __asm
    {
        sub esp, 0xC0C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC20]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
/*FIXUP push offset _public_6261260 @0x635da84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea eax, ss:[esp+0x6E8]
        push eax
        mov esi, ecx
        call public_6273bc0
        push edi
        lea ecx, ss:[esp+0x678]
        call public_635de90
        mov ebx, dword ptr ss : [esp+0xC2C]
        mov edi, dword ptr ds : [ebx+8]
/*FIXUP push offset _public_6261260 @0x635dab3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea ecx, ss:[esp+0x140]
        push ecx
        call public_6273bc0
        push edi
        lea ecx, ss:[esp+0xD0]
        call public_635de90
        mov edx, dword ptr ss : [esp+0xD0]
        fld dword ptr ds : [edx+0x148]
        mov eax, dword ptr ss : [esp+0x678]
        fadd dword ptr ds : [eax+0x148]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [esp+0xC20]
        mov dword ptr ds : [esi+0x2C], ecx
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x30], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp]
        and eax, 0xFFFF
        lea edi, ds:[esi+0x2C]
        shl eax, 4
        add eax, ecx
        mov dword ptr ss : [esp+0x78], offset public_63a56dc
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ds : [eax]
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+0xC24]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x94], edx
        mov edx, dword ptr ds : [ebx]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        fstp dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ds : [eax]
        mov eax, edx
        lea edx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0xB4], eax
        mov eax, dword ptr ds : [ebx+4]
        push edx
        fstp dword ptr ss : [esp+0xB0]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0xBC]
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0x9C]
        call public_6347ef0
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ds : [eax+0x50]
        mov ecx, dword ptr ds : [eax+0x14]
        shr ecx, 0x16
        and ecx, 0xFF
        fld dword ptr ds : [ecx*4+public_658aa18]
        lea ecx, ss:[esp+0x67C]
        fld st(1)
        fmul dword ptr ds : [public_63a5460]
        fadd dword ptr ds : [public_658aa10]
        fstp dword ptr ss : [esp+0x1C]
        fld st(1)
        fadd dword ptr ds : [eax+0x54]
        lea eax, ss:[esp+0xD4]
        push eax
        mov eax, dword ptr ds : [edi]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        fadd st, st(1)
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0xA0]
        fstp st(0)
        call public_6369720
        test eax, eax
        je public_635dc32
        mov dword ptr ds : [esi+0x28], 0x20
        public_635dc32 : nop
        mov ecx, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x34], offset public_63a56d8
        mov edx, dword ptr ds : [ecx+0x14]
        shr edx, 0x16
        and edx, 0xFF
        fld dword ptr ds : [edx*4+public_658aa18]
        lea edx, ds : [edx*4+public_658aa18]
        fld dword ptr ds : [ecx+0x54]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_635dc93
        fld dword ptr ds : [edx]
        jmp public_635dc96
        public_635dc93 : nop
        fld dword ptr ds : [ecx+0x54]
        public_635dc96 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [public_658ab34]
        mov eax, dword ptr ds : [eax+0x98]
        fmul dword ptr ds : [eax+0x48]
        fchs 
        fld dword ptr ds : [ecx+0x50]
        fmul dword ptr ds : [public_63a5464]
        lea ecx, ss:[esp+0xBC]
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        fadd st, st(2)
        add ecx, 0x1C
        fmulp 
        fdiv dword ptr ds : [edx]
        lea edx, ss:[esp+0x5C]
        push edx
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        call public_6348580
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x1C
        call public_6366010
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_63a53d8]
        mov ecx, dword ptr ss : [esp+0xC20]
        mov ebx, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+0x38]
        and ebx, 0xFFFF
        fld dword ptr ds : [public_63a53d0]
        shl ebx, 4
        fdiv dword ptr ss : [esp+0x38]
        add ebx, edx
        mov edx, ecx
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4f0]
        add eax, ecx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        sar ecx, 0x11
        lea eax, ds:[eax+ecx*4]
        mov dword ptr ss : [esp+0x10], eax
        fadd dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+0x1C]
        fmul dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x18]
        public_635dd50 : nop
        mov ecx, eax
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4e0]
        mov eax, dword ptr ds : [edx+eax]
        mov edx, dword ptr ss : [ebp]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+edx]
        add eax, edx
        fsub dword ptr ds : [ebx]
        push ecx
        mov dword ptr ss : [esp+0x34], ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        fst dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x6C]
        faddp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fld st(0)
        add esp, 4
        fmul dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_635de49
        fld dword ptr ss : [esp+0x1C]
        push edi
        fmul st, st(1)
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0xD4]
        push ecx
        fmul st, st(1)
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x680]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push 0
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x40]
        push edx
        fmul st, st(1)
        push eax
        push ecx
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x78]
        fstp st(0)
        call public_63694a0
        test eax, eax
        je public_635de4b
        mov dword ptr ds : [esi+0x28], 0x21
        jmp public_635de4b
        public_635de49 : nop
        fstp st(0)
        public_635de4b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ss : [esp+0xC20]
        je public_635de79
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edx+public_63ee4f0]
        add eax, ecx
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        sar ecx, 0x11
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, edx
        jmp public_635dd50
        public_635de79 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC0C
        ret 0x10
        UNREACHABLE_TRAP(0x635da70)
    }
}

#undef public_635dc32
#undef public_635dc93
#undef public_635dc96
#undef public_635dd50
#undef public_635de49
#undef public_635de4b
#undef public_635de79
