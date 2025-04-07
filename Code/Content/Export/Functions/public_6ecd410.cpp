#include "Content-PCH.h"


#define public_6ecd430 _public_6ecd430
#define public_6ecd44b _public_6ecd44b
#define public_6ecd464 _public_6ecd464
#define public_6ecd480 _public_6ecd480
#define public_6ecd495 _public_6ecd495
#define public_6ecd4a7 _public_6ecd4a7

PROC_DECLARE(0x6ecd410, internal_6ecd410, public_6ecd410);
extern "C" NAKED register_t __cdecl internal_6ecd410()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ecd430
        mov dword ptr ss : [ebp+0x10], eax
        mov byte ptr ss : [ebp+0x14], al
        jmp public_6ecd464
        public_6ecd430 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x14]
        jb public_6ecd44b
        mov eax, 0x2F
        public_6ecd44b : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x10], eax
        public_6ecd464 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 1
        call dword ptr ds : [public_6fb3048]
        mov ebx, eax
        mov esi, offset public_6fce300
        xor edi, edi
        lea esp, ss:[esp]
        public_6ecd480 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ecd495
        push eax
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ecd4a7
        public_6ecd495 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x50
        jb public_6ecd480
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6ecd4a7 : nop
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecd410)
    }
}

#undef public_6ecd430
#undef public_6ecd44b
#undef public_6ecd464
#undef public_6ecd480
#undef public_6ecd495
#undef public_6ecd4a7
