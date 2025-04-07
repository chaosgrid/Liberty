#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d965a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96c10);
CLANG_FORWARD_PROC_SYMBOL(public_6d96e90);
CLANG_FORWARD_PROC_SYMBOL(public_6d96eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2060);
CLANG_FORWARD_PROC_SYMBOL(public_6da3470);

#define public_6d965c0 _public_6d965c0
#define public_6d965d3 _public_6d965d3
#define public_6d965d6 _public_6d965d6
#define public_6d965da _public_6d965da
#define public_6d96639 _public_6d96639
#define public_6d96651 _public_6d96651
#define public_6d9665b _public_6d9665b
#define public_6d9665f _public_6d9665f
#define public_6d96670 _public_6d96670
#define public_6d966ab _public_6d966ab
#define public_6d966ba _public_6d966ba
#define public_6d966db _public_6d966db
#define public_6d966fc _public_6d966fc
#define public_6d9670a _public_6d9670a
#define public_6d96729 _public_6d96729
#define public_6d96735 _public_6d96735
#define public_6d96751 _public_6d96751
#define public_6d9676c _public_6d9676c
#define public_6d96773 _public_6d96773
#define public_6d96796 _public_6d96796

PROC_DECLARE(0x6d965a0, internal_6d965a0, public_6d965a0);
extern "C" NAKED register_t __cdecl internal_6d965a0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6d965da
        lea esp, ss:[esp]
        public_6d965c0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6d965d3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6d965d6
        public_6d965d3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6d965d6 : nop
        cmp ebp, edx
        jne public_6d965c0
        public_6d965da : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6d96751
        push 0
        push esi
        mov ecx, edi
        call public_6d96e90
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d85500
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d96639
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6d96639
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6d96639
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d9665f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d9665f
        public_6d96639 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6d96651
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d9665b
        public_6d96651 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d9665b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d9665b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d9665f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d96735
        lea ecx, ds:[ecx]
        public_6d96670 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6d96735
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d966db
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d966ab
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d96729
        public_6d966ab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d966ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6da3470
        public_6d966ba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6da2060
        jmp public_6d96729
        public_6d966db : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d966fc
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d96729
        public_6d966fc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d9670a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6da2060
        public_6d9670a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6da3470
        public_6d96729 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d96670
        public_6d96735 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d96751 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6d9676c
        cmp esi, dword ptr ds : [ecx]
        je public_6d96773
        lea ecx, ss:[esp+0x10]
        call public_6d96eb0
        mov edx, dword ptr ss : [esp+0x10]
        public_6d9676c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6d96796
        public_6d96773 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d96c10
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6d96796 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d965a0)
    }
}

#undef public_6d965c0
#undef public_6d965d3
#undef public_6d965d6
#undef public_6d965da
#undef public_6d96639
#undef public_6d96651
#undef public_6d9665b
#undef public_6d9665f
#undef public_6d96670
#undef public_6d966ab
#undef public_6d966ba
#undef public_6d966db
#undef public_6d966fc
#undef public_6d9670a
#undef public_6d96729
#undef public_6d96735
#undef public_6d96751
#undef public_6d9676c
#undef public_6d96773
#undef public_6d96796
