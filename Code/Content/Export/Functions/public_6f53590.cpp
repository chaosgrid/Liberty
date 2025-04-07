#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f53590);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f55180);
CLANG_FORWARD_PROC_SYMBOL(public_6f551a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f558f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f535b0 _public_6f535b0
#define public_6f535c3 _public_6f535c3
#define public_6f535c6 _public_6f535c6
#define public_6f535ca _public_6f535ca
#define public_6f53629 _public_6f53629
#define public_6f53641 _public_6f53641
#define public_6f5364b _public_6f5364b
#define public_6f5364f _public_6f5364f
#define public_6f53660 _public_6f53660
#define public_6f5369b _public_6f5369b
#define public_6f536aa _public_6f536aa
#define public_6f536cb _public_6f536cb
#define public_6f536ec _public_6f536ec
#define public_6f536fa _public_6f536fa
#define public_6f53719 _public_6f53719
#define public_6f53725 _public_6f53725
#define public_6f53741 _public_6f53741
#define public_6f5375c _public_6f5375c
#define public_6f53763 _public_6f53763
#define public_6f53786 _public_6f53786

PROC_DECLARE(0x6f53590, internal_6f53590, public_6f53590);
extern "C" NAKED register_t __cdecl internal_6f53590()
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
        je public_6f535ca
        lea esp, ss:[esp]
        public_6f535b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f535c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f535c6
        public_6f535c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f535c6 : nop
        cmp ebp, edx
        jne public_6f535b0
        public_6f535ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f53741
        push 0
        push esi
        mov ecx, edi
        call public_6f55180
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f558f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f53629
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f53629
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f53629
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5364f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f5364f
        public_6f53629 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f53641
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5364b
        public_6f53641 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f5364b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f5364b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f5364f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f53725
        lea ecx, ds:[ecx]
        public_6f53660 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x30]
        test cl, cl
        jne public_6f53725
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f536cb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6f5369b
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f53719
        public_6f5369b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f536aa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f536aa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x30], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f53719
        public_6f536cb : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6f536ec
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f53719
        public_6f536ec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f536fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f536fa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f53719 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f53660
        public_6f53725 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f53741 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f5375c
        cmp esi, dword ptr ds : [ecx]
        je public_6f53763
        lea ecx, ss:[esp+0x10]
        call public_6f551a0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f5375c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f53786
        public_6f53763 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f54d80
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
        public_6f53786 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f53590)
    }
}

#undef public_6f535b0
#undef public_6f535c3
#undef public_6f535c6
#undef public_6f535ca
#undef public_6f53629
#undef public_6f53641
#undef public_6f5364b
#undef public_6f5364f
#undef public_6f53660
#undef public_6f5369b
#undef public_6f536aa
#undef public_6f536cb
#undef public_6f536ec
#undef public_6f536fa
#undef public_6f53719
#undef public_6f53725
#undef public_6f53741
#undef public_6f5375c
#undef public_6f53763
#undef public_6f53786
