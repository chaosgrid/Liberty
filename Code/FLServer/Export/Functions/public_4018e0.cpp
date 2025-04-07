#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4018e0);

#define public_401901 _public_401901
#define public_401920 _public_401920
#define public_401956 _public_401956
#define public_401993 _public_401993
#define public_4019f2 _public_4019f2
#define public_401a00 _public_401a00

PROC_DECLARE(0x4018e0, internal_4018e0, public_4018e0);
extern "C" NAKED register_t __cdecl internal_4018e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10C
        push ebx
        push ebp
        mov ebx, ecx
        cmp byte ptr ds : [eax], 0
        push esi
        push edi
        jne public_401956
        lea ecx, ds:[ebx+0x40F]
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], ecx
        public_401901 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [eax+0x40F], cl
        inc eax
        test cl, cl
        jne public_401901
        mov ecx, dword ptr ds : [public_425420]
        lea ebp, ds:[ebx+0x513]
        mov edx, ebp
        lea esp, ss:[esp]
        public_401920 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_401920
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, ebp
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp public_4019f2
        public_401956 : nop
        push 0
        push 0
        lea ebp, ds:[ebx+0x30C]
        push ebp
        lea esi, ds:[ebx+0x40C]
        push esi
        push eax
        call dword ptr ds : [public_41b95c]
        push 0
        push ebx
        push ebp
        lea eax, ds:[ebx+0x40F]
        push esi
        push eax
        mov dword ptr ss : [esp+0x38], eax
        call dword ptr ds : [public_41b958]
        mov eax, dword ptr ds : [public_425420]
        lea esi, ss:[esp+0x40]
        add esp, 0x28
        sub esi, eax
        public_401993 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi+eax], cl
        inc eax
        test cl, cl
        jne public_401993
        xor eax, eax
        mov edi, ebx
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov dword ptr ss : [esp+0x14], eax
        xor eax, eax
        lea edx, ss:[esp+0x18]
        mov edi, edx
        mov edx, dword ptr ss : [esp+0x14]
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edx
        and ecx, 3
        push ebp
        lea eax, ds:[ebx+0x40C]
        rep movsb
        push eax
        lea ecx, ds:[ebx+0x513]
        push ecx
        call dword ptr ds : [public_41b958]
        add esp, 0x14
        public_4019f2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        sub ebx, eax
        add ebx, 0x89C
        mov edi, edi
        public_401a00 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [ebx+eax], cl
        inc eax
        test cl, cl
        jne public_401a00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10C
        ret 4
        UNREACHABLE_TRAP(0x4018e0)
    }
}

#undef public_401901
#undef public_401920
#undef public_401956
#undef public_401993
#undef public_4019f2
#undef public_401a00
