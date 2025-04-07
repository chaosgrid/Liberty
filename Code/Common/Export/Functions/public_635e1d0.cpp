#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635e1d0);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635e1f6 _public_635e1f6
#define public_635e231 _public_635e231
#define public_635e450 _public_635e450
#define public_635e463 _public_635e463
#define public_635e4d2 _public_635e4d2
#define public_635e5a9 _public_635e5a9
#define public_635e692 _public_635e692
#define public_635e6d0 _public_635e6d0
#define public_635e6e9 _public_635e6e9
#define public_635e765 _public_635e765

PROC_DECLARE(0x635e1d0, internal_635e1d0, public_635e1d0);
extern "C" NAKED register_t __cdecl internal_635e1d0()
{
    __asm
    {
        sub esp, 0xC6C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC84]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], eax
        lea edi, ss:[esp+0x73C]
        mov ebx, 0x15
        public_635e1f6 : nop
        mov ecx, edi
        call public_6261260
        add edi, 0x40
        dec ebx
        jne public_635e1f6
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x6D8]
        call public_635de90
        mov edi, dword ptr ss : [esp+0xC8C]
        mov ebx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x194]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x10], 0x15
        public_635e231 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6261260
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, 0x40
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_635e231
        push ebx
        lea ecx, ss:[esp+0x130]
        call public_635de90
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x6C], offset public_63a56e8
        mov ecx, dword ptr ds : [eax+0x98]
        mov eax, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [ecx+0x148]
        fadd dword ptr ds : [eax+0x148]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [esp+0xC80]
        mov dword ptr ss : [ebp+0x2C], ecx
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x30], edx
        mov ecx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [eax]
        mov edx, eax
        and edx, 0xC
        mov edx, dword ptr ds : [edx+public_63ee4e0]
        mov eax, dword ptr ds : [edx+eax]
        mov edx, dword ptr ds : [edi]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+ecx+4]
        add eax, ecx
        and esi, 0xFFFF
        shl esi, 4
        fsub dword ptr ds : [esi+ecx+4]
        add esi, ecx
        fld dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC84]
        fsub dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ecx]
        mov ebx, ecx
        and ebx, 0xC
        mov ebx, dword ptr ds : [ebx+public_63ee4e0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ebx+ecx]
        fsub dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x10]
        and edi, 0xFFFF
        and ebx, 0xFFFF
        fstp dword ptr ss : [esp+0x90]
        shl edi, 4
        shl ebx, 4
        fstp dword ptr ss : [esp+0x94]
        lea ecx, ss:[esp+0x90]
        add edi, edx
        add ebx, edx
        mov dword ptr ss : [esp+0x98], eax
        call public_6347ef0
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xB8], ecx
        lea ecx, ss:[esp+0xB0]
        fstp dword ptr ss : [esp+0xB0]
        fstp dword ptr ss : [esp+0xB4]
        call public_6347ef0
        fld dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        fld dword ptr ds : [esi]
        mov eax, edx
        fstp dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x88], eax
        fstp dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ds : [edi]
        mov esi, dword ptr ss : [esp+0xC8C]
        fstp dword ptr ss : [esp+0xA0]
        mov edx, ecx
        fstp dword ptr ss : [esp+0xA4]
        lea eax, ss:[esp+0x2C]
        fld dword ptr ss : [ebp+8]
        push eax
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [public_63a53d0]
        lea ecx, ss:[esp+0xB4]
        fdiv dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x1C
        mov dword ptr ss : [esp+0xB0], edx
        fstp dword ptr ss : [esp+0x7C]
        call public_6348580
        mov ebx, dword ptr ss : [esp+0xC88]
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x94]
        push eax
        add ecx, 0x1C
        call public_6348580
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_628bed0
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [ecx+0x64]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx+0x68]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+0x60]
        faddp 
        fchs 
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_635e450
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC0], 0xBF800000
        jmp public_635e463
        public_635e450 : nop
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0xC0], 0x3F800000
        public_635e463 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        lea edi, ss:[ebp+0x2C]
        push edi
        push 0
        shr eax, 0x16
        and eax, 0xFF
        fld dword ptr ds : [eax*4+public_658aa18]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x134]
        fstp dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x6E0]
        push edx
        mov edx, dword ptr ss : [ebp+0x1C]
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        push ecx
        mov ecx, dword ptr ds : [public_658aa10]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x94]
        call public_6369720
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_635e4d2
        mov dword ptr ss : [ebp+0x28], 0x40
        public_635e4d2 : nop
        fld dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x10C]
        fld dword ptr ss : [esp+0x94]
        push edi
        fstp dword ptr ss : [esp+0x114]
        fld dword ptr ss : [esp+0x9C]
        push 0
        fstp dword ptr ss : [esp+0x11C]
        fld dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x134]
        fstp dword ptr ss : [esp+0x124]
        fld dword ptr ss : [esp+0xBC]
        push eax
        fstp dword ptr ss : [esp+0x12C]
        fld dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x130]
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x6E0]
        fadd st(0), st
        push ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        push 0
        fadd dword ptr ds : [public_63a53d8]
        push edx
        mov edx, dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [esp+0x114]
        push eax
        fld dword ptr ds : [public_63a53d0]
        push ecx
        fdiv dword ptr ss : [esp+0x11C]
        push edx
        push 0x2EDBE6FF
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x120], offset public_63a56e4
        fstp dword ptr ss : [esp+0x128]
        call public_63694a0
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_635e5a9
        mov dword ptr ss : [ebp+0x28], 0x41
        public_635e5a9 : nop
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xC80]
        fadd dword ptr ds : [public_63a53d8]
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        sar ecx, 0x11
        fstp dword ptr ss : [esp+0xC8]
        lea edx, ds:[eax+ecx*4]
        fld dword ptr ds : [public_63a53d0]
        mov dword ptr ss : [esp+0x20], eax
        fdiv dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ss : [esp+0xC84]
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        sar ecx, 0x11
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ds:[eax+ecx*4]
        lea eax, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x4C], eax
        lea ecx, ss:[esp+0xB0]
        lea eax, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, 1
        sub eax, ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x44], ecx
        lea edx, ss:[esp+0x90]
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x5C], ecx
        lea edx, ss:[esp+0x12C]
        lea eax, ss:[esp+0x6D4]
        lea ecx, ss:[esp+0x6D4]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0xC4], offset public_63a56e0
        fstp dword ptr ss : [esp+0xCC]
        xor esi, esi
        public_635e692 : nop
        mov eax, dword ptr ss : [esp+esi+0x3C]
        test eax, eax
        mov eax, dword ptr ss : [esp+esi+0x4C]
        fld dword ptr ds : [eax+4]
        jne public_635e6d0
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0xD8]
        fstp dword ptr ss : [esp+0xDC]
        jmp public_635e6e9
        public_635e6d0 : nop
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0xD8]
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0xDC]
        mov edx, ecx
        public_635e6e9 : nop
        mov ecx, dword ptr ss : [esp+ebx+0x38]
        lea eax, ss:[esp+0xE8]
        push eax
        mov eax, dword ptr ss : [esp+esi+0x20]
        mov dword ptr ss : [esp+0xE4], edx
        mov edx, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0xE8]
        call public_6347ef0
        fld dword ptr ds : [public_658ab34]
        mov edx, dword ptr ss : [esp+ebx+0x68]
        mov eax, dword ptr ss : [esp+esi+0x5C]
        mov ecx, dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ds : [edi]
        push edi
        push 0
        push edx
        fchs 
        mov edx, dword ptr ss : [ebp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ds : [edi+4]
        push 0
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0xEC]
        call public_63694a0
        test eax, eax
        je public_635e765
        mov dword ptr ss : [ebp+0x28], 0x42
        public_635e765 : nop
        sub ebx, 4
        add esi, 4
        cmp ebx, 0xFFFFFFF4
        jge public_635e692
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC6C
        ret 0x10
        UNREACHABLE_TRAP(0x635e1d0)
    }
}

#undef public_635e1f6
#undef public_635e231
#undef public_635e450
#undef public_635e463
#undef public_635e4d2
#undef public_635e5a9
#undef public_635e692
#undef public_635e6d0
#undef public_635e6e9
#undef public_635e765
