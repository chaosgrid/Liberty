#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5570);

#define public_65d5944 _public_65d5944
#define public_65d5953 _public_65d5953
#define public_65d5963 _public_65d5963
#define public_65d596f _public_65d596f
#define public_65d599b _public_65d599b
#define public_65d59b4 _public_65d59b4
#define public_65d59cb _public_65d59cb
#define public_65d59dd _public_65d59dd
#define public_65d59f7 _public_65d59f7

PROC_DECLARE(0x65d5910, internal_65d5910, public_65d5910);
extern "C" NAKED register_t __cdecl internal_65d5910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        mov ecx, dword ptr ds : [eax+0x2014]
        lea edx, ds:[eax+0x1010]
        push ebx
        push ebp
        mov eax, dword ptr ds : [edx+0x1000]
        push esi
        xor ebx, ebx
        push edi
        cmp eax, ecx
        lea edi, ds:[eax+edx]
        jge public_65d5944
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ebx
        mov esi, ecx
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_65d5953
        public_65d5944 : nop
        mov esi, 0x1000
        mov dword ptr ss : [esp+0x10], edx
        sub esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        public_65d5953 : nop
        cmp esi, ebx
        jne public_65d5963
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        public_65d5963 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, esi
        cmp esi, ebx
        jl public_65d596f
        mov eax, ebx
        public_65d596f : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, eax
        mov ebp, ecx
        sub ebx, eax
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        test ebx, ebx
        rep movsb
        jle public_65d59b4
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_65d59b4
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        jge public_65d599b
        mov ebx, eax
        public_65d599b : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        lea esi, ds:[eax+ebp]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        add ebp, ebx
        rep movsb
        public_65d59b4 : nop
        mov esi, dword ptr ds : [edx+0x1000]
        add esi, ebp
        mov eax, esi
        mov dword ptr ds : [edx+0x1000], esi
        cmp eax, 0x1000
        jl public_65d59dd
        public_65d59cb : nop
        sub eax, 0x1000
        cmp eax, 0x1000
        jge public_65d59cb
        mov dword ptr ds : [edx+0x1000], eax
        public_65d59dd : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_65d5570
        test eax, eax
        je public_65d59f7
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 0xC
        public_65d59f7 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x65d5910)
    }
}

#undef public_65d5944
#undef public_65d5953
#undef public_65d5963
#undef public_65d596f
#undef public_65d599b
#undef public_65d59b4
#undef public_65d59cb
#undef public_65d59dd
#undef public_65d59f7
