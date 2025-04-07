#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f550);
CLANG_FORWARD_PROC_SYMBOL(public_6622db0);
CLANG_FORWARD_PROC_SYMBOL(public_6623140);
CLANG_FORWARD_PROC_SYMBOL(public_6623a90);
CLANG_FORWARD_PROC_SYMBOL(public_6624590);
CLANG_FORWARD_PROC_SYMBOL(public_66276b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661f58f _public_661f58f
#define public_661f5d4 _public_661f5d4
#define public_661f5e5 _public_661f5e5
#define public_661f5f1 _public_661f5f1
#define public_661f637 _public_661f637
#define public_661f64e _public_661f64e
#define public_661f65b _public_661f65b
#define public_661f680 _public_661f680

PROC_DECLARE(0x661f550, internal_661f550, public_661f550);
extern "C" NAKED register_t __cdecl internal_661f550()
{
    __asm
    {
        sub esp, 0x10
        lea eax, ss:[esp+2]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor edi, edi
        lea ecx, ss:[esp+0x13]
        push eax
        mov dword ptr ss : [ebp+4], edi
        mov ebx, dword ptr ds : [public_662b1a0]
        inc ebx
        push ecx
        lea ecx, ss:[ebp+0x10]
        mov dword ptr ds : [public_662b1a0], ebx
        call public_6623140
        mov eax, dword ptr ds : [public_662b1a0]
        dec eax
        mov dword ptr ds : [public_662b1a0], eax
        jne public_661f58f
        call public_6623a90
        public_661f58f : nop
        mov dword ptr ss : [ebp+0x24], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov byte ptr ss : [ebp+0x2C], 0
        mov edx, dword ptr ds : [public_662b190]
        lea ecx, ss:[ebp+0x30]
        add edx, 2
        mov dword ptr ds : [public_662b190], edx
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], 0
        call public_6624590
        mov eax, dword ptr ds : [public_662b190]
        dec eax
        mov dword ptr ds : [public_662b190], eax
        jne public_661f5f1
        mov eax, dword ptr ds : [public_662b18c]
        cmp eax, edi
        je public_661f5e5
        public_661f5d4 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_66281d0
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_661f5d4
        public_661f5e5 : nop
        mov dword ptr ds : [public_662b18c], edi
        mov dword ptr ds : [public_662b198], edi
        public_661f5f1 : nop
        mov al, byte ptr ss : [esp+0x13]
        lea esi, ss:[ebp+0x48]
        push 0x3C
        mov byte ptr ds : [esi], al
        call public_66281dc
        mov cl, byte ptr ss : [esp+0x17]
        lea ebx, ss:[ebp+0x54]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        push 0x3C
        mov byte ptr ds : [ebx], cl
        call public_66281dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_661f64e
        public_661f637 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        lea edx, ss:[esp+0x18]
        push eax
        push edx
        mov ecx, esi
        call public_6622db0
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_661f637
        public_661f64e : nop
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_661f680
        public_661f65b : nop
        lea eax, ss:[esp+0x18]
        push 0
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_66276b0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, ebx
        call public_6622db0
        cmp dword ptr ss : [esp+0x14], esi
        jne public_661f65b
        public_661f680 : nop
        pop edi
        mov byte ptr ss : [ebp+0x44], 0
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x661f550)
    }
}

#undef public_661f58f
#undef public_661f5d4
#undef public_661f5e5
#undef public_661f5f1
#undef public_661f637
#undef public_661f64e
#undef public_661f65b
#undef public_661f680
