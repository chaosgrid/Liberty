#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6301340);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62ff316 _public_62ff316
#define public_62ff35f _public_62ff35f
#define public_62ff3a6 _public_62ff3a6
#define public_62ff3ed _public_62ff3ed
#define public_62ff410 _public_62ff410
#define public_62ff437 _public_62ff437
#define public_62ff440 _public_62ff440
#define public_62ff455 _public_62ff455
#define public_62ff460 _public_62ff460
#define public_62ff495 _public_62ff495

PROC_DECLARE(0x62ff2f0, internal_62ff2f0, public_62ff2f0);
extern "C" NAKED register_t __cdecl internal_62ff2f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ff316
        push edi
        call public_630d3f0
        add esp, 4
        public_62ff316 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        lea ebp, ds:[esi+4]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62ff35f
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_62ff35f : nop
        mov edi, dword ptr ss : [esp+0x20]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        lea ebx, ds:[esi+0x14]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62ff3a6
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_62ff3a6 : nop
        mov edi, dword ptr ss : [esp+0x24]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        lea ebx, ds:[esi+0x24]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62ff3ed
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_62ff3ed : nop
        mov eax, dword ptr ss : [esp+0x28]
        lea ebx, ds:[esi+0x34]
        cmp ebx, eax
        je public_62ff495
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        cmp edi, esi
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], eax
        je public_62ff455
        mov edi, edi
        public_62ff410 : nop
        cmp ebp, dword ptr ss : [esp+0x1C]
        je public_62ff437
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ss:[ebp+8]
        push eax
        lea ecx, ds:[edi+8]
        call dword ptr ds : [public_63991a8]
        mov edi, dword ptr ds : [edi]
        cmp edi, esi
        mov ebp, dword ptr ss : [ebp]
        jne public_62ff410
        public_62ff437 : nop
        cmp edi, esi
        je public_62ff455
        nop 
        lea esp, ss:[esp]
        public_62ff440 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        call public_62b9d50
        cmp edi, esi
        jne public_62ff440
        public_62ff455 : nop
        cmp ebp, dword ptr ss : [esp+0x1C]
        mov edi, ebp
        je public_62ff495
        lea ecx, ds:[ecx]
        public_62ff460 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, ebx
        call public_6301340
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[edi+8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_62baf00
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_62ff460
        public_62ff495 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x62ff2f0)
    }
}

#undef public_62ff316
#undef public_62ff35f
#undef public_62ff3a6
#undef public_62ff3ed
#undef public_62ff410
#undef public_62ff437
#undef public_62ff440
#undef public_62ff455
#undef public_62ff460
#undef public_62ff495
