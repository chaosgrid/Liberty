#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611190);
CLANG_FORWARD_PROC_SYMBOL(public_6612320);
CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);

#define public_661235b _public_661235b
#define public_6612381 _public_6612381
#define public_6612427 _public_6612427
#define public_661243e _public_661243e
#define public_6612455 _public_6612455
#define public_6612481 _public_6612481
#define public_6612489 _public_6612489
#define public_66124b9 _public_66124b9
#define public_66124ca _public_66124ca

PROC_DECLARE(0x6612320, internal_6612320, public_6612320);
extern "C" NAKED register_t __cdecl internal_6612320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x18]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        xor bl, bl
        mov byte ptr ds : [eax], bl
        mov eax, dword ptr ss : [esp+0x28]
        cmp edi, 0xFFFFFFFF
        jne public_661235b
        test eax, eax
        jne public_661235b
        mov edx, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        pop edi
        pop esi
        mov dword ptr ds : [edx], ecx
        mov al, bl
        pop ebp
        pop ebx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [edx+0xC], ecx
        add esp, 8
        ret 
        public_661235b : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_6612427
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6612381
        mov eax, offset public_662ace4
        public_6612381 : nop
        push eax
        push edi
        call public_6611190
        add esp, 8
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_66124ca
        lea edx, ss:[esp+0x1C]
        lea eax, ss:[esp+0x20]
        push edx
        push eax
        mov ecx, offset public_662acc4
        call public_6612e70
        mov eax, dword ptr ds : [public_662acc8]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x30]
        cmp edx, eax
        setne al
        test al, al
        mov byte ptr ds : [ecx], al
        jne public_66124ca
        mov eax, dword ptr ds : [public_662acec]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xD4]
        cmp eax, 0xFFFFFFFF
        je public_66124ca
        mov ecx, dword ptr ds : [public_662acec]
        push eax
        lea eax, ss:[esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax+4]
        cmp ecx, edx
        sete bl
        test bl, bl
        je public_66124ca
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+4], eax
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6612427 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_66124b9
        mov ebp, dword ptr ss : [ebp+0xC]
        test ebp, ebp
        jne public_661243e
        mov ebp, offset public_662ace4
        public_661243e : nop
        push ebp
        push edi
        call public_6611190
        add esp, 8
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6612455
        mov dword ptr ss : [esp+0x1C], edi
        public_6612455 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_662acc4
        call public_6627a70
        mov ecx, dword ptr ds : [public_662acc8]
        mov edx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_6612481
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6612481
        lea eax, ss:[esp+0x20]
        jmp public_6612489
        public_6612481 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        public_6612489 : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, ecx
        mov ecx, dword ptr ss : [esp+0x30]
        setne al
        test al, al
        sete bl
        test bl, bl
        mov byte ptr ds : [ecx], al
        je public_66124ca
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi], 1
        mov dword ptr ds : [esi+4], edx
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_66124b9 : nop
        test eax, eax
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi], 2
        setne bl
        mov dword ptr ds : [esi+4], eax
        public_66124ca : nop
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6612320)
    }
}

#undef public_661235b
#undef public_6612381
#undef public_6612427
#undef public_661243e
#undef public_6612455
#undef public_6612481
#undef public_6612489
#undef public_66124b9
#undef public_66124ca
