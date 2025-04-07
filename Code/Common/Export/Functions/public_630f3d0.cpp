#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_630f3d0);

#define public_630f403 _public_630f403
#define public_630f410 _public_630f410
#define public_630f41c _public_630f41c
#define public_630f426 _public_630f426
#define public_630f456 _public_630f456
#define public_630f461 _public_630f461
#define public_630f472 _public_630f472
#define public_630f480 _public_630f480
#define public_630f483 _public_630f483
#define public_630f49f _public_630f49f
#define public_630f4b3 _public_630f4b3
#define public_630f4c4 _public_630f4c4

PROC_DECLARE(0x630f3d0, internal_630f3d0, public_630f3d0);
extern "C" NAKED register_t __cdecl internal_630f3d0()
{
    __asm
    {
        sub esp, 0x408
        push ebx
        push ebp
        xor eax, eax
        push esi
        mov dword ptr ss : [esp+0x410], eax
        mov dword ptr ss : [esp+0x40C], eax
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov ebx, ecx
        mov byte ptr ss : [esp+0x14], 0
        call public_630f2c0
        test al, al
        je public_630f4b3
        public_630f403 : nop
        mov ecx, dword ptr ss : [esp+0x414]
        lea ebx, ds:[ebx]
        public_630f410 : nop
        mov al, byte ptr ss : [esp+ecx+0x10]
        cmp al, 0x20
        je public_630f41c
        cmp al, 9
        jne public_630f426
        public_630f41c : nop
        inc ecx
        mov dword ptr ss : [esp+0x414], ecx
        jmp public_630f410
        public_630f426 : nop
        mov edx, dword ptr ss : [esp+0x410]
        cmp ecx, edx
        jae public_630f49f
        mov al, byte ptr ss : [esp+ecx+0x10]
        test al, al
        je public_630f49f
        cmp al, 0x3B
        je public_630f49f
        cmp al, 0x5B
        jne public_630f49f
        inc ecx
        xor eax, eax
        sub edx, ecx
        mov dword ptr ss : [esp+0x414], ecx
        lea ebp, ds:[ebx+0x28]
        je public_630f461
        lea esi, ss:[esp+ecx+0x10]
        public_630f456 : nop
        cmp byte ptr ds : [esi], 0x5D
        je public_630f461
        inc eax
        inc esi
        cmp eax, edx
        jb public_630f456
        public_630f461 : nop
        lea esi, ss:[esp+ecx+0x10]
        add ecx, eax
        test eax, eax
        mov dword ptr ss : [esp+0x414], ecx
        jbe public_630f483
        public_630f472 : nop
        mov cl, byte ptr ds : [esi+eax-1]
        cmp cl, 0x20
        je public_630f480
        cmp cl, 9
        jne public_630f483
        public_630f480 : nop
        dec eax
        jne public_630f472
        public_630f483 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        cmp byte ptr ss : [ebp], 0x3B
        jne public_630f4c4
        public_630f49f : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call public_630f2c0
        test al, al
        jne public_630f403
        public_630f4b3 : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x28], 0
        xor al, al
        pop ebx
        add esp, 0x408
        ret 
        public_630f4c4 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x408
        ret 
        UNREACHABLE_TRAP(0x630f3d0)
    }
}

#undef public_630f403
#undef public_630f410
#undef public_630f41c
#undef public_630f426
#undef public_630f456
#undef public_630f461
#undef public_630f472
#undef public_630f480
#undef public_630f483
#undef public_630f49f
#undef public_630f4b3
#undef public_630f4c4
