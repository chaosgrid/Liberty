#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd52a0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd59e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc840);

#define public_6bd52f1 _public_6bd52f1
#define public_6bd5304 _public_6bd5304
#define public_6bd537d _public_6bd537d
#define public_6bd5381 _public_6bd5381
#define public_6bd540d _public_6bd540d
#define public_6bd5415 _public_6bd5415
#define public_6bd542c _public_6bd542c
#define public_6bd5455 _public_6bd5455
#define public_6bd5460 _public_6bd5460
#define public_6bd547c _public_6bd547c
#define public_6bd5484 _public_6bd5484
#define public_6bd5488 _public_6bd5488
#define public_6bd54a8 _public_6bd54a8
#define public_6bd54b2 _public_6bd54b2
#define public_6bd54f4 _public_6bd54f4
#define public_6bd5520 _public_6bd5520
#define public_6bd5545 _public_6bd5545
#define public_6bd5550 _public_6bd5550
#define public_6bd5566 _public_6bd5566
#define public_6bd5579 _public_6bd5579

PROC_DECLARE(0x6bd52a0, internal_6bd52a0, public_6bd52a0);
extern "C" NAKED register_t __cdecl internal_6bd52a0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x20], edx
        mov eax, dword ptr ss : [ebp+0x38]
        push esi
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x40]
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ds : [ebx+0x44], eax
        jle public_6bd5304
        mov ecx, dword ptr ss : [ebp+0x40]
        xor eax, eax
        cmp ecx, esi
        jbe public_6bd5304
        lea ecx, ds:[ebx+0x24]
        public_6bd52f1 : nop
        mov edx, dword ptr ss : [ebp+0x44]
        mov edx, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [ebp+0x40]
        inc eax
        add ecx, 4
        cmp eax, edx
        jb public_6bd52f1
        public_6bd5304 : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], ecx
        mov edx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], eax
        fld dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp+0x4C]
        fstp dword ptr ds : [ebx+0x4C]
        fstp dword ptr ds : [ebx+0x50]
        fstp dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [ebx+0x58], 0x3F800000
        mov dword ptr ds : [ebx+0x64], esi
        mov dword ptr ds : [ebx+0x60], esi
        mov dword ptr ds : [ebx+0x5C], esi
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], edx
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x60], eax
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], ecx
        lea ecx, ss:[ebp+0x70]
        call public_6bdc840
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6bd542c
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], eax
        je public_6bd542c
        jmp public_6bd5381
        public_6bd537d : nop
        mov eax, dword ptr ss : [esp+0x3C]
        public_6bd5381 : nop
        mov edi, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6c0b0b4]
        mov edx, dword ptr ds : [ebx+0x78]
        push eax
        lea ecx, ds:[ebx+0x70]
        push 1
        push edx
        call dword ptr ds : [public_6c0b0e8]
        mov esi, dword ptr ds : [ebx+0x78]
        mov eax, dword ptr ds : [edi]
        sub esi, 0x20
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6c0b0b0]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6c0b0a8]
        xor edx, edx
        mov dx, word ptr ds : [edi+0xC]
        mov ecx, esi
        push edx
        call dword ptr ds : [public_6c0b0ac]
        xor eax, eax
        mov al, byte ptr ds : [edi+0xE]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6c0b0a0]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6c0b0a4]
        cmp word ptr ds : [edi+0x10], 0
        jbe public_6bd540d
        mov edi, dword ptr ds : [edi+0x14]
        push 0
        push edi
        call dword ptr ds : [public_6c0b09c]
        add esp, 8
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], eax
        call dword ptr ds : [public_6c0b098]
        jmp public_6bd5415
        public_6bd540d : nop
        mov ecx, esi
        call dword ptr ds : [public_6c0b094]
        public_6bd5415 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6bd537d
        public_6bd542c : nop
        lea ecx, ss:[ebp+0x74]
        lea edi, ds:[ebx+0x80]
        cmp edi, ecx
        je public_6bd54f4
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x3C], ecx
        je public_6bd547c
        jmp public_6bd5460
        public_6bd5455 : nop
        mov edx, dword ptr ss : [esp+0x40]
        lea esp, ss:[esp]
        public_6bd5460 : nop
        cmp ecx, edx
        je public_6bd547c
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x3C], ecx
        jne public_6bd5455
        public_6bd547c : nop
        cmp eax, esi
        mov edx, eax
        je public_6bd54a8
        jmp public_6bd5488
        public_6bd5484 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6bd5488 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_6c0b0c4]
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6bd5484
        mov ecx, dword ptr ss : [esp+0x3C]
        public_6bd54a8 : nop
        cmp ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x3C], ecx
        je public_6bd54f4
        public_6bd54b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6c0b0f8]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        add ecx, 8
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6bd59e0
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 8
        inc edx
        mov dword ptr ds : [edi+8], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6bd54b2
        public_6bd54f4 : nop
        add ebp, 0x80
        add ebx, 0x8C
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x40], ebp
        je public_6bd5579
        mov esi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x3C], ebp
        mov ebp, dword ptr ss : [ebp]
        je public_6bd5545
        nop 
        lea esp, ss:[esp]
        public_6bd5520 : nop
        cmp ebp, dword ptr ss : [esp+0x3C]
        je public_6bd5545
        lea ecx, ss:[ebp+8]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        jne public_6bd5520
        public_6bd5545 : nop
        cmp eax, esi
        mov edi, eax
        je public_6bd5566
        nop 
        lea esp, ss:[esp]
        public_6bd5550 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6c0b0c8]
        cmp edi, esi
        jne public_6bd5550
        public_6bd5566 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        push ebp
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6c0b0f4]
        mov ebp, dword ptr ss : [esp+0x40]
        public_6bd5579 : nop
        mov cl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [ebx+0xC], cl
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], ecx
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6bd52a0)
    }
}

#undef public_6bd52f1
#undef public_6bd5304
#undef public_6bd537d
#undef public_6bd5381
#undef public_6bd540d
#undef public_6bd5415
#undef public_6bd542c
#undef public_6bd5455
#undef public_6bd5460
#undef public_6bd547c
#undef public_6bd5484
#undef public_6bd5488
#undef public_6bd54a8
#undef public_6bd54b2
#undef public_6bd54f4
#undef public_6bd5520
#undef public_6bd5545
#undef public_6bd5550
#undef public_6bd5566
#undef public_6bd5579
