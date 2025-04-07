#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_634d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634d970);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635fb0f _public_635fb0f
#define public_635fb6f _public_635fb6f
#define public_635fb76 _public_635fb76
#define public_635fce0 _public_635fce0

PROC_DECLARE(0x635f8c0, internal_635f8c0, public_635f8c0);
extern "C" NAKED register_t __cdecl internal_635f8c0()
{
    __asm
    {
        sub esp, 0xC08
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset _public_6261260 @0x635f8ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea eax, ss:[esp+0x6E4]
        push eax
        mov edi, ecx
        call public_6273bc0
        mov ebp, dword ptr ss : [esp+0xC24]
        push ebp
        lea ecx, ss:[esp+0x674]
        call public_635de90
        mov esi, dword ptr ss : [esp+0xC28]
        mov ebx, dword ptr ds : [esi+8]
/*FIXUP push offset _public_6261260 @0x635f900*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea ecx, ss:[esp+0x13C]
        push ecx
        call public_6273bc0
        push ebx
        lea ecx, ss:[esp+0xCC]
        call public_635de90
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ss : [esp+0xC20]
        mov dword ptr ds : [edi+0x2C], edx
        mov dword ptr ds : [edi+0x30], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
        lea ebx, ds:[edi+0x2C]
        and eax, 0xFFFF
        mov dword ptr ss : [esp+0x60], offset public_63a5700
        shl eax, 4
        add eax, edx
        mov edx, ecx
        and edx, 0xC
        mov edx, dword ptr ds : [edx+public_63ee4e0]
        mov ecx, dword ptr ds : [edx+ecx]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        and ecx, 0xFFFF
        shl ecx, 4
        add ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x90], edx
        fstp dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x98]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xA0], eax
        fstp dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x9C]
        call public_6347ef0
        fld dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+0x10]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax+0x50]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        shr edx, 0x16
        and edx, 0xFF
        fld dword ptr ds : [edx*4+public_658aa18]
        lea eax, ss:[esp+0x40]
        fadd dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x8C]
        fmul dword ptr ds : [public_63a5460]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x7C]
        call public_634d8d0
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0x9C]
        push eax
        call public_634d9d0
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [ebp+0x4C]
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x48]
        push edx
        fsub dword ptr ss : [ebp+0x50]
        lea ecx, ss:[esp+0xC0]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [ebp+0x54]
        fstp dword ptr ss : [esp+0x40]
        call public_628bed0
        lea eax, ss:[esp+0xA8]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_634d970
        lea ecx, ss:[esp+0xA8]
        call public_6347ef0
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edx+0x14]
        push ebx
        push 0
        shr eax, 0x16
        and eax, 0xFF
        fld dword ptr ds : [eax*4+public_658aa18]
        mov eax, dword ptr ds : [edi+0x24]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0xD0]
        fmul dword ptr ds : [public_63a53fc]
        push ecx
        mov ecx, dword ptr ds : [edi+0x20]
        lea edx, ss:[esp+0x67C]
        fadd dword ptr ds : [public_658aa10]
        push edx
        mov edx, dword ptr ds : [edi+0x1C]
        push eax
        mov eax, dword ptr ds : [edi+0x18]
        push ecx
        push edx
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x88]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_6369720
        test eax, eax
        je public_635fb0f
        mov dword ptr ds : [edi+0x28], 0x30
        public_635fb0f : nop
        fld dword ptr ds : [edi+0xC]
        mov eax, dword ptr ss : [esp+0xC20]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [public_63a53d0]
        mov ecx, dword ptr ds : [eax]
        fdiv dword ptr ss : [esp+0x64]
        shl ecx, 1
        sar ecx, 0x11
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x60], offset public_63a56dc
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 2
        fstp dword ptr ss : [esp+0x68]
        jmp public_635fb76
        public_635fb6f : nop
        mov esi, dword ptr ss : [esp+0xC28]
        public_635fb76 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ecx]
        mov ebp, ecx
        and ebp, 0xC
        mov eax, dword ptr ss : [ebp+public_63ee4e0]
        mov eax, dword ptr ds : [eax+ecx]
        mov ebp, dword ptr ss : [ebp+public_63ee4f0]
        mov ecx, dword ptr ds : [ecx+ebp]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+edx+4]
        add eax, edx
        and esi, 0xFFFF
        shl esi, 4
        fsub dword ptr ds : [esi+edx+4]
        add esi, edx
        fld dword ptr ds : [eax+8]
        and ecx, 0xFFFF
        fsub dword ptr ds : [esi+8]
        shl ecx, 4
        add ecx, edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x58], edx
        fstp dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], edx
        fld dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        fsub st, st(1)
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ecx+8]
        lea ecx, ss:[esp+0x50]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        fsubr dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x30]
        fsub dword ptr ss : [esp+0x20]
        push eax
        fld st(1)
        push ecx
        fmul dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x8C]
        fld st(1)
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x20]
        fld st(2)
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+0x40]
        call public_628bed0
        lea ecx, ss:[esp+0x84]
        call public_6347ef0
        fld dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x2C], edx
        fld dword ptr ds : [esi]
        push ebx
        push 0
        mov eax, edx
        lea ecx, ss:[esp+0xD0]
        push ecx
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x67C]
        push edx
        mov edx, dword ptr ds : [edi+0x1C]
        push 0
        fstp dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0xB0], eax
        mov eax, dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0xAC]
        fld dword ptr ds : [public_658ab34]
        push eax
        mov eax, dword ptr ds : [edi+0x18]
        fchs 
        push ecx
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x88]
        call public_63694a0
        test eax, eax
        je public_635fce0
        mov dword ptr ds : [edi+0x28], 0x31
        public_635fce0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_635fb6f
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC08
        ret 0x10
        UNREACHABLE_TRAP(0x635f8c0)
    }
}

#undef public_635fb0f
#undef public_635fb6f
#undef public_635fb76
#undef public_635fce0
