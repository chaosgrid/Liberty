#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614040);
CLANG_FORWARD_PROC_SYMBOL(public_6614420);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66140ad _public_66140ad
#define public_66140c1 _public_66140c1
#define public_66140c7 _public_66140c7
#define public_66140d5 _public_66140d5
#define public_6614116 _public_6614116
#define public_661412f _public_661412f
#define public_6614142 _public_6614142
#define public_661414d _public_661414d
#define public_6614150 _public_6614150
#define public_6614155 _public_6614155
#define public_661417e _public_661417e
#define public_6614197 _public_6614197
#define public_66141aa _public_66141aa
#define public_66141b4 _public_66141b4
#define public_66141d7 _public_66141d7
#define public_66141ef _public_66141ef
#define public_6614202 _public_6614202
#define public_661420f _public_661420f
#define public_6614211 _public_6614211
#define public_6614217 _public_6614217
#define public_6614240 _public_6614240
#define public_6614253 _public_6614253
#define public_661425e _public_661425e
#define public_6614261 _public_6614261
#define public_6614263 _public_6614263
#define public_6614266 _public_6614266
#define public_6614272 _public_6614272

PROC_DECLARE(0x6614040, internal_6614040, public_6614040);
extern "C" NAKED register_t __cdecl internal_6614040()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x34
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x30], 0
        mov byte ptr ds : [ebx+0x31], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_6614420
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_66140ad
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_66140ad
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_66140ad
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_66140c7
        mov dword ptr ds : [eax+8], ebx
        jmp public_66140c7
        public_66140ad : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_66140c1
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_66140c7
        public_66140c1 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_66140c7
        mov dword ptr ds : [eax], ebx
        public_66140c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6614272
        public_66140d5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6614272
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_66141b4
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x30], 0
        jne public_6614116
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6614266
        public_6614116 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6614155
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_661412f
        mov dword ptr ds : [edx+4], eax
        public_661412f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6614142
        mov dword ptr ds : [edx+4], ecx
        jmp public_6614150
        public_6614142 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_661414d
        mov dword ptr ds : [edx], ecx
        jmp public_6614150
        public_661414d : nop
        mov dword ptr ds : [edx+8], ecx
        public_6614150 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6614155 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_661417e
        mov dword ptr ds : [edi+4], ecx
        public_661417e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6614197
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6614263
        public_6614197 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_66141aa
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6614263
        public_66141aa : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6614263
        public_66141b4 : nop
        cmp byte ptr ds : [edx+0x30], 0
        jne public_66141d7
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6614266
        public_66141d7 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6614217
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_66141ef
        mov dword ptr ds : [edx+4], eax
        public_66141ef : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6614202
        mov dword ptr ds : [edx+4], ecx
        jmp public_6614211
        public_6614202 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_661420f
        mov dword ptr ds : [edx+8], ecx
        jmp public_6614211
        public_661420f : nop
        mov dword ptr ds : [edx], ecx
        public_6614211 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6614217 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6614240
        mov dword ptr ds : [edi+4], ecx
        public_6614240 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6614253
        mov dword ptr ds : [edi+4], edx
        jmp public_6614261
        public_6614253 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_661425e
        mov dword ptr ds : [edi], edx
        jmp public_6614261
        public_661425e : nop
        mov dword ptr ds : [edi+8], edx
        public_6614261 : nop
        mov dword ptr ds : [edx], ecx
        public_6614263 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6614266 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66140d5
        public_6614272 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6614040)
    }
}

#undef public_66140ad
#undef public_66140c1
#undef public_66140c7
#undef public_66140d5
#undef public_6614116
#undef public_661412f
#undef public_6614142
#undef public_661414d
#undef public_6614150
#undef public_6614155
#undef public_661417e
#undef public_6614197
#undef public_66141aa
#undef public_66141b4
#undef public_66141d7
#undef public_66141ef
#undef public_6614202
#undef public_661420f
#undef public_6614211
#undef public_6614217
#undef public_6614240
#undef public_6614253
#undef public_661425e
#undef public_6614261
#undef public_6614263
#undef public_6614266
#undef public_6614272
