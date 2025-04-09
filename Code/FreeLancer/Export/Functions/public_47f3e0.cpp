#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);

#define public_47f407 _public_47f407
#define public_47f413 _public_47f413
#define public_47f435 _public_47f435
#define public_47f43f _public_47f43f
#define public_47f45c _public_47f45c
#define public_47f478 _public_47f478
#define public_47f486 _public_47f486
#define public_47f488 _public_47f488
#define public_47f48f _public_47f48f
#define public_47f49b _public_47f49b
#define public_47f4b2 _public_47f4b2
#define public_47f4c8 _public_47f4c8
#define public_47f4cd _public_47f4cd
#define public_47f4da _public_47f4da
#define public_47f4f9 _public_47f4f9
#define public_47f510 _public_47f510
#define public_47f515 _public_47f515
#define public_47f522 _public_47f522
#define public_47f53b _public_47f53b
#define public_47f557 _public_47f557
#define public_47f576 _public_47f576
#define public_47f584 _public_47f584
#define public_47f5aa _public_47f5aa
#define public_47f5c4 _public_47f5c4
#define public_47f65d _public_47f65d
#define public_47f6a4 _public_47f6a4
#define public_47f6d9 _public_47f6d9
#define public_47f6fc _public_47f6fc
#define public_47f715 _public_47f715

PROC_DECLARE(0x47f3e0, internal_47f3e0, public_47f3e0);
extern "C" NAKED register_t __cdecl internal_47f3e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x35C]
        test al, al
        push esi
        push edi
        mov byte ptr ss : [esp+0x13], 0
        je public_47f407
        mov al, byte ptr ss : [ebp+0x98C]
        test al, al
        je public_47f407
        mov byte ptr ss : [esp+0x13], 1
        public_47f407 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        lea esi, ss:[ebp+0x410]
        public_47f413 : nop
        mov ecx, dword ptr ss : [ebp+0x3C4]
        add ecx, eax
        cmp ecx, dword ptr ss : [esp+0x1C]
        jae public_47f435
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_47f435
        mov byte ptr ss : [esp+0x11], 0
        mov byte ptr ss : [esp+0x10], 0
        jmp public_47f43f
        public_47f435 : nop
        mov byte ptr ss : [esp+0x11], 1
        mov byte ptr ss : [esp+0x10], 1
        public_47f43f : nop
        mov eax, dword ptr ss : [ebp+0x360]
        test eax, eax
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x12], dl
        je public_47f45c
        test byte ptr ds : [eax+0x6C], 2
        jne public_47f45c
        mov byte ptr ss : [esp+0x12], 1
        public_47f45c : nop
        test eax, eax
        mov bl, 1
        je public_47f48f
        mov eax, dword ptr ds : [eax+0x978]
        cmp eax, 3
        jne public_47f478
        cmp dword ptr ss : [ebp+0x32C], 4
        je public_47f488
        jmp public_47f486
        public_47f478 : nop
        cmp eax, 1
        jne public_47f488
        cmp dword ptr ss : [ebp+0x32C], 4
        jne public_47f488
        public_47f486 : nop
        xor bl, bl
        public_47f488 : nop
        cmp eax, 2
        jne public_47f48f
        xor bl, bl
        public_47f48f : nop
        mov al, byte ptr ss : [ebp+0x35C]
        test al, al
        je public_47f49b
        xor bl, bl
        public_47f49b : nop
        mov ecx, dword ptr ds : [esi-0x28]
        test ecx, ecx
        je public_47f4b2
        mov eax, dword ptr ds : [ecx]
        movzx edx, dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        public_47f4b2 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_47f4da
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_47f4c8
        test bl, bl
        jne public_47f4c8
        xor eax, eax
        jmp public_47f4cd
        public_47f4c8 : nop
        mov eax, 1
        public_47f4cd : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        public_47f4da : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_47f4f9
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        je public_47f4f9
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        public_47f4f9 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        test ecx, ecx
        je public_47f522
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_47f510
        test bl, bl
        jne public_47f510
        xor eax, eax
        jmp public_47f515
        public_47f510 : nop
        mov eax, 1
        public_47f515 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        public_47f522 : nop
        mov ecx, dword ptr ds : [esi+0x64]
        test ecx, ecx
        je public_47f53b
        movzx edx, byte ptr ss : [esp+0x11]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        public_47f53b : nop
        mov ecx, dword ptr ds : [esi+0x8C]
        test ecx, ecx
        je public_47f557
        movzx edx, byte ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        public_47f557 : nop
        mov ecx, dword ptr ds : [esi+0x78]
        test ecx, ecx
        je public_47f5c4
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        jne public_47f576
        mov eax, dword ptr ss : [ebp+0x32C]
        cmp eax, 4
        je public_47f576
        cmp eax, 1
        jne public_47f584
        public_47f576 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_47f584 : nop
        mov al, byte ptr ss : [ebp+0x35C]
        test al, al
        je public_47f5aa
        cmp dword ptr ss : [ebp+0x978], 2
        je public_47f5c4
        mov ecx, dword ptr ds : [esi+0x78]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        jmp public_47f5c4
        public_47f5aa : nop
        call public_4c4810
        test al, al
        jne public_47f5c4
        mov ecx, dword ptr ds : [esi+0x78]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        public_47f5c4 : nop
        mov eax, dword ptr ds : [esi-0x14]
        test eax, eax
        je public_47f65d
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_47f65d
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_47f65d
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov bl, byte ptr ss : [esp+0x11]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        movzx edi, bl
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 2
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        je public_47f65d
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 3
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 3
        call dword ptr ds : [edx+0xA8]
        public_47f65d : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        add esi, 4
        cmp eax, 5
        mov dword ptr ss : [esp+0x14], eax
        jb public_47f413
        mov eax, dword ptr ss : [ebp+0x970]
        test eax, eax
        je public_47f715
        mov eax, dword ptr ss : [ebp+0x96C]
        test eax, eax
        je public_47f715
        mov ecx, ebp
        xor bl, bl
        call public_47e790
        test eax, eax
        je public_47f6a4
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_47f6a4
        mov bl, 1
        public_47f6a4 : nop
        cmp dword ptr ss : [ebp+0x32C], 4
        jne public_47f6fc
        cmp dword ptr ss : [ebp+0x3A4], 0xFFFFFFFF
        je public_47f6fc
        test bl, bl
        jne public_47f6fc
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0xB8]
        test al, al
        jne public_47f6fc
        mov eax, dword ptr ss : [ebp+0x91C]
        test eax, eax
        je public_47f6d9
        test byte ptr ds : [eax+0x6C], 2
        jne public_47f6fc
        public_47f6d9 : nop
        mov eax, dword ptr ss : [ebp+0x970]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ss : [ebp+0x96C]
        mov cl, byte ptr ds : [eax+0x6C]
        pop edi
        pop esi
        or cl, 3
        pop ebp
        mov byte ptr ds : [eax+0x6C], cl
        pop ebx
        add esp, 8
        ret 4
        public_47f6fc : nop
        mov eax, dword ptr ss : [ebp+0x970]
        mov bl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and bl, cl
        mov byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x96C]
        and byte ptr ds : [eax+0x6C], cl
        public_47f715 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x47f3e0)
    }
}

#undef public_47f407
#undef public_47f413
#undef public_47f435
#undef public_47f43f
#undef public_47f45c
#undef public_47f478
#undef public_47f486
#undef public_47f488
#undef public_47f48f
#undef public_47f49b
#undef public_47f4b2
#undef public_47f4c8
#undef public_47f4cd
#undef public_47f4da
#undef public_47f4f9
#undef public_47f510
#undef public_47f515
#undef public_47f522
#undef public_47f53b
#undef public_47f557
#undef public_47f576
#undef public_47f584
#undef public_47f5aa
#undef public_47f5c4
#undef public_47f65d
#undef public_47f6a4
#undef public_47f6d9
#undef public_47f6fc
#undef public_47f715
