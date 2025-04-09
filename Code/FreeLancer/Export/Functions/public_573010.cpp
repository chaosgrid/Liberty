#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_573370);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_573053 _public_573053
#define public_573070 _public_573070
#define public_57308a _public_57308a
#define public_5730fd _public_5730fd
#define public_573193 _public_573193
#define public_5731af _public_5731af
#define public_5731d0 _public_5731d0
#define public_5731ea _public_5731ea
#define public_573258 _public_573258
#define public_5732ba _public_5732ba
#define public_5732dd _public_5732dd
#define public_573354 _public_573354

PROC_DECLARE(0x573010, internal_573010, public_573010);
extern "C" NAKED register_t __cdecl internal_573010()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x3004
        push ebx
        push esi
        push edi
        mov esi, ecx
        jne public_573193
        xor ebx, ebx
        push ebx
        call public_5645c0
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 4
        sub eax, 0x3E9
        je public_5730fd
        dec eax
        je public_573053
        xor al, al
        lea esp, ss:[ebp-0x60]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_573053 : nop
        mov ecx, dword ptr ds : [esi+0xE0]
        push 0x29
        lea eax, ss:[ebp-0x54]
        push eax
        call public_57c2c0
        mov eax, dword ptr ss : [ebp-0x54]
        cmp ax, bx
        lea edi, ss:[ebp-0x54]
        je public_57308a
        nop 
        public_573070 : nop
        push eax
        call dword ptr ds : [public_5c7144]
        mov word ptr ds : [edi], ax
        add edi, 2
        xor eax, eax
        mov ax, word ptr ds : [edi]
        add esp, 4
        cmp ax, bx
        jne public_573070
        public_57308a : nop
        lea ecx, ss:[ebp-0x54]
        push ecx
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        inc edi
        mov eax, edi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, esp
        push edi
        lea edx, ss:[ebp-0x54]
        push edx
        push eax
        mov dword ptr ss : [ebp+8], eax
        call dword ptr ds : [public_5c7140]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [public_5c6be0]
        add esp, 0x10
        test al, al
        je public_5732ba
        mov ecx, dword ptr ds : [esi+0xE8]
        mov byte ptr ds : [esi+0xC0], 1
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ds : [esi+0xE4]
        mov byte ptr ds : [edx+0x498], bl
        jmp public_573258
        public_5730fd : nop
        mov eax, dword ptr ds : [esi+0xE8]
        mov byte ptr ds : [esi+0xC0], 1
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xE4]
        mov byte ptr ds : [ecx+0x498], bl
        mov ecx, dword ptr ds : [esi+0xE8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE0]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xEC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        mov ecx, dword ptr ds : [esi+0xE0]
        add esp, 4
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE4]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push ebx
        call public_579890
        jmp public_573354
        public_573193 : nop
        sub eax, 0xF003
        je public_5732dd
        dec eax
        je public_5731af
        xor al, al
        lea esp, ss:[ebp-0x60]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_5731af : nop
        mov ecx, dword ptr ds : [esi+0xE0]
        push 0x29
        lea edx, ss:[ebp-0x54]
        push edx
        call public_57c2c0
        mov eax, dword ptr ss : [ebp-0x54]
        xor ebx, ebx
        cmp ax, bx
        lea edi, ss:[ebp-0x54]
        je public_5731ea
        lea ecx, ds:[ecx]
        public_5731d0 : nop
        push eax
        call dword ptr ds : [public_5c7144]
        mov word ptr ds : [edi], ax
        add edi, 2
        xor eax, eax
        mov ax, word ptr ds : [edi]
        add esp, 4
        cmp ax, bx
        jne public_5731d0
        public_5731ea : nop
        lea eax, ss:[ebp-0x54]
        push eax
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        inc edi
        mov eax, edi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, esp
        push edi
        lea ecx, ss:[ebp-0x54]
        push ecx
        push eax
        mov dword ptr ss : [ebp+8], eax
        call dword ptr ds : [public_5c7140]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [public_5c6be0]
        add esp, 0x10
        test al, al
        je public_5732ba
        mov eax, dword ptr ds : [esi+0xE8]
        mov byte ptr ds : [esi+0xC0], 1
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xE4]
        mov byte ptr ds : [ecx+0x498], bl
        public_573258 : nop
        mov ecx, dword ptr ds : [esi+0xE8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE0]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xEC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        add esp, 4
        push ebx
        mov ecx, esi
        call public_573370
        mov dword ptr ds : [esi+0xC4], 1
        mov al, 1
        lea esp, ss:[ebp-0x60]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_5732ba : nop
        push ebx
        push ebx
        push 0x76A
        call public_473cb0
        add esp, 0xC
        mov dword ptr ds : [esi+0xC4], ebx
        mov al, 1
        lea esp, ss:[ebp-0x60]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_5732dd : nop
        mov edx, dword ptr ds : [esi+0xE8]
        xor ebx, ebx
        mov byte ptr ds : [esi+0xC0], 1
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ds : [esi+0xE4]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xE8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE0]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xEC]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        push 0x1B
        mov byte ptr ds : [ecx+0x6C], dl
        call public_564570
        add esp, 4
        push ebx
        mov ecx, esi
        call public_573370
        public_573354 : nop
        mov dword ptr ds : [esi+0xC4], 0xFFFFFFFF
        mov al, 1
        lea esp, ss:[ebp-0x60]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x573010)
    }
}

#undef public_573053
#undef public_573070
#undef public_57308a
#undef public_5730fd
#undef public_573193
#undef public_5731af
#undef public_5731d0
#undef public_5731ea
#undef public_573258
#undef public_5732ba
#undef public_5732dd
#undef public_573354
