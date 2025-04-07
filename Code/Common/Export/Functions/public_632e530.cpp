#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_632e548 _public_632e548
#define public_632e55f _public_632e55f
#define public_632e570 _public_632e570
#define public_632e5f0 _public_632e5f0
#define public_632e61b _public_632e61b
#define public_632e640 _public_632e640
#define public_632e66e _public_632e66e

PROC_DECLARE(0x632e530, internal_632e530, public_632e530);
extern "C" NAKED register_t __cdecl internal_632e530()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x118]
        push edi
        xor edi, edi
        test eax, eax
        jle public_632e55f
        lea ebx, ds:[esi+0x98]
        public_632e548 : nop
        push ebx
        call public_6334430
        mov eax, dword ptr ds : [esi+0x118]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_632e548
        public_632e55f : nop
        lea edi, ds:[esi+0x11C]
        mov ebx, 0x20
        lea ebx, ds:[ebx]
        public_632e570 : nop
        push edi
        call public_6334430
        add esp, 4
        add edi, 4
        dec ebx
        jne public_632e570
        lea ecx, ds:[esi+0x22C]
        call public_630e270
        lea ecx, ds:[esi+0x244]
        call public_630e270
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+4], eax
        mov cl, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+8], cl
        mov dl, byte ptr ds : [edi+5]
        mov byte ptr ds : [esi+9], dl
        mov al, byte ptr ds : [edi+6]
        mov byte ptr ds : [esi+0xA], al
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0x10], edx
        mov al, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [esi+0x14], al
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ss : [esp+0x14], 0
        jle public_632e61b
        lea ebp, ds:[esi+0x98]
        lea ebx, ds:[edi+0x94]
        lea esp, ss:[esp]
        public_632e5f0 : nop
        mov ecx, dword ptr ds : [ebx-0x80]
        mov dword ptr ss : [ebp-0x80], ecx
        mov edx, dword ptr ds : [ebx]
        push edx
        push ebp
        call public_6334400
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x118]
        add esp, 8
        inc eax
        add ebx, 4
        add ebp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_632e5f0
        public_632e61b : nop
        mov eax, dword ptr ds : [edi+0x218]
        test eax, eax
        mov dword ptr ds : [esi+0x21C], eax
        mov dword ptr ss : [esp+0x14], 0
        jle public_632e66e
        lea ebp, ds:[esi+0x19C]
        lea ebx, ds:[edi+0x198]
        nop 
        public_632e640 : nop
        mov eax, dword ptr ds : [ebx-0x80]
        push eax
        lea ecx, ss:[ebp-0x80]
        push ecx
        call public_6334400
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ss : [ebp], edx
        mov ecx, dword ptr ds : [esi+0x21C]
        inc eax
        add ebx, 4
        add ebp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_632e640
        public_632e66e : nop
        mov eax, dword ptr ds : [edi+0x21C]
        mov dword ptr ds : [esi+0x220], eax
        mov ecx, dword ptr ds : [edi+0x220]
        mov dword ptr ds : [esi+0x224], ecx
        mov edx, dword ptr ds : [edi+0x224]
        lea eax, ds:[edi+0x228]
        push eax
        lea ecx, ds:[esi+0x22C]
        mov dword ptr ds : [esi+0x228], edx
        call public_630dda0
        lea ecx, ds:[edi+0x240]
        push ecx
        lea ecx, ds:[esi+0x244]
        call public_630dda0
        mov edx, dword ptr ds : [edi+0x258]
        pop edi
        mov dword ptr ds : [esi+0x25C], edx
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632e530)
    }
}

#undef public_632e548
#undef public_632e55f
#undef public_632e570
#undef public_632e5f0
#undef public_632e61b
#undef public_632e640
#undef public_632e66e
