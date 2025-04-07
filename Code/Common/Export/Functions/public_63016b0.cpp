#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba730);
CLANG_FORWARD_PROC_SYMBOL(public_62bb390);
CLANG_FORWARD_PROC_SYMBOL(public_63016b0);
CLANG_FORWARD_PROC_SYMBOL(public_6301fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63024b0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_63016d0 _public_63016d0
#define public_63016e3 _public_63016e3
#define public_63016e6 _public_63016e6
#define public_63016ea _public_63016ea
#define public_6301749 _public_6301749
#define public_6301761 _public_6301761
#define public_630176b _public_630176b
#define public_630176f _public_630176f
#define public_6301780 _public_6301780
#define public_63017bb _public_63017bb
#define public_63017ca _public_63017ca
#define public_63017eb _public_63017eb
#define public_630180c _public_630180c
#define public_630181a _public_630181a
#define public_6301839 _public_6301839
#define public_6301845 _public_6301845
#define public_6301861 _public_6301861
#define public_630187c _public_630187c
#define public_6301883 _public_6301883
#define public_63018a6 _public_63018a6

PROC_DECLARE(0x63016b0, internal_63016b0, public_63016b0);
extern "C" NAKED register_t __cdecl internal_63016b0()
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
        je public_63016ea
        lea esp, ss:[esp]
        public_63016d0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_63016e3
        mov ebp, dword ptr ss : [ebp]
        jmp public_63016e6
        public_63016e3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_63016e6 : nop
        cmp ebp, edx
        jne public_63016d0
        public_63016ea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6301861
        push 0
        push esi
        mov ecx, edi
        call public_62ba730
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62bb390
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6301749
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6301749
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6301749
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_630176f
        mov dword ptr ds : [eax+8], ebx
        jmp public_630176f
        public_6301749 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6301761
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_630176b
        public_6301761 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_630176b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_630176b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_630176f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6301845
        lea ecx, ds:[ecx]
        public_6301780 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x50]
        test cl, cl
        jne public_6301845
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_63017eb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_63017bb
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6301839
        public_63017bb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_63017ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_63017ca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x50], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6301839
        public_63017eb : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_630180c
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x50], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6301839
        public_630180c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_630181a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_630181a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6301839 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6301780
        public_6301845 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x50], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6301861 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_630187c
        cmp esi, dword ptr ds : [ecx]
        je public_6301883
        lea ecx, ss:[esp+0x10]
        call public_63024b0
        mov edx, dword ptr ss : [esp+0x10]
        public_630187c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_63018a6
        public_6301883 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6301fb0
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
        public_63018a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63016b0)
    }
}

#undef public_63016d0
#undef public_63016e3
#undef public_63016e6
#undef public_63016ea
#undef public_6301749
#undef public_6301761
#undef public_630176b
#undef public_630176f
#undef public_6301780
#undef public_63017bb
#undef public_63017ca
#undef public_63017eb
#undef public_630180c
#undef public_630181a
#undef public_6301839
#undef public_6301845
#undef public_6301861
#undef public_630187c
#undef public_6301883
#undef public_63018a6
