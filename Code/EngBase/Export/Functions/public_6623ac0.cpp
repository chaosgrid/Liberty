#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619a50);
CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6623ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6624cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6625250);
CLANG_FORWARD_PROC_SYMBOL(public_6625290);
CLANG_FORWARD_PROC_SYMBOL(public_66254b0);

#define public_6623adc _public_6623adc
#define public_6623aef _public_6623aef
#define public_6623af2 _public_6623af2
#define public_6623af6 _public_6623af6
#define public_6623b57 _public_6623b57
#define public_6623b6f _public_6623b6f
#define public_6623b79 _public_6623b79
#define public_6623b7d _public_6623b7d
#define public_6623b8b _public_6623b8b
#define public_6623bc6 _public_6623bc6
#define public_6623bd5 _public_6623bd5
#define public_6623bf6 _public_6623bf6
#define public_6623c17 _public_6623c17
#define public_6623c25 _public_6623c25
#define public_6623c44 _public_6623c44
#define public_6623c50 _public_6623c50
#define public_6623c6c _public_6623c6c
#define public_6623c87 _public_6623c87
#define public_6623c90 _public_6623c90
#define public_6623cb3 _public_6623cb3

PROC_DECLARE(0x6623ac0, internal_6623ac0, public_6623ac0);
extern "C" NAKED register_t __cdecl internal_6623ac0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6623af6
        public_6623adc : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setl al
        test al, al
        je public_6623aef
        mov ebp, dword ptr ss : [ebp]
        jmp public_6623af2
        public_6623aef : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6623af2 : nop
        cmp ebp, edx
        jne public_6623adc
        public_6623af6 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6623c6c
        push 0
        push esi
        mov ecx, edi
        call public_6625250
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_66254b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6623b57
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6623b57
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jl public_6623b57
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6623b7d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6623b7d
        public_6623b57 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6623b6f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6623b79
        public_6623b6f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6623b79
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6623b79 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6623b7d : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6623c50
        public_6623b8b : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6623c50
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6623bf6
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6623bc6
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6623c44
        public_6623bc6 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6623bd5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_661a0c0
        public_6623bd5 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6619a50
        jmp public_6623c44
        public_6623bf6 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6623c17
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6623c44
        public_6623c17 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6623c25
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6619a50
        public_6623c25 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_661a0c0
        public_6623c44 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6623b8b
        public_6623c50 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6623c6c : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_6623c87
        cmp esi, dword ptr ds : [ecx]
        je public_6623c90
        lea ecx, ss:[esp+0x10]
        call public_6625290
        mov edx, dword ptr ss : [esp+0x10]
        public_6623c87 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jge public_6623cb3
        public_6623c90 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6624cd0
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
        public_6623cb3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6623ac0)
    }
}

#undef public_6623adc
#undef public_6623aef
#undef public_6623af2
#undef public_6623af6
#undef public_6623b57
#undef public_6623b6f
#undef public_6623b79
#undef public_6623b7d
#undef public_6623b8b
#undef public_6623bc6
#undef public_6623bd5
#undef public_6623bf6
#undef public_6623c17
#undef public_6623c25
#undef public_6623c44
#undef public_6623c50
#undef public_6623c6c
#undef public_6623c87
#undef public_6623c90
#undef public_6623cb3
