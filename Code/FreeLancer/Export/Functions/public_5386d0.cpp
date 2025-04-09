#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_5386d0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_538716 _public_538716
#define public_538721 _public_538721
#define public_53872d _public_53872d
#define public_538735 _public_538735
#define public_53881c _public_53881c
#define public_53886e _public_53886e
#define public_538871 _public_538871
#define public_538880 _public_538880
#define public_5388ac _public_5388ac
#define public_5388c3 _public_5388c3
#define public_5388d1 _public_5388d1

PROC_DECLARE(0x5386d0, internal_5386d0, public_5386d0);
extern "C" NAKED register_t __cdecl internal_5386d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi]
        test ebx, ebx
        je public_5388d1
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        jl public_5388d1
        mov esi, dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+0x10]
        mov eax, esi
        shl eax, 4
        lea ebp, ds:[eax+ebx]
        fst dword ptr ds : [edi+0x10]
        fcom dword ptr ss : [ebp-0x10]
        fnstsw ax
        test ah, 1
        jne public_538716
        mov dword ptr ds : [edi+0xC], 0xFFFFFFFF
        jmp public_538735
        public_538716 : nop
        cmp ecx, esi
        jge public_538735
        mov edx, ecx
        shl edx, 4
        add edx, ebx
        public_538721 : nop
        fcom dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_53872d
        mov dword ptr ds : [edi+0xC], ecx
        public_53872d : nop
        inc ecx
        add edx, 0x10
        cmp ecx, esi
        jl public_538721
        public_538735 : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 0xFFFFFFFF
        je public_53881c
        mov ecx, eax
        shl ecx, 4
        fsub dword ptr ds : [ecx+ebx]
        lea esi, ds:[ecx+ebx]
        inc eax
        shl eax, 4
        fld dword ptr ds : [eax+ebx]
        fsub dword ptr ds : [esi]
        lea eax, ds:[esi+4]
        mov edx, eax
        mov cx, word ptr ds : [edx]
        fdivp 
        mov word ptr ss : [esp+0x1C], cx
        mov bl, byte ptr ds : [edx+2]
        mov byte ptr ss : [esp+0x1E], bl
        movzx eax, byte ptr ds : [eax]
        movzx edx, byte ptr ds : [esi+0x14]
        sub edx, eax
        mov dword ptr ss : [esp+0x14], edx
        movzx ecx, cl
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        fmul dword ptr ss : [esp+0x10]
        fiadd dword ptr ss : [esp+0x14]
        call public_5b7ec0
        movzx ecx, byte ptr ss : [esp+0x1D]
        mov byte ptr ss : [esp+0x1C], al
        movzx eax, byte ptr ds : [esi+5]
        movzx edx, byte ptr ds : [esi+0x15]
        sub edx, eax
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        fmul dword ptr ss : [esp+0x10]
        fiadd dword ptr ss : [esp+0x14]
        call public_5b7ec0
        mov byte ptr ss : [esp+0x1D], al
        movzx eax, byte ptr ds : [esi+6]
        movzx edx, byte ptr ds : [esi+0x16]
        sub edx, eax
        xor ecx, ecx
        mov dword ptr ss : [esp+0x14], edx
        mov cl, bl
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        fiadd dword ptr ss : [esp+0x14]
        call public_5b7ec0
        mov esi, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x22], al
        call public_4115b0
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi]
        shl eax, 4
        fld dword ptr ds : [eax+ecx+0x18]
        add eax, ecx
        fsub dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+8]
        jmp public_5388c3
        public_53881c : nop
        mov eax, dword ptr ss : [ebp-4]
        fstp st(0)
        cmp eax, 0xFFFFFFFF
        mov esi, dword ptr ss : [esp+0x20]
        jne public_5388ac
        mov eax, dword ptr ds : [esi+0xD4]
        test eax, eax
        je public_5388d1
        mov eax, dword ptr ds : [esi+0xDC]
        test eax, eax
        je public_538880
        mov ebx, dword ptr ds : [esi+0xD4]
        lea edi, ds:[eax+0x38]
        mov ecx, edi
        call public_5afe60
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], edx
        xor edx, edx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, edx
        je public_53886e
        mov dword ptr ds : [ecx], eax
        jmp public_538871
        public_53886e : nop
        mov dword ptr ds : [edi+4], eax
        public_538871 : nop
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [esi+0xD4], edx
        mov dword ptr ds : [esi+0xDC], edx
        public_538880 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0xD0]
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0xD0], ecx
        jg public_5388d1
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_5388ac : nop
        add ebp, 0xFFFFFFF4
        push ebp
        mov ecx, esi
        call public_4115b0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        shl eax, 4
        fld dword ptr ds : [eax+ecx-8]
        public_5388c3 : nop
        fmul dword ptr ds : [edi+0x14]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_411300
        public_5388d1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x5386d0)
    }
}

#undef public_538716
#undef public_538721
#undef public_53872d
#undef public_538735
#undef public_53881c
#undef public_53886e
#undef public_538871
#undef public_538880
#undef public_5388ac
#undef public_5388c3
#undef public_5388d1
