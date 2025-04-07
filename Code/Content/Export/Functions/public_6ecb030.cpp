#include "Content-PCH.h"


#define public_6ecb051 _public_6ecb051
#define public_6ecb06d _public_6ecb06d
#define public_6ecb088 _public_6ecb088
#define public_6ecb0ae _public_6ecb0ae
#define public_6ecb0c9 _public_6ecb0c9

PROC_DECLARE(0x6ecb030, internal_6ecb030, public_6ecb030);
extern "C" NAKED register_t __cdecl internal_6ecb030()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ecb051
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ecb088
        public_6ecb051 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ecb06d
        mov eax, 0x2F
        public_6ecb06d : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x10], 0
        mov dword ptr ss : [ebp+0xC], eax
        pop edi
        public_6ecb088 : nop
        mov esi, dword ptr ds : [public_6fb3040]
        push 1
        mov ecx, ebx
        call esi
        push 2
        mov ecx, ebx
        mov byte ptr ss : [ebp+0x40], al
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb0ae
        push 2
        mov ecx, ebx
        call esi
        mov byte ptr ss : [ebp+0x41], al
        public_6ecb0ae : nop
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb0c9
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x44]
        public_6ecb0c9 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecb030)
    }
}

#undef public_6ecb051
#undef public_6ecb06d
#undef public_6ecb088
#undef public_6ecb0ae
#undef public_6ecb0c9
