#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433400);
CLANG_FORWARD_PROC_SYMBOL(public_433d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_433469 _public_433469
#define public_43347d _public_43347d
#define public_433483 _public_433483
#define public_433491 _public_433491
#define public_4334d2 _public_4334d2
#define public_4334eb _public_4334eb
#define public_4334fe _public_4334fe
#define public_433509 _public_433509
#define public_43350c _public_43350c
#define public_433511 _public_433511
#define public_43353a _public_43353a
#define public_433553 _public_433553
#define public_433566 _public_433566
#define public_433570 _public_433570
#define public_433593 _public_433593
#define public_4335ab _public_4335ab
#define public_4335be _public_4335be
#define public_4335cb _public_4335cb
#define public_4335cd _public_4335cd
#define public_4335d3 _public_4335d3
#define public_4335fc _public_4335fc
#define public_43360f _public_43360f
#define public_43361a _public_43361a
#define public_43361d _public_43361d
#define public_43361f _public_43361f
#define public_433622 _public_433622
#define public_43362e _public_43362e

PROC_DECLARE(0x433400, internal_433400, public_433400);
extern "C" NAKED register_t __cdecl internal_433400()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_433d50
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_433469
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_433469
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_433469
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_433483
        mov dword ptr ds : [eax+8], ebx
        jmp public_433483
        public_433469 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_43347d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_433483
        public_43347d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_433483
        mov dword ptr ds : [eax], ebx
        public_433483 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_43362e
        public_433491 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_43362e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_433570
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_4334d2
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_433622
        public_4334d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_433511
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4334eb
        mov dword ptr ds : [edx+4], eax
        public_4334eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4334fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_43350c
        public_4334fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_433509
        mov dword ptr ds : [edx], ecx
        jmp public_43350c
        public_433509 : nop
        mov dword ptr ds : [edx+8], ecx
        public_43350c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_433511 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_43353a
        mov dword ptr ds : [edi+4], ecx
        public_43353a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_433553
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43361f
        public_433553 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_433566
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43361f
        public_433566 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43361f
        public_433570 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_433593
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_433622
        public_433593 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4335d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4335ab
        mov dword ptr ds : [edx+4], eax
        public_4335ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4335be
        mov dword ptr ds : [edx+4], ecx
        jmp public_4335cd
        public_4335be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4335cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_4335cd
        public_4335cb : nop
        mov dword ptr ds : [edx], ecx
        public_4335cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4335d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4335fc
        mov dword ptr ds : [edi+4], ecx
        public_4335fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_43360f
        mov dword ptr ds : [edi+4], edx
        jmp public_43361d
        public_43360f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_43361a
        mov dword ptr ds : [edi], edx
        jmp public_43361d
        public_43361a : nop
        mov dword ptr ds : [edi+8], edx
        public_43361d : nop
        mov dword ptr ds : [edx], ecx
        public_43361f : nop
        mov dword ptr ds : [ecx+4], edx
        public_433622 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_433491
        public_43362e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x433400)
    }
}

#undef public_433469
#undef public_43347d
#undef public_433483
#undef public_433491
#undef public_4334d2
#undef public_4334eb
#undef public_4334fe
#undef public_433509
#undef public_43350c
#undef public_433511
#undef public_43353a
#undef public_433553
#undef public_433566
#undef public_433570
#undef public_433593
#undef public_4335ab
#undef public_4335be
#undef public_4335cb
#undef public_4335cd
#undef public_4335d3
#undef public_4335fc
#undef public_43360f
#undef public_43361a
#undef public_43361d
#undef public_43361f
#undef public_433622
#undef public_43362e
