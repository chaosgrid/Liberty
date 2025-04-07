#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_6352a90);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);
CLANG_FORWARD_PROC_SYMBOL(public_6364890);
CLANG_FORWARD_PROC_SYMBOL(public_6365280);

#define public_63648c6 _public_63648c6
#define public_63648d8 _public_63648d8
#define public_63648e6 _public_63648e6
#define public_6364a40 _public_6364a40
#define public_6364abd _public_6364abd
#define public_6364b65 _public_6364b65
#define public_6364b67 _public_6364b67
#define public_6364b8b _public_6364b8b
#define public_6364be9 _public_6364be9
#define public_6364c2b _public_6364c2b
#define public_6364c6d _public_6364c6d
#define public_6364c8f _public_6364c8f
#define public_6364cb4 _public_6364cb4

PROC_DECLARE(0x6364890, internal_6364890, public_6364890);
extern "C" NAKED register_t __cdecl internal_6364890()
{
    __asm
    {
        sub esp, 0x98
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        dec eax
        push edi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ds : [esi+4], eax
        jns public_63648d8
        mov ebp, dword ptr ss : [esp+0xB0]
        mov ebx, dword ptr ss : [esp+0xAC]
        push ebp
        push 0
        push ebx
        push 0
        call public_6352a90
        test eax, eax
        je public_63648e6
        public_63648c6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x98
        ret 0x10
        public_63648d8 : nop
        mov ebx, dword ptr ss : [esp+0xAC]
        mov ebp, dword ptr ss : [esp+0xB0]
        public_63648e6 : nop
        mov edi, dword ptr ss : [esp+0xB4]
        lea eax, ss:[esp+0x60]
        push eax
        push edi
        push ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebp
        call public_635bda0
        mov ebx, dword ptr ss : [esp+0xC4]
        lea ecx, ss:[esp+0x7C]
        push ecx
        push ebx
        push ebp
        call public_635bda0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0x18
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        call public_634d860
        lea ecx, ss:[esp+0x98]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x74]
        push edx
        call public_634d860
        fld dword ptr ss : [esp+0x60]
        fsub dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x78]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 0x41
        jne public_63648c6
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        fsqrt 
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x30], 0
        lea ebp, ss:[esp+0x98]
        fdivr dword ptr ds : [public_63a53d0]
        fld st(0)
        fmul dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x64]
        add eax, 0x60
        fsub dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x78]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x70]
        mov dword ptr ds : [eax+8], ecx
        fmul st, st(2)
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ebx+8]
        fstp st(0)
        add ecx, 0x5C
        fld dword ptr ds : [ecx]
        add eax, 0x5C
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        fxch 
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x24], eax
        public_6364a40 : nop
        mov ebx, dword ptr ss : [esp+eax+0x4C]
        fld dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+eax+0x58]
        mov esi, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx]
        and esi, 0xFFFF
        shl esi, 4
        fsub dword ptr ds : [esi+eax]
        add esi, eax
        lea eax, ss:[ebp+8]
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax-4]
        mov dword ptr ss : [esp+0x2C], edx
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax]
        mov eax, ebx
        fsub dword ptr ds : [esi+8]
        and eax, 0xC
        add ebx, dword ptr ds : [eax+public_63ee4f0]
        mov ecx, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x3C]
        shl ecx, 1
        fmul dword ptr ds : [esi]
        sar ecx, 0x11
        fld dword ptr ss : [esp+0x40]
        lea eax, ds:[ebx+ecx*4]
        fmul dword ptr ds : [esi+4]
        mov ecx, eax
        and ecx, 0xC
        mov edi, dword ptr ds : [ecx+public_63ee4f0]
        faddp 
        add edi, eax
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [esi+8]
        faddp 
        fstp dword ptr ss : [esp+0x54]
        public_6364abd : nop
        mov ecx, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx]
        and ecx, 0xFFFF
        shl ecx, 4
        fmul dword ptr ds : [ecx+eax]
        add ecx, eax
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fsub dword ptr ss : [esp+0x54]
        fst dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6364b67
        fld dword ptr ds : [ecx]
        push ecx
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fmul dword ptr ss : [esp+0x3C]
        add esp, 4
        fcom dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_6364b65
        mov eax, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+eax+0x50]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [esp+eax+0x5C]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        jmp public_6364b67
        public_6364b65 : nop
        fstp st(0)
        public_6364b67 : nop
        cmp edi, ebx
        je public_6364b8b
        mov eax, dword ptr ds : [edi]
        shl eax, 1
        sar eax, 0x11
        lea edi, ds:[edi+eax*4]
        mov ecx, edi
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4f0]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x2C]
        jmp public_6364abd
        public_6364b8b : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x24]
        add eax, 4
        sub edx, 4
        sub ebp, 0x10
        cmp eax, 4
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x24], edx
        jle public_6364a40
        mov eax, dword ptr ss : [esp+0x10]
        xor esi, esi
        cmp eax, esi
        je public_6364be9
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x80]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call public_635b150
        fld dword ptr ss : [esp+0x94]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        je public_6364c2b
        public_6364be9 : nop
        mov edx, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xB8]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp+0xB0]
        mov word ptr ds : [eax+0x1A], si
        mov eax, dword ptr ds : [edx+0x10]
        pop edi
        mov word ptr ds : [eax+0x1A], si
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x14], ecx
        mov eax, 1
        pop ebx
        add esp, 0x98
        ret 0x10
        public_6364c2b : nop
        fld dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d4]
        mov edx, dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        mov eax, dword ptr ds : [edx+0x14]
        je public_6364c8f
        shr eax, 8
        and eax, 3
        lea esi, ds:[eax*8]
        sub esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [eax+0x10]
        lea esi, ds:[edx+esi*4+0x18]
        cmp edi, esi
        je public_6364c6d
        xor dword ptr ds : [edx+0x14], 0x100
        public_6364c6d : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push edx
        call public_6364890
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x98
        ret 0x10
        public_6364c8f : nop
        shr eax, 8
        and eax, 3
        lea esi, ds:[eax*8]
        sub esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax+0x10]
        lea esi, ds:[edx+esi*4+0x18]
        cmp edi, esi
        je public_6364cb4
        xor dword ptr ds : [edx+0x14], 0x100
        public_6364cb4 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edx
        call public_6365280
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x98
        ret 0x10
        UNREACHABLE_TRAP(0x6364890)
    }
}

#undef public_63648c6
#undef public_63648d8
#undef public_63648e6
#undef public_6364a40
#undef public_6364abd
#undef public_6364b65
#undef public_6364b67
#undef public_6364b8b
#undef public_6364be9
#undef public_6364c2b
#undef public_6364c6d
#undef public_6364c8f
#undef public_6364cb4
