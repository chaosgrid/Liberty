#include "Content-PCH.h"


#define public_6ec93f3 _public_6ec93f3
#define public_6ec940e _public_6ec940e
#define public_6ec942b _public_6ec942b

PROC_DECLARE(0x6ec93d0, internal_6ec93d0, public_6ec93d0);
extern "C" NAKED register_t __cdecl internal_6ec93d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec93f3
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec942b
        public_6ec93f3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec940e
        mov eax, 0x2F
        public_6ec940e : nop
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
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec942b : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x40]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x44]
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x48]
        push 4
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x4C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec93d0)
    }
}

#undef public_6ec93f3
#undef public_6ec940e
#undef public_6ec942b
