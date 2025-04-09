#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420750);
CLANG_FORWARD_PROC_SYMBOL(public_4981f0);
CLANG_FORWARD_PROC_SYMBOL(public_4a3680);

#define public_49820b _public_49820b
#define public_49822a _public_49822a
#define public_498240 _public_498240
#define public_498290 _public_498290
#define public_498294 _public_498294
#define public_4982b9 _public_4982b9
#define public_4982c7 _public_4982c7
#define public_4983a0 _public_4983a0
#define public_4983b8 _public_4983b8
#define public_4983da _public_4983da
#define public_4983f4 _public_4983f4
#define public_498410 _public_498410
#define public_49845f _public_49845f

PROC_DECLARE(0x4981f0, internal_4981f0, public_4981f0);
extern "C" NAKED register_t __cdecl internal_4981f0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x85C]
        xor esi, esi
        cmp eax, esi
        push edi
        jne public_49820b
        mov dword ptr ss : [esp+0x10], esi
        jmp public_49822a
        public_49820b : nop
        mov ecx, dword ptr ss : [ebp+0x860]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_49822a : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jle public_4983f4
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], eax
        mov edi, edi
        public_498240 : nop
        mov eax, dword ptr ss : [ebp+0x85C]
        mov edx, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+edx+0x5C]
        add eax, edx
        test cl, cl
        jne public_4983da
        mov cl, byte ptr ds : [eax+0x38]
        test cl, cl
        je public_4983da
        lea esi, ds:[eax+0x34]
        mov byte ptr ds : [eax+4], 0
        add eax, 0x24
        mov ecx, 9
        lea edi, ss:[esp+0x64]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        lea esp, ss:[esp]
        public_498290 : nop
        xor ebx, ebx
        xor edi, edi
        public_498294 : nop
        mov esi, dword ptr ss : [ebp+0x85C]
        add esi, edi
        mov cl, byte ptr ds : [esi+4]
        test cl, cl
        lea eax, ds:[esi+4]
        je public_4982b9
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4982c7
        public_4982b9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        add edi, 0x7C
        cmp ebx, eax
        jl public_498294
        jmp public_498290
        public_4982c7 : nop
        fld dword ptr ss : [ebp+0xF48]
        lea edx, ds:[esi+0x24]
        mov edi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], edi
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fld dword ptr ss : [ebp+0xF48]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x34]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x58], ecx
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x38]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x5C], edx
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x54], eax
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[ebp+0x848]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_4a3680
        mov al, byte ptr ds : [esi+0x38]
        mov ecx, dword ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+4], 0
        add esi, 0x38
        test al, al
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ecx
        je public_4983da
        test esi, esi
        jne public_4983a0
        mov dword ptr ss : [esp+0x64], esi
        mov byte ptr ss : [esp+0x68], 0
        jmp public_498290
        public_4983a0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4983b8
        mov eax, 0x1F
        public_4983b8 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x68]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x68], 0
        mov dword ptr ss : [esp+0x64], eax
        jmp public_498290
        public_4983da : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, 0x7C
        dec eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_498240
        public_4983f4 : nop
        mov ebx, dword ptr ss : [ebp+0x860]
        cmp ebx, ebx
        mov esi, dword ptr ss : [ebp+0x85C]
        mov dword ptr ss : [esp+0x18], ebx
        je public_49845f
        lea edi, ds:[ebx+0x24]
        nop 
        lea esp, ss:[esp]
        public_498410 : nop
        lea eax, ds:[edi-0x20]
        push eax
        mov ecx, esi
        call public_420750
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x24]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        lea ecx, ds:[edi+0x14]
        push ecx
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [esi+0x30], eax
        call public_420750
        lea edx, ds:[edi+0x38]
        push edx
        lea ecx, ds:[esi+0x58]
        call public_420750
        mov eax, dword ptr ss : [esp+0x18]
        add ebx, 0x7C
        add esi, 0x7C
        add edi, 0x7C
        cmp ebx, eax
        jne public_498410
        public_49845f : nop
        pop edi
        mov dword ptr ss : [ebp+0x860], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x4981f0)
    }
}

#undef public_49820b
#undef public_49822a
#undef public_498240
#undef public_498290
#undef public_498294
#undef public_4982b9
#undef public_4982c7
#undef public_4983a0
#undef public_4983b8
#undef public_4983da
#undef public_4983f4
#undef public_498410
#undef public_49845f
