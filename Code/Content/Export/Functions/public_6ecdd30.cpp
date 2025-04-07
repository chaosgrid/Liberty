#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ecdd55 _public_6ecdd55
#define public_6ecdd70 _public_6ecdd70
#define public_6ecdd8a _public_6ecdd8a
#define public_6ecde6a _public_6ecde6a
#define public_6ecde88 _public_6ecde88

PROC_DECLARE(0x6ecdd30, internal_6ecdd30, public_6ecdd30);
extern "C" NAKED register_t __cdecl internal_6ecdd30()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push esi
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ecdd55
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], al
        jmp public_6ecdd8a
        public_6ecdd55 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x10]
        jb public_6ecdd70
        mov eax, 0x2F
        public_6ecdd70 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x10], 0
        mov dword ptr ds : [ebx+0xC], eax
        public_6ecdd8a : nop
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x50]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ebx+0x6C], ecx
        fstp dword ptr ds : [ebx+0x64]
        push 4
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x68], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecde88
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x50]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fld st(0)
        fmul st, st(1)
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld st(0)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        jne public_6ecde6a
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ecde6a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        lea edi, ds:[ebx+0x40]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        public_6ecde88 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6ecdd30)
    }
}

#undef public_6ecdd55
#undef public_6ecdd70
#undef public_6ecdd8a
#undef public_6ecde6a
#undef public_6ecde88
