#include "Common-PCH.h"


#define public_630b550 _public_630b550
#define public_630b55c _public_630b55c
#define public_630b55f _public_630b55f
#define public_630b578 _public_630b578
#define public_630b597 _public_630b597
#define public_630b59e _public_630b59e
#define public_630b5a0 _public_630b5a0
#define public_630b5cd _public_630b5cd
#define public_630b629 _public_630b629
#define public_630b64f _public_630b64f
#define public_630b651 _public_630b651
#define public_630b65f _public_630b65f
#define public_630b674 _public_630b674

PROC_DECLARE(0x630b540, internal_630b540, public_630b540);
extern "C" NAKED register_t __cdecl internal_630b540()
{
    __asm
    {
        sub esp, 0x300
        push ebp
        push esi
        push edi
        mov byte ptr ss : [esp+0xC], 0
        xor ebp, ebp
        public_630b550 : nop
        test ebp, ebp
        jne public_630b55c
        mov ebp, dword ptr ds : [public_63fcf28]
        jmp public_630b55f
        public_630b55c : nop
        mov ebp, dword ptr ss : [ebp]
        public_630b55f : nop
        test ebp, ebp
        je public_630b674
        mov eax, dword ptr ss : [esp+0x310]
        cmp eax, 0xFFFFFFFF
        je public_630b578
        cmp dword ptr ss : [ebp+8], eax
        jne public_630b550
        public_630b578 : nop
        mov al, byte ptr ss : [ebp+4]
        test al, al
        je public_630b59e
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        jne public_630b597
        mov al, byte ptr ss : [ebp+0x12]
        test al, al
        jne public_630b597
        mov eax, dword ptr ss : [ebp+0x94]
        test eax, eax
        je public_630b59e
        public_630b597 : nop
        mov eax, 1
        jmp public_630b5a0
        public_630b59e : nop
        xor eax, eax
        public_630b5a0 : nop
        test al, al
        mov byte ptr ss : [ebp+0x10], al
        je public_630b550
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        jne public_630b5cd
        mov ecx, dword ptr ss : [esp+0x314]
        lea eax, ss:[esp+0x318]
        push eax
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_63991f4]
        add esp, 0xC
        public_630b5cd : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0xC]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        test eax, eax
        lea edx, ss:[esp+0xC]
        jle public_630b629
        cmp byte ptr ss : [esp+eax+0xB], 0xA
        je public_630b629
        lea ecx, ds:[eax+1]
        cmp ecx, 0x200
        jae public_630b629
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0xC]
        lea edi, ss:[esp+0x10C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x10C], 0xA
        mov byte ptr ss : [esp+eax+0x10D], 0
        lea edx, ss:[esp+0x10C]
        public_630b629 : nop
        mov eax, dword ptr ss : [ebp+0x94]
        test eax, eax
        je public_630b550
        mov esi, eax
        test esi, esi
        je public_630b65f
        test edx, edx
        je public_630b64f
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        jmp public_630b651
        public_630b64f : nop
        xor ecx, ecx
        public_630b651 : nop
        push esi
        push ecx
        push 1
        push edx
        call dword ptr ds : [public_6399240]
        add esp, 0x10
        public_630b65f : nop
        mov eax, dword ptr ss : [ebp+0x94]
        push eax
        call dword ptr ds : [public_63992dc]
        add esp, 4
        jmp public_630b550
        public_630b674 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x300
        ret 
        UNREACHABLE_TRAP(0x630b540)
    }
}

#undef public_630b550
#undef public_630b55c
#undef public_630b55f
#undef public_630b578
#undef public_630b597
#undef public_630b59e
#undef public_630b5a0
#undef public_630b5cd
#undef public_630b629
#undef public_630b64f
#undef public_630b651
#undef public_630b65f
#undef public_630b674
