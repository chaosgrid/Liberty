#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ccb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f4b8ad _public_6f4b8ad
#define public_6f4b8cb _public_6f4b8cb
#define public_6f4b928 _public_6f4b928
#define public_6f4b990 _public_6f4b990
#define public_6f4b9a4 _public_6f4b9a4
#define public_6f4b9bc _public_6f4b9bc
#define public_6f4b9d3 _public_6f4b9d3

PROC_DECLARE(0x6f4b870, internal_6f4b870, public_6f4b870);
extern "C" NAKED register_t __cdecl internal_6f4b870()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov ebp, ecx
        lea esi, ds:[ebx+8]
        mov ecx, esi
        mov byte ptr ds : [edi], 0
        call public_6f1cd20
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ecx+0x10]
        test edx, edx
        jne public_6f4b9bc
        test eax, eax
        je public_6f4b8ad
        cmp dword ptr ds : [eax+0xC], 0x3319
        je public_6f4b9d3
        public_6f4b8ad : nop
        lea edx, ds:[ebx+4]
        push edx
        call public_6f49b00
        mov edi, eax
        add esp, 4
        test edi, edi
        jne public_6f4b8cb
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6f4b8cb : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_6f47af0
        fld dword ptr ss : [esp+0x10]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f4b928
        fld dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f4b928
        fld dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f4b928
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6f4b928 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebp
        push 2
        call public_6f19cd0
        mov esi, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        mov ecx, edi
        mov byte ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0xC], 0x3319
        mov dword ptr ds : [esi+0x1C], 0x10
        call public_6f478b0
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], 0
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0x40]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6f4b990
        mov ebp, eax
        public_6f4b990 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6f4b9a4
        mov dword ptr ds : [eax], esi
        public_6f4b9a4 : nop
        inc dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, eax
        mov byte ptr ds : [eax], 1
        mov al, byte ptr ds : [edi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_6f4b9bc : nop
        test eax, eax
        je public_6f4b9d3
        cmp dword ptr ds : [eax+0xC], 0x3319
        jne public_6f4b9d3
        mov ecx, esi
        call public_6f1ccb0
        mov byte ptr ds : [edi], 1
        public_6f4b9d3 : nop
        mov al, byte ptr ds : [edi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f4b870)
    }
}

#undef public_6f4b8ad
#undef public_6f4b8cb
#undef public_6f4b928
#undef public_6f4b990
#undef public_6f4b9a4
#undef public_6f4b9bc
#undef public_6f4b9d3
