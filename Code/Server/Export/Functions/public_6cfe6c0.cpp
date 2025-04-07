#include "Server-PCH.h"


#define public_6cfe6e0 _public_6cfe6e0
#define public_6cfe720 _public_6cfe720
#define public_6cfe748 _public_6cfe748
#define public_6cfe760 _public_6cfe760
#define public_6cfe77d _public_6cfe77d
#define public_6cfe796 _public_6cfe796
#define public_6cfe79c _public_6cfe79c
#define public_6cfe7b4 _public_6cfe7b4
#define public_6cfe7c6 _public_6cfe7c6

PROC_DECLARE(0x6cfe6c0, internal_6cfe6c0, public_6cfe6c0);
extern "C" NAKED register_t __cdecl internal_6cfe6c0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov ebx, ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6cfe7c6
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6cfe6e0 : nop
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cfe7b4
        mov esi, dword ptr ds : [public_6d64568]
/*FIXUP push offset public_6d66f3c @0x6cfe6f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f3c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6cfe720
        call dword ptr ds : [public_6d64564]
        push 0
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [ebx+0x28], eax
        jmp public_6cfe7b4
/*FIXUP public_6cfe720 : nop
        push offset public_6d66f0c @0x6cfe720*/
  FIXUP public_6cfe720 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f0c
        call esi
        test al, al
        mov ecx, ebp
        je public_6cfe79c
        call dword ptr ds : [public_6d64564]
        mov esi, eax
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        jne public_6cfe748
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6cfe77d
        public_6cfe748 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6cfe760
        mov eax, 0x1F
        public_6cfe760 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        public_6cfe77d : nop
        mov edi, offset public_6d66f00
        lea esi, ss:[esp+0x14]
        mov ecx, 9
        xor eax, eax
        repe cmpsb
        jne public_6cfe796
        mov byte ptr ds : [ebx+0x30], al
        jmp public_6cfe7b4
        public_6cfe796 : nop
        mov byte ptr ds : [ebx+0x30], 1
        jmp public_6cfe7b4
/*FIXUP public_6cfe79c : nop
        push offset public_6d66ef4 @0x6cfe79c*/
  FIXUP public_6cfe79c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ef4
        call esi
        test al, al
        je public_6cfe7b4
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6d64560]
        mov dword ptr ds : [ebx+0x2C], eax
        public_6cfe7b4 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cfe6e0
        pop edi
        pop esi
        public_6cfe7c6 : nop
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cfe6c0)
    }
}

#undef public_6cfe6e0
#undef public_6cfe720
#undef public_6cfe748
#undef public_6cfe760
#undef public_6cfe77d
#undef public_6cfe796
#undef public_6cfe79c
#undef public_6cfe7b4
#undef public_6cfe7c6
