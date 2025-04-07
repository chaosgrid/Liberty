#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67148b0);
CLANG_FORWARD_PROC_SYMBOL(public_671699a);

#define public_6714906 _public_6714906
#define public_6714935 _public_6714935
#define public_6714984 _public_6714984
#define public_6714988 _public_6714988
#define public_67149c0 _public_67149c0
#define public_67149c4 _public_67149c4
#define public_67149ce _public_67149ce

PROC_DECLARE(0x67148b0, internal_67148b0, public_67148b0);
extern "C" NAKED register_t __cdecl internal_67148b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push 0
        push 0
        push edi
        push ebp
        call public_671699a
        mov esi, eax
        test esi, esi
        je public_67149ce
        push esi
        call dword ptr ds : [public_671b408]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_67149ce
        push esi
        push ebx
        push edi
        push ebp
        call public_671699a
        mov esi, eax
        test esi, esi
        je public_67149c4
        mov eax, dword ptr ds : [ebx+8]
        xor edi, edi
        xor esi, esi
        test eax, eax
        jle public_6714935
        lea ebp, ds:[ebx+0x18]
        public_6714906 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [public_671cfc8]
        push 0
        push 0
        add eax, ebx
        push 0xFFFFFFFF
        push eax
        push 0
        push ecx
        call dword ptr ds : [public_6719368]
        lea edx, ds:[edi+eax*2]
        mov eax, dword ptr ds : [ebx+8]
        inc esi
        add ebp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], edx
        mov edi, edx
        jl public_6714906
        public_6714935 : nop
        add edi, dword ptr ds : [ebx+0x18]
        push edi
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_671b408]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, ebx
        mov edi, ebp
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [ebx+0x18]
        mov edx, ecx
        add esp, 4
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov dword ptr ss : [esp+0x14], 0
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [ebx+8]
        lea edi, ds:[ebx+0x18]
        add esi, ebp
        test eax, eax
        jle public_67149c0
        mov eax, ebp
        sub eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6714988
        public_6714984 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6714988 : nop
        mov ecx, esi
        push 0x100
        sub ecx, ebp
        push esi
        mov dword ptr ds : [eax+edi], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_671cfc8]
        add edx, ebx
        push 0xFFFFFFFF
        push edx
        push 0
        push eax
        call dword ptr ds : [public_6719368]
        mov ecx, dword ptr ds : [ebx+8]
        lea esi, ds:[esi+eax*2]
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 4
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_6714984
        public_67149c0 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_67149c4 : nop
        push ebx
        call dword ptr ds : [public_671b404]
        add esp, 4
        public_67149ce : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x67148b0)
    }
}

#undef public_6714906
#undef public_6714935
#undef public_6714984
#undef public_6714988
#undef public_67149c0
#undef public_67149c4
#undef public_67149ce
