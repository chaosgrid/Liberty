#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635e790);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635e7b6 _public_635e7b6
#define public_635e7ed _public_635e7ed
#define public_635e961 _public_635e961
#define public_635ea0f _public_635ea0f
#define public_635ea12 _public_635ea12
#define public_635ea47 _public_635ea47
#define public_635eaa6 _public_635eaa6
#define public_635eaae _public_635eaae
#define public_635eb58 _public_635eb58
#define public_635ec35 _public_635ec35
#define public_635ec57 _public_635ec57

PROC_DECLARE(0x635e790, internal_635e790, public_635e790);
extern "C" NAKED register_t __cdecl internal_635e790()
{
    __asm
    {
        sub esp, 0xBEC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC00]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x18], eax
        lea edi, ss:[esp+0x114]
        mov ebx, 0x15
        public_635e7b6 : nop
        mov ecx, edi
        call public_6261260
        add edi, 0x40
        dec ebx
        jne public_635e7b6
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        lea ecx, ss:[esp+0xB0]
        call public_635de90
        mov edx, dword ptr ss : [esp+0xC0C]
        mov ebx, dword ptr ds : [edx+8]
        lea edi, ss:[esp+0x6BC]
        mov dword ptr ss : [esp+0x10], 0x15
        public_635e7ed : nop
        mov ecx, edi
        call public_6261260
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 0x40
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_635e7ed
        push ebx
        lea ecx, ss:[esp+0x658]
        call public_635de90
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x98]
        mov edx, dword ptr ss : [esp+0xC0C]
        mov eax, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax+0x98]
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x2C], edx
        mov edx, dword ptr ss : [esp+0xC04]
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ss : [esp+0xC0C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0xC00]
        mov edi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp]
        mov ebp, dword ptr ds : [edx]
        lea ebx, ds:[esi+0x2C]
        and edi, 0xFFFF
        shl edi, 4
        fld dword ptr ds : [edi+ecx]
        add edi, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi+4]
        and ebp, 0xFFFF
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi+8]
        shl ebp, 4
        add ebp, ecx
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x24], offset public_63a56f4
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [ebp+4]
        push ebx
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [ebp+8]
        push 0
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [eax+0x64]
        mov dword ptr ss : [esp+0x84], edi
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x88], ebp
        fld dword ptr ds : [eax+0x68]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x68], ecx
        lea ecx, ss:[esp+0xB4]
        fstp dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax+0x50]
        mov edx, dword ptr ds : [eax+0x14]
        shr edx, 0x16
        and edx, 0xFF
        fld dword ptr ds : [edx*4+public_658aa18]
        mov edx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x65C]
        push eax
        push ecx
        push edx
        mov ecx, dword ptr ds : [esi+0x1C]
        fld st(1)
        fmul dword ptr ds : [public_63a5460]
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        fadd dword ptr ds : [public_658aa10]
        push ecx
        push edx
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x4C]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6369720
        test eax, eax
        je public_635e961
        mov dword ptr ds : [esi+0x28], 0x10
        public_635e961 : nop
        fld dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+0x18]
        mov ecx, edi
        fadd dword ptr ds : [ebx+4]
        fsub dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [eax+0x54]
        fstp dword ptr ss : [esp+0x14]
        call public_6347e60
        mov edi, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edi+0x148]
        mov ecx, ebp
        fadd dword ptr ds : [edi+0x144]
        fstp dword ptr ss : [esp+0x10]
        call public_6347e60
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+0x148]
        mov ebp, dword ptr ss : [esp+0xC08]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+0x98]
        fadd dword ptr ds : [eax+0x144]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0x148]
        fadd st, st(1)
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi+0x148]
        mov edi, dword ptr ss : [esp+0xC0C]
        mov edx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edx+0x98]
        fadd st, st(1)
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xA0]
        fstp st(0)
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+4]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_635ea0f
        fld dword ptr ds : [ecx+4]
        jmp public_635ea12
        public_635ea0f : nop
        fld dword ptr ds : [edx+4]
        public_635ea12 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        shr ecx, 0x16
        and ecx, 0xFF
        fld dword ptr ds : [ecx*4+public_658aa18]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_635ea47
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        public_635ea47 : nop
        fmul dword ptr ds : [public_63a56f0]
        mov ecx, dword ptr ss : [esp+0xC00]
        lea edx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x6C], edx
        fdiv st, st(1)
        mov edx, dword ptr ss : [esp+0xC04]
        mov dword ptr ss : [esp+0x94], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x98], edx
        lea eax, ss:[esp+0x654]
        xor edx, edx
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0xA4], ebp
        mov dword ptr ss : [esp+0xA8], edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x84]
        fstp st(0)
        jmp public_635eaae
        public_635eaa6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        public_635eaae : nop
        mov eax, dword ptr ss : [esp+ecx+0x98]
        mov edi, dword ptr ss : [esp+ecx+0x80]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+edx+0x7C]
        mov dword ptr ss : [esp+0x24], offset public_63a56ec
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+8]
        mov eax, ebp
        mov dword ptr ss : [esp+0x40], eax
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x1C], ebp
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x90], eax
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x50], eax
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x4C]
        mov ebp, eax
        fld dword ptr ss : [esp+edx+0x9C]
        mov edx, dword ptr ss : [esp+edx+0x6C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_63a53d0]
        and ebp, 0xC
        fdiv dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [ebp+public_63ee4f0]
        add ebp, eax
        mov dword ptr ss : [esp+0x68], edx
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        shl eax, 1
        sar eax, 0x11
        lea ebp, ss:[ebp+eax*4]
        mov eax, dword ptr ss : [esp+ecx+0xA8]
        mov ecx, dword ptr ss : [esp+ecx+0x70]
        mov dword ptr ss : [esp+0x8C], eax
        mov dword ptr ss : [esp+0x88], ecx
        public_635eb58 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ds : [ecx]
        mov eax, ebp
        and eax, 0xC
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [eax+public_63ee4e0]
        mov eax, dword ptr ds : [eax+ebp]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+edx+4]
        add eax, edx
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x58]
        fld st(1)
        fstp dword ptr ss : [esp+0x5C]
        fst dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fstp st(0)
        push edx
        fstp st(0)
        call public_6347df0
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x64]
        add esp, 4
        fmul st, st(2)
        push ebx
        push 0
        push ecx
        mov ecx, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x80]
        fmul st, st(2)
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push 0
        fstp dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x70]
        push eax
        fmul dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        push edx
        fmul dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp]
        call public_63694a0
        test eax, eax
        je public_635ec35
        mov dword ptr ds : [esi+0x28], 0x11
        public_635ec35 : nop
        cmp ebp, dword ptr ss : [esp+0x18]
        je public_635ec57
        mov ecx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [ecx+public_63ee4f0]
        mov edx, dword ptr ds : [eax+ebp]
        add eax, ebp
        shl edx, 1
        sar edx, 0x11
        lea ebp, ds:[eax+edx*4]
        jmp public_635eb58
        public_635ec57 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        sub eax, 4
        add edi, 4
        cmp eax, 0xFFFFFFF8
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jg public_635eaa6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBEC
        ret 0x10
        UNREACHABLE_TRAP(0x635e790)
    }
}

#undef public_635e7b6
#undef public_635e7ed
#undef public_635e961
#undef public_635ea0f
#undef public_635ea12
#undef public_635ea47
#undef public_635eaa6
#undef public_635eaae
#undef public_635eb58
#undef public_635ec35
#undef public_635ec57
