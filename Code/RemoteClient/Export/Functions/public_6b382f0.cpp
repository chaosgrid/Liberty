#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b382f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a820);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38365 _public_6b38365
#define public_6b38378 _public_6b38378
#define public_6b383b6 _public_6b383b6
#define public_6b383b8 _public_6b383b8
#define public_6b383e3 _public_6b383e3
#define public_6b38437 _public_6b38437
#define public_6b38441 _public_6b38441
#define public_6b38461 _public_6b38461
#define public_6b38484 _public_6b38484
#define public_6b384a0 _public_6b384a0
#define public_6b384a6 _public_6b384a6
#define public_6b384c6 _public_6b384c6
#define public_6b384d0 _public_6b384d0
#define public_6b384ec _public_6b384ec
#define public_6b38520 _public_6b38520
#define public_6b3854c _public_6b3854c
#define public_6b3856e _public_6b3856e

PROC_DECLARE(0x6b382f0, internal_6b382f0, public_6b382f0);
extern "C" NAKED register_t __cdecl internal_6b382f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x20], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ds : [edi+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x68]
        mov dword ptr ds : [edi+0x68], edx
        mov eax, dword ptr ds : [ebx+0x6C]
        mov dword ptr ds : [edi+0x6C], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [edi+0x30], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [edi+0x34], edx
        mov eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [edi+0x38], eax
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [edi+0x3C], ecx
        mov edx, dword ptr ds : [ebx+0x44]
        mov dword ptr ds : [edi+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        shl eax, 2
        push eax
        call public_6b6a134
        mov dword ptr ds : [edi+0x44], eax
        mov ecx, dword ptr ds : [ebx+0x44]
        xor ebp, ebp
        add esp, 4
        xor eax, eax
        cmp ecx, ebp
        jle public_6b38378
        lea ecx, ds:[ebx+0x24]
        public_6b38365 : nop
        mov edx, dword ptr ds : [edi+0x44]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+eax*4], esi
        mov edx, dword ptr ds : [ebx+0x44]
        inc eax
        add ecx, 4
        cmp eax, edx
        jl public_6b38365
        public_6b38378 : nop
        mov eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ds : [edi+0x4C], eax
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [edi+0x50], ecx
        mov edx, dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [edi+0x54], edx
        mov eax, dword ptr ds : [ebx+0x58]
        mov dword ptr ds : [edi+0x58], eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ds : [edi+0x5C], ecx
        mov edx, dword ptr ds : [ebx+0x60]
        mov dword ptr ds : [edi+0x60], edx
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [edi+0x64], eax
        mov eax, dword ptr ds : [ebx+0x78]
        mov esi, dword ptr ds : [ebx+0x74]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6b38461
        jmp public_6b383b8
        public_6b383b6 : nop
        xor ebp, ebp
        public_6b383b8 : nop
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebp
        je public_6b383e3
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ebp
        mov word ptr ds : [eax+0xC], bp
        mov word ptr ds : [eax+0x10], bp
        mov dword ptr ds : [eax+0x14], ebp
        mov byte ptr ds : [eax+0xE], 0
        mov byte ptr ds : [eax+0xF], 0
        mov ebp, eax
        public_6b383e3 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [ebp+4], edx
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [ebp+8]
        mov ax, word ptr ds : [esi+2]
        mov word ptr ss : [ebp+0xC], ax
        mov cl, byte ptr ds : [esi+0xC]
        mov byte ptr ss : [ebp+0xE], cl
        mov ecx, esi
        call dword ptr ds : [public_6b6b08c]
        test al, al
        jne public_6b38441
        mov edi, dword ptr ds : [esi+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        mov eax, ecx
        xor edx, edx
        mov dx, ax
        mov word ptr ss : [ebp+0x10], ax
        push edx
        call public_6b6a134
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        mov edx, eax
        public_6b38437 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6b38437
        public_6b38441 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        lea ecx, ds:[eax+0x70]
        call public_6b3a820
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x20
        cmp esi, eax
        jne public_6b383b6
        mov edi, dword ptr ss : [esp+0x1C]
        public_6b38461 : nop
        lea ecx, ds:[ebx+0x80]
        lea eax, ds:[edi+0x74]
        cmp eax, ecx
        je public_6b384ec
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6b384a0
        public_6b38484 : nop
        cmp ecx, edx
        je public_6b384a0
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6b38484
        public_6b384a0 : nop
        cmp eax, esi
        mov ebp, eax
        je public_6b384c6
        public_6b384a6 : nop
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[edi+0x74]
        call dword ptr ds : [public_6b6b048]
        cmp ebp, esi
        jne public_6b384a6
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6b384c6 : nop
        cmp ecx, edx
        mov ebp, ecx
        je public_6b384ec
        lea esp, ss:[esp]
        public_6b384d0 : nop
        lea eax, ss:[ebp+8]
        push eax
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[edi+0x74]
        call dword ptr ds : [public_6b6b034]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x18]
        jne public_6b384d0
        public_6b384ec : nop
        add ebx, 0x8C
        lea ebp, ds:[edi+0x80]
        cmp ebp, ebx
        je public_6b3856e
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6b6b038]
        cmp esi, edi
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x18], eax
        je public_6b3854c
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[ecx]
        public_6b38520 : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_6b3854c
        add eax, 8
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6b38520
        public_6b3854c : nop
        push edi
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b080]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6b6b04c]
        public_6b3856e : nop
        mov dl, byte ptr ds : [ebx+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        pop edi
        mov dword ptr ss : [ebp+0x14], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        pop esi
        mov dword ptr ss : [ebp+0x18], edx
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b382f0)
    }
}

#undef public_6b38365
#undef public_6b38378
#undef public_6b383b6
#undef public_6b383b8
#undef public_6b383e3
#undef public_6b38437
#undef public_6b38441
#undef public_6b38461
#undef public_6b38484
#undef public_6b384a0
#undef public_6b384a6
#undef public_6b384c6
#undef public_6b384d0
#undef public_6b384ec
#undef public_6b38520
#undef public_6b3854c
#undef public_6b3856e
