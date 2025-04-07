#include "Content-PCH.h"


#define public_6ec3048 _public_6ec3048
#define public_6ec3063 _public_6ec3063
#define public_6ec3080 _public_6ec3080
#define public_6ec309b _public_6ec309b

PROC_DECLARE(0x6ec3010, internal_6ec3010, public_6ec3010);
extern "C" NAKED register_t __cdecl internal_6ec3010()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call esi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, edi
        mov dword ptr ss : [ebp+0xC], eax
        call esi
        mov esi, eax
        cmp esi, ebx
        jne public_6ec3048
        mov dword ptr ss : [ebp+0x10], ebx
        mov byte ptr ss : [ebp+0x14], bl
        jmp public_6ec3080
        public_6ec3048 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x14]
        jb public_6ec3063
        mov eax, 0x2F
        public_6ec3063 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x10], eax
        public_6ec3080 : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec309b
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [ebp+0x48], eax
        public_6ec309b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec3010)
    }
}

#undef public_6ec3048
#undef public_6ec3063
#undef public_6ec3080
#undef public_6ec309b
