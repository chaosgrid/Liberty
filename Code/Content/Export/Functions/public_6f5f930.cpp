#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f930);
CLANG_FORWARD_PROC_SYMBOL(public_6f62440);
CLANG_FORWARD_PROC_SYMBOL(public_6f62750);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafa38);

#define public_6f5f970 _public_6f5f970
#define public_6f5fa60 _public_6f5fa60
#define public_6f5fa74 _public_6f5fa74
#define public_6f5faf4 _public_6f5faf4
#define public_6f5fb4f _public_6f5fb4f
#define public_6f5fb73 _public_6f5fb73

PROC_DECLARE(0x6f5f930, internal_6f5f930, public_6f5f930);
extern "C" NAKED register_t __cdecl internal_6f5f930()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafa38 @0x6f5f932*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafa38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        mov eax, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], 0
        je public_6f5fb73
        push ebp
        push edi
        xor ebp, ebp
        lea esp, ss:[esp]
        public_6f5f970 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f5fa74
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ss : [esp+0x98]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x9C], ebp
        call public_6f62750
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0xC
        cmp eax, ebp
        je public_6f5fa60
        mov ecx, dword ptr ss : [esp+0x3C]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_6f5fa60
        lea ecx, ds:[ebx+0x28]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea edi, ds:[ebx+0x1C]
        lea eax, ss:[esp+0x4C]
        push edi
        push eax
        call public_6f62440
        push edi
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        mov ecx, 0x5F3759DF
        fld dword ptr ss : [esp+0x3C]
        add esp, 0x1C
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fst dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fxch 
        fdiv dword ptr ds : [public_6fbbb94]
        fmulp 
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        public_6f5fa60 : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        call public_6eec8d0
        public_6f5fa74 : nop
        cmp dword ptr ds : [esi+8], 1
        jne public_6f5faf4
        fld dword ptr ds : [esi+0x14]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x30]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fxch 
        fdiv dword ptr ds : [public_6fbbb94]
        jmp public_6f5fb4f
        public_6f5faf4 : nop
        fld dword ptr ds : [esi+0xC]
        mov edx, 0x5F3759DF
        fsub dword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fxch 
        fdiv dword ptr ds : [public_6fbbb90]
        public_6f5fb4f : nop
        mov eax, dword ptr ss : [esp+0x9C]
        fmulp 
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        jne public_6f5f970
        pop edi
        pop ebp
        public_6f5fb73 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 8
        UNREACHABLE_TRAP(0x6f5f930)
    }
}

#undef public_6f5f970
#undef public_6f5fa60
#undef public_6f5fa74
#undef public_6f5faf4
#undef public_6f5fb4f
#undef public_6f5fb73
