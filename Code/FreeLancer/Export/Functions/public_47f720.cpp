#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447210);
CLANG_FORWARD_PROC_SYMBOL(public_448540);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47f720);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c4040);
CLANG_FORWARD_PROC_SYMBOL(public_4c4540);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c63e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6860);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_4c6e70);
CLANG_FORWARD_PROC_SYMBOL(public_4f6200);
CLANG_FORWARD_PROC_SYMBOL(public_4f6380);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_585ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_47f750 _public_47f750
#define public_47f790 _public_47f790
#define public_47f7ea _public_47f7ea
#define public_47f7f4 _public_47f7f4
#define public_47f7fc _public_47f7fc
#define public_47f813 _public_47f813
#define public_47f827 _public_47f827
#define public_47f83c _public_47f83c
#define public_47f864 _public_47f864
#define public_47f878 _public_47f878
#define public_47f8b3 _public_47f8b3
#define public_47f8c7 _public_47f8c7
#define public_47f917 _public_47f917
#define public_47f933 _public_47f933
#define public_47f964 _public_47f964
#define public_47f969 _public_47f969
#define public_47f993 _public_47f993
#define public_47f9b1 _public_47f9b1
#define public_47f9dd _public_47f9dd
#define public_47fa12 _public_47fa12
#define public_47fab2 _public_47fab2
#define public_47fad1 _public_47fad1
#define public_47fad6 _public_47fad6
#define public_47fb04 _public_47fb04
#define public_47fb36 _public_47fb36

PROC_DECLARE(0x47f720, internal_47f720, public_47f720);
extern "C" NAKED register_t __cdecl internal_47f720()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        push edi
        mov ebp, ecx
        je public_47f750
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_47e460
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_47f878
        cmp edi, 2
        je public_47f878
        public_47f750 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_47f827
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_47f7fc
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x350]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_47f7fc
        lea esp, ss:[esp]
        public_47f790 : nop
        lea edi, ds:[ebx+8]
        cmp edi, esi
        je public_47f7f4
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_47f7f4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ss : [esp+0x20]
        jne public_47f7f4
        mov eax, dword ptr ss : [ebp+0x360]
        test eax, eax
        je public_47f7ea
        cmp dword ptr ds : [eax+0x978], 3
        jne public_47f7ea
        fld dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+0x14]
        push 0
        push ecx
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ds:[edi+8]
        push ecx
        push edx
        call public_4c4540
        add esp, 0x14
        jmp public_47f7f4
        public_47f7ea : nop
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6390]
        public_47f7f4 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ss : [esp+0x1C]
        jne public_47f790
        public_47f7fc : nop
        mov ebp, dword ptr ss : [ebp+0x360]
        test ebp, ebp
        je public_47f813
        cmp dword ptr ss : [ebp+0x978], 3
        jne public_47f813
        push 1
        jmp public_47f83c
        public_47f813 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47f827 : nop
        mov ebp, dword ptr ss : [ebp+0x360]
        test ebp, ebp
        je public_47f864
        cmp dword ptr ss : [ebp+0x978], 3
        jne public_47f864
        push 0
        public_47f83c : nop
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        push ecx
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ds:[esi+8]
        push ecx
        push edx
        call public_4c4540
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47f864 : nop
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47f878 : nop
        mov ax, word ptr ds : [esi+2]
        mov word ptr ss : [ebp+0x948], ax
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_47f9dd
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_47f8b3
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_47f8b3
        mov ecx, dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [esp+0x1C], ecx
        public_47f8b3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 1
        mov dword ptr ss : [esp+0x20], eax
        jge public_47f8c7
        mov dword ptr ss : [esp+0x20], 1
        public_47f8c7 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[ebp+0x330]
        push eax
        call public_4c63e0
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x1C]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x14]
        mov ebx, eax
        call public_5b7ec0
        cmp ebx, eax
        jbe public_47f917
        mov ecx, dword ptr ds : [public_671c78]
        push 0
        push ecx
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47f917 : nop
        push 0x11
        call public_5645c0
        add esp, 4
        test edi, edi
        jne public_47f933
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, offset public_674c0c
        call public_4f6380
        public_47f933 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6394]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        mov eax, dword ptr ss : [ebp+0x360]
        test eax, eax
        je public_47f964
        mov eax, dword ptr ds : [eax+0x978]
        cmp eax, 2
        je public_47f964
        cmp eax, 3
        mov byte ptr ss : [esp+0x20], 0
        jne public_47f969
        public_47f964 : nop
        mov byte ptr ss : [esp+0x20], 1
        public_47f969 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_47e460
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        lea esi, ss:[ebp+0x330]
        mov ecx, esi
        call public_4c6a50
        mov eax, dword ptr ss : [ebp+0x360]
        test eax, eax
        je public_47f9b1
        public_47f993 : nop
        cmp dword ptr ds : [eax+0x978], 3
        je public_47fb04
        mov ecx, esi
        call public_4c6e70
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47f9b1 : nop
        mov al, byte ptr ss : [ebp+0x35C]
        test al, al
        je public_47fb04
        cmp dword ptr ss : [ebp+0x978], 2
        jne public_47fb36
        mov ecx, esi
        call public_4c6e70
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47f9dd : nop
        mov ecx, dword ptr ss : [ebp+0x330]
        push 0
        lea edi, ss:[ebp+0x330]
        push esi
        call public_585ef0
        mov ebx, eax
        test ebx, ebx
        push 0
        jne public_47fa12
        mov ecx, dword ptr ds : [public_671c68]
        push ecx
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_47fa12 : nop
        push ebx
        call dword ptr ds : [public_5c6028]
        add esp, 8
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c63a4]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        mov eax, dword ptr ds : [public_671c70]
        push 0
        push eax
        call public_489e80
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c632c]
        add esp, 0xC
        push eax
        mov ecx, edi
        call public_4c6860
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c603c]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_47fab2
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x11
        jne public_47fab2
        lea ecx, ds:[edi+0x98]
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_47fab2
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_5c639c]
        add esp, 4
        test eax, eax
        je public_47fab2
        mov cl, byte ptr ds : [eax+0x78]
        test cl, cl
        jne public_47fab2
        push ebx
        push 0
        mov ecx, offset public_674c0c
        call public_4f6200
        public_47fab2 : nop
        mov eax, dword ptr ss : [ebp+0x360]
        test eax, eax
        je public_47fad1
        mov eax, dword ptr ds : [eax+0x978]
        cmp eax, 2
        je public_47fad1
        cmp eax, 3
        mov byte ptr ss : [esp+0x20], 0
        jne public_47fad6
        public_47fad1 : nop
        mov byte ptr ss : [esp+0x20], 1
        public_47fad6 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_47e460
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        push eax
        push ecx
        push esi
        lea esi, ss:[ebp+0x330]
        mov ecx, esi
        call public_4c6a50
        mov eax, dword ptr ss : [ebp+0x360]
        test eax, eax
        jne public_47f993
        public_47fb04 : nop
        call public_4c4810
        test al, al
        je public_47fb36
        add ebp, 0x34C
        push ebp
        call public_4c4040
        add esp, 4
        call public_446be0
        mov esi, eax
        test esi, esi
        je public_47fb36
        mov ecx, esi
        push ebp
        call public_448540
        mov ecx, esi
        call public_447210
        public_47fb36 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x47f720)
    }
}

#undef public_47f750
#undef public_47f790
#undef public_47f7ea
#undef public_47f7f4
#undef public_47f7fc
#undef public_47f813
#undef public_47f827
#undef public_47f83c
#undef public_47f864
#undef public_47f878
#undef public_47f8b3
#undef public_47f8c7
#undef public_47f917
#undef public_47f933
#undef public_47f964
#undef public_47f969
#undef public_47f993
#undef public_47f9b1
#undef public_47f9dd
#undef public_47fa12
#undef public_47fab2
#undef public_47fad1
#undef public_47fad6
#undef public_47fb04
#undef public_47fb36
