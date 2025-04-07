#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_631f490 _public_631f490
#define public_631f498 _public_631f498
#define public_631f4b5 _public_631f4b5
#define public_631f4d6 _public_631f4d6
#define public_631f4f6 _public_631f4f6

PROC_DECLARE(0x631f460, internal_631f460, public_631f460);
extern "C" NAKED register_t __cdecl internal_631f460()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        mov ecx, offset public_64018ec
        or edi, 0xFFFFFFFF
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_631f490
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631f490
        lea eax, ss:[esp+0x14]
        jmp public_631f498
        public_631f490 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_631f498 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, ecx
        je public_631f4f6
        add esi, 0x14
        xor eax, eax
        test esi, esi
        jne public_631f4b5
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx], esi
        mov byte ptr ds : [ecx+4], 0
        pop esi
        pop ecx
        ret 
        public_631f4b5 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, ecx
        cmp eax, 0x10
        push ebp
        lea edx, ds:[ebx+4]
        jb public_631f4d6
        mov eax, 0xF
        public_631f4d6 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop ebp
        mov byte ptr ds : [edx+eax], 0
        mov dword ptr ds : [ebx], eax
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_631f4f6 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x631f460)
    }
}

#undef public_631f490
#undef public_631f498
#undef public_631f4b5
#undef public_631f4d6
#undef public_631f4f6
