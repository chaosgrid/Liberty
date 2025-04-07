#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262a00);
CLANG_FORWARD_PROC_SYMBOL(public_6262a10);
CLANG_FORWARD_PROC_SYMBOL(public_6262a30);
CLANG_FORWARD_PROC_SYMBOL(public_626c0b0);
CLANG_FORWARD_PROC_SYMBOL(public_630f3d0);

#define public_6310287 _public_6310287
#define public_631028f _public_631028f
#define public_631029d _public_631029d
#define public_63102a1 _public_63102a1
#define public_63102d0 _public_63102d0
#define public_63102f9 _public_63102f9
#define public_6310315 _public_6310315
#define public_6310325 _public_6310325
#define public_6310327 _public_6310327
#define public_6310350 _public_6310350
#define public_6310354 _public_6310354
#define public_631035c _public_631035c
#define public_6310363 _public_6310363
#define public_6310382 _public_6310382
#define public_6310386 _public_6310386
#define public_63103a7 _public_63103a7

PROC_DECLARE(0x6310250, internal_6310250, public_6310250);
extern "C" NAKED register_t __cdecl internal_6310250()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x1564]
        xor ebx, ebx
        cmp al, bl
        je public_631028f
        cmp dword ptr ds : [edi+0x1440], ebx
        mov dword ptr ds : [edi+0x1454], ebx
        mov dword ptr ds : [edi+0x145C], ebx
        je public_631029d
        mov eax, dword ptr ds : [edi+0x1444]
        cmp eax, 0xC
        jb public_6310287
        mov eax, 0xC
        public_6310287 : nop
        mov dword ptr ds : [edi+0x1448], eax
        jmp public_631029d
        public_631028f : nop
        cmp dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov byte ptr ds : [edi+0x28], bl
        je public_631029d
        mov dword ptr ds : [edi+0x20], ebx
        public_631029d : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_63102a1 : nop
        cmp byte ptr ds : [edi+0x1564], bl
        je public_631035c
        mov eax, dword ptr ds : [edi+0x1454]
        cmp eax, ebx
        lea esi, ds:[edi+0x1428]
        je public_6310315
        movzx eax, word ptr ds : [eax+2]
        movsx ecx, word ptr ds : [esi+0x30]
        cmp ecx, eax
        jge public_6310315
        lea ebp, ds:[esi+0x34]
        lea esp, ss:[esp]
        public_63102d0 : nop
        push ebp
        mov ecx, esi
        call public_626c0b0
        test al, al
        je public_63102f9
        mov ecx, esi
        call public_6262a00
        mov edx, eax
        mov eax, dword ptr ss : [ebp]
        movzx eax, byte ptr ds : [eax+2]
        lea ecx, ds:[eax+eax*4]
        add edx, ecx
        push edx
        mov ecx, esi
        call public_6262a10
        public_63102f9 : nop
        inc word ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [esi+0x2C]
        mov ax, word ptr ds : [esi+0x30]
        movzx ecx, word ptr ds : [edx+2]
        movsx edx, ax
        cmp edx, ecx
        jl public_63102d0
        mov ebp, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        public_6310315 : nop
        cmp dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x34], ebx
        je public_6310325
        mov eax, dword ptr ds : [esi+0x20]
        jmp public_6310327
        public_6310325 : nop
        xor eax, eax
        public_6310327 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        cmp eax, dword ptr ds : [ecx+8]
        jae public_6310350
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 4
        call public_6262a30
        mov dword ptr ds : [esi+0x2C], eax
        cmp dword ptr ss : [esp+0x10], 4
        je public_6310354
        mov dword ptr ds : [esi+0x2C], ebx
        public_6310350 : nop
        xor al, al
        jmp public_6310363
        public_6310354 : nop
        mov word ptr ds : [esi+0x30], bx
        mov al, 1
        jmp public_6310363
        public_631035c : nop
        mov ecx, edi
        call public_630f3d0
        public_6310363 : nop
        cmp al, bl
        je public_63103a7
        cmp byte ptr ds : [edi+0x1564], bl
        push ebp
        je public_6310382
        mov eax, dword ptr ds : [edi+0x1454]
        movzx ecx, word ptr ds : [eax]
        add ecx, dword ptr ds : [edi+0x1450]
        push ecx
        jmp public_6310386
        public_6310382 : nop
        lea edx, ds:[edi+0x28]
        push edx
        public_6310386 : nop
        call dword ptr ds : [public_639902c]
        add esp, 8
        neg eax
        sbb al, al
        inc al
        cmp al, bl
        je public_63102a1
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_63103a7 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6310250)
    }
}

#undef public_6310287
#undef public_631028f
#undef public_631029d
#undef public_63102a1
#undef public_63102d0
#undef public_63102f9
#undef public_6310315
#undef public_6310325
#undef public_6310327
#undef public_6310350
#undef public_6310354
#undef public_631035c
#undef public_6310363
#undef public_6310382
#undef public_6310386
#undef public_63103a7
