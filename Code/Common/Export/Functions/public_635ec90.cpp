#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635ec90);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635ee14 _public_635ee14
#define public_635eea1 _public_635eea1
#define public_635ef13 _public_635ef13
#define public_635efe3 _public_635efe3
#define public_635f010 _public_635f010

PROC_DECLARE(0x635ec90, internal_635ec90, public_635ec90);
extern "C" NAKED register_t __cdecl internal_635ec90()
{
    __asm
    {
        sub esp, 0xBA4
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset _public_6261260 @0x635ec9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea eax, ss:[esp+0x680]
        push eax
        mov esi, ecx
        call public_6273bc0
        mov ecx, dword ptr ss : [esp+0xBC0]
        push ecx
        lea ecx, ss:[esp+0x610]
        call public_635de90
        mov ebp, dword ptr ss : [esp+0xBC4]
        mov edi, dword ptr ss : [ebp+8]
/*FIXUP push offset _public_6261260 @0x635ecd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea edx, ss:[esp+0xD8]
        push edx
        call public_6273bc0
        push edi
        lea ecx, ss:[esp+0x68]
        call public_635de90
        mov eax, dword ptr ss : [esp+0xBB8]
        mov ecx, dword ptr ds : [eax+0x98]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x98]
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x2C], ecx
        mov dword ptr ds : [esi+0x30], edx
        mov ecx, dword ptr ss : [ebp]
        lea ebx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0xBBC]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x10]
        and edi, 0xFFFF
        shl edi, 4
        fld dword ptr ds : [edi+ecx]
        add edi, ecx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], offset public_63a56f4
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax+0x64]
        push ebx
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ds : [eax+0x68]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x60], ecx
        fstp dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+0x50]
        mov edx, dword ptr ds : [eax+0x14]
        shr edx, 0x16
        and edx, 0xFF
        fld dword ptr ds : [edx*4+public_658aa18]
        mov edx, dword ptr ds : [esi+0x24]
        fld st(1)
        fmul dword ptr ds : [public_63a5460]
        push 0
        lea eax, ss:[esp+0x6C]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        fadd dword ptr ds : [public_658aa10]
        lea ecx, ss:[esp+0x618]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        push ecx
        push edx
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x48]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6369720
        test eax, eax
        je public_635ee14
        mov dword ptr ds : [esi+0x28], 0x10
        public_635ee14 : nop
        fld dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x144]
        mov ecx, edi
        fadd dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x18], edx
        fsub dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [eax+0x54]
        fstp dword ptr ss : [esp+0x10]
        call public_6347e60
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0x148]
        mov edx, dword ptr ds : [esi+0x10]
        fadd dword ptr ds : [eax+0x144]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0x148]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x98]
        mov eax, dword ptr ds : [edx+0x14]
        faddp 
        shr eax, 0x16
        and eax, 0xFF
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+0x48]
        fld dword ptr ds : [eax*4+public_658aa18]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_635eea1
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        public_635eea1 : nop
        fmul st, st(1)
        mov ecx, dword ptr ss : [esp+0xBBC]
        mov edx, ecx
        and edx, 0xC
        fchs 
        mov eax, dword ptr ds : [edx+public_63ee4f0]
        fstp dword ptr ss : [esp+0x18]
        add eax, ecx
        mov dword ptr ss : [esp+0x20], offset public_63a56ec
        fstp st(0)
        mov dword ptr ss : [esp+0x34], 0
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x3C], 0
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x4C]
        fst dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        sar ecx, 0x11
        fstp st(0)
        lea eax, ds:[eax+ecx*4]
        mov dword ptr ss : [esp+0x10], eax
        public_635ef13 : nop
        mov ecx, dword ptr ss : [esp+0xBC4]
        mov ebp, eax
        and ebp, 0xC
        mov edx, dword ptr ss : [ebp+public_63ee4e0]
        mov eax, dword ptr ds : [edx+eax]
        mov edx, dword ptr ds : [ecx]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+edx+4]
        add eax, edx
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x54]
        fld st(1)
        fstp dword ptr ss : [esp+0x58]
        fst dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        push edx
        fstp st(0)
        call public_6347df0
        fld dword ptr ss : [esp+0x5C]
        add esp, 4
        fmul st, st(1)
        push ebx
        fld dword ptr ss : [esp+0x60]
        push 0
        fmul st, st(2)
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x618]
        fld dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x20]
        fmul st, st(2)
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push 0
        fstp dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x6C]
        push eax
        fmul dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        push edx
        fmul dword ptr ss : [esp+0x38]
        push eax
        push ecx
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp]
        call public_63694a0
        test eax, eax
        je public_635efe3
        mov dword ptr ds : [esi+0x28], 0x11
        public_635efe3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0xBBC]
        je public_635f010
        mov ebp, dword ptr ss : [ebp+public_63ee4f0]
        mov ecx, dword ptr ss : [ebp+eax]
        add ebp, eax
        shl ecx, 1
        sar ecx, 0x11
        lea edx, ss:[ebp+ecx*4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, edx
        jmp public_635ef13
        public_635f010 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBA4
        ret 0x10
        UNREACHABLE_TRAP(0x635ec90)
    }
}

#undef public_635ee14
#undef public_635eea1
#undef public_635ef13
#undef public_635efe3
#undef public_635f010
