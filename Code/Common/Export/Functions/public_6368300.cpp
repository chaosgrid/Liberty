#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6366070);
CLANG_FORWARD_PROC_SYMBOL(public_6368300);

#define public_636832c _public_636832c
#define public_636832f _public_636832f
#define public_6368362 _public_6368362
#define public_6368395 _public_6368395
#define public_63683a9 _public_63683a9
#define public_63683b2 _public_63683b2
#define public_63683c3 _public_63683c3
#define public_63683ce _public_63683ce
#define public_63683df _public_63683df

PROC_DECLARE(0x6368300, internal_6368300, public_6368300);
extern "C" NAKED register_t __cdecl internal_6368300()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        shl edx, 2
        mov ebx, eax
        lea eax, ds:[eax+edx+0x1F]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        and eax, 0xFFFFFFE0
        cmp eax, edi
        jb public_636832c
        push edx
        call public_63440d0
        mov ebx, eax
        jmp public_636832f
        public_636832c : nop
        mov dword ptr ds : [ecx+8], eax
        public_636832f : nop
        mov ecx, dword ptr ds : [esi+4]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        mov edi, ebx
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        mov dword ptr ss : [esp+0x1C], 0
        jle public_63683a9
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        sub ebp, edx
        public_6368362 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [edx]
        fld dword ptr ds : [eax+0xC4]
        mov ecx, dword ptr ds : [edx+ebp]
        fmul dword ptr ds : [public_63a5404]
        mov eax, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [eax+ecx*4]
        fld dword ptr ds : [eax+0x6C]
        fmul dword ptr ds : [esi+0x18]
        fmul st, st(2)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6368395
        mov dword ptr ss : [esp+0x20], 1
        public_6368395 : nop
        mov dword ptr ds : [ebx+ecx*4], 1
        mov eax, dword ptr ds : [esi+0x14]
        add edx, 4
        fstp dword ptr ds : [eax+ecx*4]
        dec edi
        jne public_6368362
        pop ebp
        public_63683a9 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        test eax, eax
        jle public_63683ce
        public_63683b2 : nop
        cmp dword ptr ds : [ebx], 0
        jne public_63683c3
        push edi
        mov ecx, esi
        call public_6366070
        test eax, eax
        je public_63683df
        public_63683c3 : nop
        mov eax, dword ptr ds : [esi+4]
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_63683b2
        public_63683ce : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        xor eax, eax
        test ecx, ecx
        pop esi
        sete al
        pop ebx
        ret 0x10
        public_63683df : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6368300)
    }
}

#undef public_636832c
#undef public_636832f
#undef public_6368362
#undef public_6368395
#undef public_63683a9
#undef public_63683b2
#undef public_63683c3
#undef public_63683ce
#undef public_63683df
