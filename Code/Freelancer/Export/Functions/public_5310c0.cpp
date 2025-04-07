#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5310c0);
CLANG_FORWARD_PROC_SYMBOL(public_5316e0);
CLANG_FORWARD_PROC_SYMBOL(public_531980);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);
CLANG_FORWARD_PROC_SYMBOL(public_5ae5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae680);

#define public_5310e0 _public_5310e0
#define public_5310f3 _public_5310f3
#define public_5310f6 _public_5310f6
#define public_5310fa _public_5310fa
#define public_531159 _public_531159
#define public_531171 _public_531171
#define public_53117b _public_53117b
#define public_53117f _public_53117f
#define public_531190 _public_531190
#define public_5311cb _public_5311cb
#define public_5311da _public_5311da
#define public_5311fb _public_5311fb
#define public_53121c _public_53121c
#define public_53122a _public_53122a
#define public_531249 _public_531249
#define public_531255 _public_531255
#define public_531271 _public_531271
#define public_53128c _public_53128c
#define public_531293 _public_531293
#define public_5312b6 _public_5312b6

PROC_DECLARE(0x5310c0, internal_5310c0, public_5310c0);
extern "C" NAKED register_t __cdecl internal_5310c0()
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
        je public_5310fa
        lea esp, ss:[esp]
        public_5310e0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_5310f3
        mov ebp, dword ptr ss : [ebp]
        jmp public_5310f6
        public_5310f3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_5310f6 : nop
        cmp ebp, edx
        jne public_5310e0
        public_5310fa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_531271
        push 0
        push esi
        mov ecx, edi
        call public_5ae5f0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_531980
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_531159
        cmp ebp, dword ptr ds : [edi+8]
        jne public_531159
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_531159
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_53117f
        mov dword ptr ds : [eax+8], ebx
        jmp public_53117f
        public_531159 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_531171
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_53117b
        public_531171 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_53117b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_53117b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_53117f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_531255
        lea ecx, ds:[ecx]
        public_531190 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x34]
        test cl, cl
        jne public_531255
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5311fb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_5311cb
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_531249
        public_5311cb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_5311da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_5311da : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_531249
        public_5311fb : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_53121c
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_531249
        public_53121c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_53122a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_53122a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_531249 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_531190
        public_531255 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_531271 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_53128c
        cmp esi, dword ptr ds : [ecx]
        je public_531293
        lea ecx, ss:[esp+0x10]
        call public_5ae680
        mov edx, dword ptr ss : [esp+0x10]
        public_53128c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_5312b6
        public_531293 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_5316e0
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
        public_5312b6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5310c0)
    }
}

#undef public_5310e0
#undef public_5310f3
#undef public_5310f6
#undef public_5310fa
#undef public_531159
#undef public_531171
#undef public_53117b
#undef public_53117f
#undef public_531190
#undef public_5311cb
#undef public_5311da
#undef public_5311fb
#undef public_53121c
#undef public_53122a
#undef public_531249
#undef public_531255
#undef public_531271
#undef public_53128c
#undef public_531293
#undef public_5312b6
