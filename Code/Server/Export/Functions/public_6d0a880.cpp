#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cef450);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6630);
CLANG_FORWARD_PROC_SYMBOL(public_6d00e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d010e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a770);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a880);
CLANG_FORWARD_PROC_SYMBOL(public_6d0af00);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61548);

#define public_6d0a8d0 _public_6d0a8d0
#define public_6d0a8d2 _public_6d0a8d2
#define public_6d0a9e8 _public_6d0a9e8
#define public_6d0a9f1 _public_6d0a9f1
#define public_6d0aa40 _public_6d0aa40
#define public_6d0aa44 _public_6d0aa44
#define public_6d0aada _public_6d0aada
#define public_6d0abc8 _public_6d0abc8
#define public_6d0abdf _public_6d0abdf
#define public_6d0ac05 _public_6d0ac05
#define public_6d0ac48 _public_6d0ac48
#define public_6d0ac68 _public_6d0ac68
#define public_6d0aceb _public_6d0aceb
#define public_6d0ad19 _public_6d0ad19
#define public_6d0ad51 _public_6d0ad51
#define public_6d0ad8c _public_6d0ad8c
#define public_6d0ad8f _public_6d0ad8f
#define public_6d0ada5 _public_6d0ada5
#define public_6d0adb1 _public_6d0adb1
#define public_6d0adc0 _public_6d0adc0
#define public_6d0adeb _public_6d0adeb
#define public_6d0adf2 _public_6d0adf2
#define public_6d0ae18 _public_6d0ae18
#define public_6d0ae49 _public_6d0ae49
#define public_6d0ae80 _public_6d0ae80
#define public_6d0aeb1 _public_6d0aeb1

PROC_DECLARE(0x6d0a880, internal_6d0a880, public_6d0a880);
extern "C" NAKED register_t __cdecl internal_6d0a880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61548 @0x6d0a882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61548
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x218
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0xC8
        mov dword ptr ss : [esp+0x24], edi
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x230], 0
        je public_6d0a8d0
        mov ecx, eax
        call public_6d00e80
        mov ebx, eax
        jmp public_6d0a8d2
        public_6d0a8d0 : nop
        xor ebx, ebx
        public_6d0a8d2 : nop
        mov ebp, dword ptr ss : [esp+0x238]
        push ebp
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x234], 0xFFFFFFFF
        call public_6d0af00
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov edx, dword ptr ss : [ebp+0xB4]
        mov eax, dword ptr ss : [ebp+0xAC]
        mov dword ptr ss : [esp+0xDC], ecx
        mov dword ptr ss : [esp+0xE0], edx
        lea ecx, ss:[ebp+0xB8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xE4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xE8], edx
        mov dword ptr ss : [esp+0xEC], ecx
        lea edx, ss:[ebp+0xC4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xF0], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xF4], ecx
        mov ecx, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [esp+0xF8], edx
        mov edx, dword ptr ss : [ebp+0xD4]
        mov dword ptr ss : [esp+0xFC], ecx
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov dword ptr ss : [esp+0x100], edx
        mov dl, byte ptr ss : [ebp+0xDC]
        mov dword ptr ss : [esp+0xD8], eax
        mov dword ptr ss : [esp+0x104], ecx
        mov byte ptr ss : [esp+0x108], dl
        mov dword ptr ss : [esp+0x2C], offset public_6d65f78
        test eax, eax
        mov dword ptr ss : [esp+0x230], 1
        je public_6d0a9f1
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d0a9f1
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[ebp+4]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x168]
        lea eax, ds:[ebx+0xC]
        xor ecx, ecx
        cmp eax, ecx
        je public_6d0a9e8
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ecx
        je public_6d0a9e8
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_6d0a9e8
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6d0ad19
        public_6d0a9e8 : nop
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6d0ad19
        public_6d0a9f1 : nop
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call dword ptr ds : [public_6d643c0]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+0x164]
        mov ecx, esi
        call dword ptr ds : [public_6d6439c]
        lea eax, ds:[ebx+0xC]
        xor esi, esi
        cmp eax, esi
        je public_6d0aa40
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_6d0aa40
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        mov dword ptr ss : [esp+0x14], eax
        je public_6d0aa44
        public_6d0aa40 : nop
        mov dword ptr ss : [esp+0x14], esi
        public_6d0aa44 : nop
        lea ecx, ss:[esp+0x10C]
        call public_6d0a770
        mov dword ptr ss : [esp+0x1F4], esi
        mov dword ptr ss : [esp+0x1F8], esi
        mov dword ptr ss : [esp+0x1FC], esi
        mov byte ptr ss : [esp+0x200], 0
        fild dword ptr ss : [esp+0x94]
        mov eax, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0x114], eax
        mov eax, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x124], eax
        mov eax, dword ptr ds : [public_6d8da08]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10C], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov byte ptr ss : [esp+0x230], 2
        mov dword ptr ss : [esp+0x110], edi
        mov dword ptr ss : [esp+0x11C], ecx
        mov dword ptr ss : [esp+0x120], edx
        jne public_6d0aada
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d0aada : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x208]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0xE4]
        mov edx, dword ptr ss : [esp+0xEC]
        mov ecx, 9
        lea esi, ss:[esp+0x204]
        lea edi, ss:[esp+0x128]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x150], ecx
        mov ecx, dword ptr ss : [esp+0xF4]
        mov dword ptr ss : [esp+0x14C], eax
        mov eax, dword ptr ss : [esp+0xF0]
        mov dword ptr ss : [esp+0x15C], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x158], eax
        mov al, byte ptr ss : [esp+0x108]
        mov dword ptr ss : [esp+0x16C], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x154], edx
        mov edx, dword ptr ss : [esp+0xF8]
        mov byte ptr ss : [esp+0x200], al
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x170], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x160], edx
        mov edx, dword ptr ss : [esp+0xE0]
        mov dword ptr ss : [esp+0x1A4], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x17C], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x1FC], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x178], eax
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x174], edx
        mov dword ptr ss : [esp+0x1A0], ecx
        jle public_6d0abdf
        public_6d0abc8 : nop
        mov edx, dword ptr ss : [esp+eax*4+0x50]
        mov dword ptr ss : [esp+eax*4+0x180], edx
        mov ecx, dword ptr ss : [esp+0x1A0]
        inc eax
        cmp eax, ecx
        jl public_6d0abc8
        public_6d0abdf : nop
        mov eax, dword ptr ss : [esp+0x98]
        test eax, eax
        je public_6d0ac05
        push eax
        call dword ptr ds : [public_6d6449c]
        add esp, 4
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x1AC]
        call dword ptr ds : [public_6d643ac]
        public_6d0ac05 : nop
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x1AC]
        call dword ptr ds : [public_6d646bc]
        mov edi, dword ptr ss : [esp+0x1BC]
        mov esi, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0xB0]
        call dword ptr ds : [public_6d646b8]
        cmp esi, edi
        mov ecx, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d0ac68
        mov eax, dword ptr ss : [esp+0x10]
        public_6d0ac48 : nop
        cmp eax, ecx
        je public_6d0ac68
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6d0ac48
        public_6d0ac68 : nop
        push edi
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C4]
        call dword ptr ds : [public_6d643a8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push edi
        lea ecx, ss:[esp+0x1C4]
        call dword ptr ds : [public_6d643a4]
        mov eax, dword ptr ss : [esp+0xDC]
        mov ecx, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1F8], eax
        mov dword ptr ss : [esp+0x168], ecx
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10C]
        mov eax, dword ptr ss : [esp+0xD8]
        test eax, eax
        je public_6d0aceb
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+ecx-0x14]
        test eax, eax
        je public_6d0aceb
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x1B4], eax
        public_6d0aceb : nop
        lea ecx, ss:[esp+0x1B8]
        mov byte ptr ss : [esp+0x230], 3
        call dword ptr ds : [public_6d6438c]
        lea ecx, ss:[esp+0x1A8]
        mov byte ptr ss : [esp+0x230], 1
        call dword ptr ds : [public_6d64498]
        mov edi, dword ptr ss : [esp+0x20]
        public_6d0ad19 : nop
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d643c4]
        mov dx, word ptr ss : [ebp+0xE0]
        mov eax, dword ptr ss : [ebp+0xE4]
        mov ebp, dword ptr ss : [ebp+0xE8]
        test ebp, 0x3FFFFFFF
        mov word ptr ss : [esp+0x24], dx
        mov dword ptr ss : [esp+0x28], eax
        je public_6d0ad51
        push 1
        push ebp
        mov ecx, ebx
        call public_6cef3b0
        public_6d0ad51 : nop
        mov edx, dword ptr ds : [ebx]
        push 0
        push edi
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        call public_6d010e0
        lea esi, ds:[edi+0x34]
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        je public_6d0ad8c
        mov dword ptr ds : [ecx], eax
        jmp public_6d0ad8f
        public_6d0ad8c : nop
        mov dword ptr ds : [esi+4], eax
        public_6d0ad8f : nop
        mov dword ptr ds : [esi+8], eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d0ada5
        cmp dword ptr ss : [esp+0xD8], ebp
        je public_6d0adb1
        public_6d0ada5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 1
        call dword ptr ds : [public_6d645a0]
        public_6d0adb1 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0adf2
        lea ebx, ds:[ebx]
        public_6d0adc0 : nop
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, dword ptr ss : [esp+0xD8]
        je public_6d0adeb
        push eax
        mov ecx, ebx
        call public_6cef450
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0xDC], al
        call public_6cf6630
        xor ebp, ebp
        public_6d0adeb : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d0adc0
        public_6d0adf2 : nop
        mov dword ptr ss : [esp+0x2C], offset public_6d65f68
        mov eax, dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x230], 5
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d0ae49
        public_6d0ae18 : nop
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0xC0]
        call dword ptr ds : [public_6d641e8]
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d0ae18
        mov eax, dword ptr ss : [esp+0xBC]
        public_6d0ae49 : nop
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0xC0], ebp
        mov dword ptr ss : [esp+0xC4], ebp
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov byte ptr ss : [esp+0x230], 4
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d0aeb1
        nop 
        lea esp, ss:[esp]
        public_6d0ae80 : nop
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0xB4]
        call dword ptr ds : [public_6d643d0]
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d0ae80
        mov eax, dword ptr ss : [esp+0xB0]
        public_6d0aeb1 : nop
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0xA4]
        push eax
        mov dword ptr ss : [esp+0xB8], ebp
        mov dword ptr ss : [esp+0xBC], ebp
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x230]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x224
        ret 4
        UNREACHABLE_TRAP(0x6d0a880)
    }
}

#undef public_6d0a8d0
#undef public_6d0a8d2
#undef public_6d0a9e8
#undef public_6d0a9f1
#undef public_6d0aa40
#undef public_6d0aa44
#undef public_6d0aada
#undef public_6d0abc8
#undef public_6d0abdf
#undef public_6d0ac05
#undef public_6d0ac48
#undef public_6d0ac68
#undef public_6d0aceb
#undef public_6d0ad19
#undef public_6d0ad51
#undef public_6d0ad8c
#undef public_6d0ad8f
#undef public_6d0ada5
#undef public_6d0adb1
#undef public_6d0adc0
#undef public_6d0adeb
#undef public_6d0adf2
#undef public_6d0ae18
#undef public_6d0ae49
#undef public_6d0ae80
#undef public_6d0aeb1
