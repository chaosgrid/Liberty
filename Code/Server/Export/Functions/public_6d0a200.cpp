#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cef450);
CLANG_FORWARD_PROC_SYMBOL(public_6cf66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d02b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a200);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a770);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d614cb);

#define public_6d0a24b _public_6d0a24b
#define public_6d0a24d _public_6d0a24d
#define public_6d0a2ac _public_6d0a2ac
#define public_6d0a2b0 _public_6d0a2b0
#define public_6d0a3a1 _public_6d0a3a1
#define public_6d0a441 _public_6d0a441
#define public_6d0a455 _public_6d0a455
#define public_6d0a477 _public_6d0a477
#define public_6d0a4c0 _public_6d0a4c0
#define public_6d0a4e0 _public_6d0a4e0
#define public_6d0a50c _public_6d0a50c
#define public_6d0a554 _public_6d0a554
#define public_6d0a593 _public_6d0a593
#define public_6d0a596 _public_6d0a596
#define public_6d0a5ca _public_6d0a5ca
#define public_6d0a5cc _public_6d0a5cc
#define public_6d0a617 _public_6d0a617
#define public_6d0a630 _public_6d0a630
#define public_6d0a671 _public_6d0a671
#define public_6d0a690 _public_6d0a690
#define public_6d0a6c1 _public_6d0a6c1

PROC_DECLARE(0x6d0a200, internal_6d0a200, public_6d0a200);
extern "C" NAKED register_t __cdecl internal_6d0a200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d614cb @0x6d0a202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d614cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x12C
        push ebx
        push esi
        push edi
        push 0x90
        mov dword ptr ss : [esp+0x10], ecx
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x140], edi
        je public_6d0a24b
        mov ecx, eax
        call public_6d02b70
        mov ebx, eax
        jmp public_6d0a24d
        public_6d0a24b : nop
        xor ebx, ebx
        public_6d0a24d : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14C]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov dword ptr ss : [esp+0x148], 0xFFFFFFFF
        call dword ptr ds : [public_6d644a4]
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
        cmp eax, edi
        je public_6d0a2ac
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_6d0a2ac
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d0a2b0
        public_6d0a2ac : nop
        mov dword ptr ss : [esp+0x1C], edi
        public_6d0a2b0 : nop
        lea ecx, ss:[esp+0x28]
        call public_6d0a770
        mov esi, dword ptr ds : [public_6d644a8]
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x144], 1
        call esi
        lea ecx, ss:[esp+0xE8]
        mov byte ptr ss : [esp+0xE4], 0
        call esi
        lea ecx, ss:[esp+0xF4]
        mov byte ptr ss : [esp+0xEC], 0
        mov byte ptr ss : [esp+0xED], 0
        mov dword ptr ss : [esp+0xF0], edi
        call esi
        mov dl, byte ptr ss : [esp+0x23]
        push edi
        push edi
        lea ecx, ss:[esp+0x114]
        mov dword ptr ss : [esp+0x100], edi
        mov dword ptr ss : [esp+0x104], edi
        mov dword ptr ss : [esp+0x108], edi
        mov dword ptr ss : [esp+0x10C], 0
        mov dword ptr ss : [esp+0x110], edi
        mov byte ptr ss : [esp+0x114], dl
        call public_6cfc340
        mov dword ptr ss : [esp+0x110], eax
        mov dword ptr ss : [esp+0x114], edi
        fild dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[ebp+0x4C]
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [public_6d8da08]
        cmp eax, edi
        mov dword ptr ss : [esp+0x144], 2
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        jne public_6d0a3a1
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d0a3a1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x58]
        push edx
        lea edx, ss:[esp+0x11C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov al, byte ptr ss : [ebp+0xB4]
        mov edx, dword ptr ss : [ebp+0x48]
        mov ecx, 9
        lea esi, ss:[esp+0x118]
        lea edi, ss:[esp+0x44]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x10]
        mov byte ptr ss : [esp+0xE4], al
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x84], eax
        mov dword ptr ss : [esp+0x108], eax
        lea eax, ss:[ebp+0x14]
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC0], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x8C], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x90], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x94], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0x98], edx
        xor edx, edx
        test ecx, ecx
        mov dword ptr ss : [esp+0xBC], ecx
        jle public_6d0a455
        lea esi, ss:[esp+0x8C]
        lea ecx, ss:[esp+0x9C]
        sub eax, esi
        public_6d0a441 : nop
        mov esi, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ss : [esp+0xBC]
        inc edx
        add ecx, 4
        cmp edx, esi
        jl public_6d0a441
        public_6d0a455 : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        test eax, eax
        je public_6d0a477
        push eax
        call dword ptr ds : [public_6d6449c]
        add esp, 4
        add eax, 4
        push eax
        lea ecx, ss:[esp+0xC8]
        call dword ptr ds : [public_6d643ac]
        public_6d0a477 : nop
        lea eax, ss:[ebp+0x70]
        push eax
        lea ecx, ss:[esp+0xC8]
        call dword ptr ds : [public_6d646bc]
        lea ecx, ss:[ebp+0x80]
        lea edx, ss:[esp+0xD4]
        cmp edx, ecx
        je public_6d0a50c
        mov edi, dword ptr ss : [esp+0xD8]
        mov esi, dword ptr ds : [edi]
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6d646b8]
        cmp esi, edi
        mov ecx, dword ptr ss : [ebp+0x84]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d0a4e0
        mov eax, dword ptr ss : [esp+0x18]
        nop 
        public_6d0a4c0 : nop
        cmp eax, ecx
        je public_6d0a4e0
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d0a4c0
        public_6d0a4e0 : nop
        push edi
        push esi
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0xE0]
        call dword ptr ds : [public_6d643a8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push edi
        lea ecx, ss:[esp+0xE0]
        call dword ptr ds : [public_6d643a4]
        public_6d0a50c : nop
        mov ecx, dword ptr ss : [ebp+0xB8]
        mov al, byte ptr ss : [ebp+0xAC]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0xE0], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov byte ptr ss : [esp+0xF0], 1
        mov byte ptr ss : [esp+0xF1], al
        call dword ptr ds : [public_6d646a4]
        mov eax, dword ptr ss : [ebp+0xBC]
        test eax, 0x3FFFFFFF
        je public_6d0a554
        push 1
        push eax
        mov ecx, ebx
        call public_6cef3b0
        public_6d0a554 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push 0
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+0x170]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x1BC]
        lea esi, ds:[edi+0x5C]
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d0a593
        mov dword ptr ds : [ecx], eax
        jmp public_6d0a596
        public_6d0a593 : nop
        mov dword ptr ds : [esi+4], eax
        public_6d0a596 : nop
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edi]
        push 0xFDFF
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        test esi, esi
        je public_6d0a617
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_6d0a5ca
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0a5ca
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6d0a5cc
        public_6d0a5ca : nop
        xor eax, eax
        public_6d0a5cc : nop
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], edx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x11C], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x124], eax
        lea eax, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x120], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x128], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x11C], ebx
        call dword ptr ds : [edx+0x10]
        public_6d0a617 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push 1
        call dword ptr ds : [public_6d645a0]
        mov edi, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d0a671
        lea esp, ss:[esp]
        public_6d0a630 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
        mov ecx, ebx
        call public_6cef450
        mov byte ptr ss : [ebp+0xA8], al
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        mov eax, dword ptr ds : [edx+eax-0x100]
        push ebx
        push ebp
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [ebp+0xB0], eax
        call public_6cf66f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xC]
        jne public_6d0a630
        public_6d0a671 : nop
        mov eax, dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x144], 3
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        pop ebp
        je public_6d0a6c1
        public_6d0a690 : nop
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x110]
        call public_6d0f620
        cmp dword ptr ss : [esp+0xC], esi
        jne public_6d0a690
        mov eax, dword ptr ss : [esp+0x10C]
        public_6d0a6c1 : nop
        push eax
        call public_6d5ffb0
        xor esi, esi
        add esp, 4
        mov dword ptr ss : [esp+0x10C], esi
        mov dword ptr ss : [esp+0x110], esi
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x144], 4
        call dword ptr ds : [public_6d646b4]
        mov ecx, dword ptr ss : [esp+0xD4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xDC]
        call dword ptr ds : [public_6d643a8]
        mov ecx, dword ptr ss : [esp+0xD4]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea ecx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0xD4], esi
        mov dword ptr ss : [esp+0xD8], esi
        mov dword ptr ss : [esp+0x140], 0xFFFFFFFF
        call dword ptr ds : [public_6d64498]
        mov ecx, dword ptr ss : [esp+0x138]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x138
        ret 4
        UNREACHABLE_TRAP(0x6d0a200)
    }
}

#undef public_6d0a24b
#undef public_6d0a24d
#undef public_6d0a2ac
#undef public_6d0a2b0
#undef public_6d0a3a1
#undef public_6d0a441
#undef public_6d0a455
#undef public_6d0a477
#undef public_6d0a4c0
#undef public_6d0a4e0
#undef public_6d0a50c
#undef public_6d0a554
#undef public_6d0a593
#undef public_6d0a596
#undef public_6d0a5ca
#undef public_6d0a5cc
#undef public_6d0a617
#undef public_6d0a630
#undef public_6d0a671
#undef public_6d0a690
#undef public_6d0a6c1
