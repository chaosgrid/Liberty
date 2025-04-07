#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f62950);

#define public_6f629ba _public_6f629ba
#define public_6f629cc _public_6f629cc
#define public_6f62a62 _public_6f62a62
#define public_6f62a8a _public_6f62a8a

PROC_DECLARE(0x6f62950, internal_6f62950, public_6f62950);
extern "C" NAKED register_t __cdecl internal_6f62950()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        push edi
        je public_6f62a8a
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        jae public_6f62a8a
        mov edi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x2C]
        mov eax, ecx
        imul eax, 0x44
        lea eax, ds:[eax+esi+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], esi
        mov esi, dword ptr ds : [edi]
        cmp esi, 1
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f629ba
        test ecx, ecx
        ja public_6f629cc
        public_6f629ba : nop
        cmp esi, 0xFFFFFFFF
        jne public_6f62a62
        dec edx
        cmp ecx, edx
        jae public_6f62a62
        public_6f629cc : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, 0x5F3759DF
        fsub dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [ebx+8]
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
        fst dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr ds : [public_6fd0eb0]
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], edx
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fild qword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f62a62
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [edi]
        pop edi
        pop esi
        sub ecx, eax
        pop ebp
        mov dword ptr ds : [edx], ecx
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        public_6f62a62 : nop
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        add esi, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        push ebx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x38], esi
        call public_6f62950
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_6f62a8a : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        mov dword ptr ds : [eax], 0xFFFFFFFF
        pop ebp
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f62950)
    }
}

#undef public_6f629ba
#undef public_6f629cc
#undef public_6f62a62
#undef public_6f62a8a
