#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527500);
CLANG_FORWARD_PROC_SYMBOL(public_527850);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_527569 _public_527569
#define public_52757d _public_52757d
#define public_527583 _public_527583
#define public_527591 _public_527591
#define public_5275d2 _public_5275d2
#define public_5275eb _public_5275eb
#define public_5275fe _public_5275fe
#define public_527609 _public_527609
#define public_52760c _public_52760c
#define public_527611 _public_527611
#define public_52763a _public_52763a
#define public_527653 _public_527653
#define public_527666 _public_527666
#define public_527670 _public_527670
#define public_527693 _public_527693
#define public_5276ab _public_5276ab
#define public_5276be _public_5276be
#define public_5276cb _public_5276cb
#define public_5276cd _public_5276cd
#define public_5276d3 _public_5276d3
#define public_5276fc _public_5276fc
#define public_52770f _public_52770f
#define public_52771a _public_52771a
#define public_52771d _public_52771d
#define public_52771f _public_52771f
#define public_527722 _public_527722
#define public_52772e _public_52772e

PROC_DECLARE(0x527500, internal_527500, public_527500);
extern "C" NAKED register_t __cdecl internal_527500()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x64
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x60], 0
        mov byte ptr ds : [ebx+0x61], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_527850
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_527569
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_527569
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_527569
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_527583
        mov dword ptr ds : [eax+8], ebx
        jmp public_527583
        public_527569 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_52757d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_527583
        public_52757d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_527583
        mov dword ptr ds : [eax], ebx
        public_527583 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_52772e
        public_527591 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_52772e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_527670
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x60], 0
        jne public_5275d2
        mov byte ptr ds : [ecx+0x60], 1
        mov byte ptr ds : [edx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_527722
        public_5275d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_527611
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_5275eb
        mov dword ptr ds : [edx+4], eax
        public_5275eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5275fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_52760c
        public_5275fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_527609
        mov dword ptr ds : [edx], ecx
        jmp public_52760c
        public_527609 : nop
        mov dword ptr ds : [edx+8], ecx
        public_52760c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_527611 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_52763a
        mov dword ptr ds : [edi+4], ecx
        public_52763a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_527653
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_52771f
        public_527653 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_527666
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_52771f
        public_527666 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_52771f
        public_527670 : nop
        cmp byte ptr ds : [edx+0x60], 0
        jne public_527693
        mov byte ptr ds : [ecx+0x60], 1
        mov byte ptr ds : [edx+0x60], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x60], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_527722
        public_527693 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_5276d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_5276ab
        mov dword ptr ds : [edx+4], eax
        public_5276ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5276be
        mov dword ptr ds : [edx+4], ecx
        jmp public_5276cd
        public_5276be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_5276cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_5276cd
        public_5276cb : nop
        mov dword ptr ds : [edx], ecx
        public_5276cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_5276d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_5276fc
        mov dword ptr ds : [edi+4], ecx
        public_5276fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_52770f
        mov dword ptr ds : [edi+4], edx
        jmp public_52771d
        public_52770f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_52771a
        mov dword ptr ds : [edi], edx
        jmp public_52771d
        public_52771a : nop
        mov dword ptr ds : [edi+8], edx
        public_52771d : nop
        mov dword ptr ds : [edx], ecx
        public_52771f : nop
        mov dword ptr ds : [ecx+4], edx
        public_527722 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_527591
        public_52772e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x60], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x527500)
    }
}

#undef public_527569
#undef public_52757d
#undef public_527583
#undef public_527591
#undef public_5275d2
#undef public_5275eb
#undef public_5275fe
#undef public_527609
#undef public_52760c
#undef public_527611
#undef public_52763a
#undef public_527653
#undef public_527666
#undef public_527670
#undef public_527693
#undef public_5276ab
#undef public_5276be
#undef public_5276cb
#undef public_5276cd
#undef public_5276d3
#undef public_5276fc
#undef public_52770f
#undef public_52771a
#undef public_52771d
#undef public_52771f
#undef public_527722
#undef public_52772e
