#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_632e390 _public_632e390
#define public_632e3a7 _public_632e3a7
#define public_632e3b2 _public_632e3b2
#define public_632e434 _public_632e434
#define public_632e438 _public_632e438
#define public_632e469 _public_632e469
#define public_632e497 _public_632e497
#define public_632e4a0 _public_632e4a0
#define public_632e4cf _public_632e4cf

PROC_DECLARE(0x632e370, internal_632e370, public_632e370);
extern "C" NAKED register_t __cdecl internal_632e370()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x118]
        push edi
        xor edi, edi
        test eax, eax
        jle public_632e3a7
        lea ebx, ds:[esi+0x98]
        lea esp, ss:[esp]
        public_632e390 : nop
        push ebx
        call public_6334430
        mov eax, dword ptr ds : [esi+0x118]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_632e390
        public_632e3a7 : nop
        lea edi, ds:[esi+0x11C]
        mov ebx, 0x20
        public_632e3b2 : nop
        push edi
        call public_6334430
        add esp, 4
        add edi, 4
        dec ebx
        jne public_632e3b2
        lea ecx, ds:[esi+0x22C]
        call public_630e270
        lea ecx, ds:[esi+0x244]
        call public_630e270
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], dl
        mov al, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+9], al
        mov cl, byte ptr ds : [edi+0xA]
        mov byte ptr ds : [esi+0xA], cl
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov cl, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [esi+0x14], cl
        mov eax, dword ptr ds : [edi+0x118]
        test eax, eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ss : [esp+0x18], 0
        jle public_632e469
        mov eax, edi
        sub eax, esi
        lea ebp, ds:[edi+0x98]
        lea ebx, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_632e438
        public_632e434 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_632e438 : nop
        mov edx, dword ptr ds : [eax+ebx]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ss : [ebp]
        push eax
        lea ecx, ds:[ebx+0x80]
        push ecx
        call public_6334400
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x118]
        add esp, 8
        inc eax
        add ebx, 4
        add ebp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_632e434
        public_632e469 : nop
        mov eax, dword ptr ds : [edi+0x21C]
        test eax, eax
        mov dword ptr ds : [esi+0x21C], eax
        mov dword ptr ss : [esp+0x18], 0
        jle public_632e4cf
        mov eax, edi
        sub eax, esi
        lea ebp, ds:[edi+0x19C]
        lea ebx, ds:[esi+0x11C]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_632e4a0
        public_632e497 : nop
        mov eax, dword ptr ss : [esp+0x10]
        nop 
        lea esp, ss:[esp]
        public_632e4a0 : nop
        mov edx, dword ptr ds : [ebx+eax]
        push edx
        push ebx
        call public_6334400
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx+0x80], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x21C]
        add esp, 8
        inc eax
        add ebx, 4
        add ebp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_632e497
        public_632e4cf : nop
        mov ecx, dword ptr ds : [edi+0x220]
        mov dword ptr ds : [esi+0x220], ecx
        mov edx, dword ptr ds : [edi+0x224]
        lea ecx, ds:[edi+0x22C]
        mov dword ptr ds : [esi+0x224], edx
        mov eax, dword ptr ds : [edi+0x228]
        push ecx
        lea ecx, ds:[esi+0x22C]
        mov dword ptr ds : [esi+0x228], eax
        call public_630dda0
        lea edx, ds:[edi+0x244]
        push edx
        lea ecx, ds:[esi+0x244]
        call public_630dda0
        mov eax, dword ptr ds : [edi+0x25C]
        pop edi
        mov dword ptr ds : [esi+0x25C], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x632e370)
    }
}

#undef public_632e390
#undef public_632e3a7
#undef public_632e3b2
#undef public_632e434
#undef public_632e438
#undef public_632e469
#undef public_632e497
#undef public_632e4a0
#undef public_632e4cf
