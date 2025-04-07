#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ccb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93080);
CLANG_FORWARD_PROC_SYMBOL(public_6f93090);

#define public_6f8b37c _public_6f8b37c
#define public_6f8b381 _public_6f8b381
#define public_6f8b39f _public_6f8b39f
#define public_6f8b3a8 _public_6f8b3a8
#define public_6f8b3d7 _public_6f8b3d7
#define public_6f8b430 _public_6f8b430
#define public_6f8b468 _public_6f8b468
#define public_6f8b46c _public_6f8b46c
#define public_6f8b472 _public_6f8b472
#define public_6f8b476 _public_6f8b476
#define public_6f8b4a7 _public_6f8b4a7
#define public_6f8b580 _public_6f8b580
#define public_6f8b5a6 _public_6f8b5a6
#define public_6f8b5bd _public_6f8b5bd
#define public_6f8b5ce _public_6f8b5ce
#define public_6f8b5f2 _public_6f8b5f2
#define public_6f8b60a _public_6f8b60a
#define public_6f8b611 _public_6f8b611

PROC_DECLARE(0x6f8b330, internal_6f8b330, public_6f8b330);
extern "C" NAKED register_t __cdecl internal_6f8b330()
{
    __asm
    {
        sub esp, 0x44
        mov edx, dword ptr ss : [esp+0x48]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [eax+8]
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_6f8b611
        mov eax, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [eax]
        lea ebp, ds:[ebx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ecx+0x10]
        test edx, edx
        mov byte ptr ss : [esp+0x12], 0
        jne public_6f8b37c
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        public_6f8b37c : nop
        cmp eax, dword ptr ss : [ebp+8]
        je public_6f8b39f
        public_6f8b381 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        mov eax, dword ptr ss : [esp+0x14]
        jne public_6f8b39f
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, dword ptr ss : [ebp+8]
        jne public_6f8b381
        public_6f8b39f : nop
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, dword ptr ss : [ebp+8]
        je public_6f8b3d7
        public_6f8b3a8 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 8
        je public_6f8b3d7
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        je public_6f8b3d7
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, dword ptr ss : [ebp+8]
        jne public_6f8b3a8
        public_6f8b3d7 : nop
        lea ecx, ss:[esp+0x30]
        add esi, 0x68
        push ecx
        mov ecx, esi
        call public_6f93080
        mov edi, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        call public_6f1df30
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6f93090
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f93090
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f93090
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp esi, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x58], eax
        je public_6f8b46c
        mov edi, edi
        public_6f8b430 : nop
        cmp eax, edi
        je public_6f8b468
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x18]
        test al, al
        je public_6f8b472
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_6f68e30
        mov ecx, dword ptr ss : [esp+0x24]
        cmp esi, ecx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x58]
        jne public_6f8b430
        jmp public_6f8b46c
        public_6f8b468 : nop
        cmp esi, ecx
        jne public_6f8b476
        public_6f8b46c : nop
        cmp eax, edi
        je public_6f8b4a7
        jmp public_6f8b476
        public_6f8b472 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        public_6f8b476 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov ecx, ebp
        call public_6f1cb80
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        add eax, 0x64
        push eax
        push edx
        mov ecx, ebp
        call public_6f1cbc0
        mov byte ptr ss : [esp+0x12], 1
        public_6f8b4a7 : nop
        mov edi, dword ptr ds : [ebx+0x20]
        mov ecx, edi
        call public_6f478c0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp esi, eax
        jne public_6f8b611
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x58], 0
        je public_6f8b580
        call public_6f57710
        test al, al
        je public_6f8b580
        mov al, byte ptr ds : [ebx+0x24]
        test al, al
        jne public_6f8b5ce
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        mov byte ptr ds : [ebx+0x24], 1
        je public_6f8b5ce
        mov ecx, ebp
        call public_6f1cd20
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        jne public_6f8b5ce
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        call public_6f47af0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x50]
        sub esp, 0xC
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x48]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fcomp dword ptr ds : [public_6fb8570]
        fnstsw ax
        test ah, 5
        jp public_6f8b5ce
        mov ecx, ebp
        call public_6f1ccb0
        mov byte ptr ss : [esp+0x58], 1
        jmp public_6f8b5ce
        public_6f8b580 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x58]
        push eax
        mov byte ptr ds : [ebx+0x24], 0
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0x4C]
        mov al, byte ptr ss : [esp+0x58]
        test al, al
        je public_6f8b5ce
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [eax]
        xor edi, edi
        cmp esi, eax
        je public_6f8b5ce
        public_6f8b5a6 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        jne public_6f8b5bd
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+0x10]
        inc edi
        cmp esi, eax
        jne public_6f8b5a6
        public_6f8b5bd : nop
        cmp edi, 1
        jne public_6f8b5ce
        cmp esi, dword ptr ds : [ebx+0x10]
        je public_6f8b5ce
        mov esi, dword ptr ds : [esi+8]
        or dword ptr ds : [esi+0x1C], 0x50
        public_6f8b5ce : nop
        mov byte ptr ss : [esp+0x13], 0
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f8b5f2
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x13]
        push eax
        push ebx
        call dword ptr ds : [edx+0x7C]
        public_6f8b5f2 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_6f8b60a
        mov al, byte ptr ss : [esp+0x58]
        test al, al
        jne public_6f8b60a
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6f8b611
        public_6f8b60a : nop
        mov ecx, ebx
        call public_6f1d110
        public_6f8b611 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6f8b330)
    }
}

#undef public_6f8b37c
#undef public_6f8b381
#undef public_6f8b39f
#undef public_6f8b3a8
#undef public_6f8b3d7
#undef public_6f8b430
#undef public_6f8b468
#undef public_6f8b46c
#undef public_6f8b472
#undef public_6f8b476
#undef public_6f8b4a7
#undef public_6f8b580
#undef public_6f8b5a6
#undef public_6f8b5bd
#undef public_6f8b5ce
#undef public_6f8b5f2
#undef public_6f8b60a
#undef public_6f8b611
