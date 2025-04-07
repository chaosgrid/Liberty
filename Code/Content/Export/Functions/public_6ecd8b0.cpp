#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c90);

#define public_6ecd8d3 _public_6ecd8d3
#define public_6ecd8dd _public_6ecd8dd
#define public_6ecd8e1 _public_6ecd8e1
#define public_6ecd8e5 _public_6ecd8e5
#define public_6ecd8e7 _public_6ecd8e7
#define public_6ecd900 _public_6ecd900
#define public_6ecd90b _public_6ecd90b
#define public_6ecd90e _public_6ecd90e
#define public_6ecd912 _public_6ecd912
#define public_6ecd936 _public_6ecd936
#define public_6ecd950 _public_6ecd950
#define public_6ecd95b _public_6ecd95b
#define public_6ecd95f _public_6ecd95f
#define public_6ecd967 _public_6ecd967
#define public_6ecd971 _public_6ecd971
#define public_6ecd981 _public_6ecd981

PROC_DECLARE(0x6ecd8b0, internal_6ecd8b0, public_6ecd8b0);
extern "C" NAKED register_t __cdecl internal_6ecd8b0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edx+4]
        add ecx, 0xEC
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push esi
        push edi
        je public_6ecd8e5
        mov esi, dword ptr ss : [ebp+0xC]
        public_6ecd8d3 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6ecd8dd
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ecd8e1
        public_6ecd8dd : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6ecd8e1 : nop
        cmp eax, ecx
        jne public_6ecd8d3
        public_6ecd8e5 : nop
        mov esi, edx
        public_6ecd8e7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [ecx+0xF4]
        cmp eax, edi
        je public_6ecd912
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6ecd900 : nop
        cmp ebx, dword ptr ds : [eax+0xC]
        jae public_6ecd90b
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_6ecd90e
        public_6ecd90b : nop
        mov eax, dword ptr ds : [eax+8]
        public_6ecd90e : nop
        cmp eax, edi
        jne public_6ecd900
        public_6ecd912 : nop
        cmp esi, edx
        je public_6ecd981
        lea eax, ds:[esi+0x10]
        push eax
        call public_6f156b0
        test eax, eax
        je public_6ecd936
        mov ecx, dword ptr ss : [ebp+0x10]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, eax
        call public_6f57c90
        public_6ecd936 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [ecx+0x15]
        test al, al
        jne public_6ecd95f
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6ecd95b
        lea esp, ss:[esp]
        public_6ecd950 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6ecd950
        public_6ecd95b : nop
        mov esi, ecx
        jmp public_6ecd8e7
        public_6ecd95f : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecd971
        public_6ecd967 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecd967
        public_6ecd971 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ecd8e7
        mov esi, eax
        jmp public_6ecd8e7
        public_6ecd981 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ecd8b0)
    }
}

#undef public_6ecd8d3
#undef public_6ecd8dd
#undef public_6ecd8e1
#undef public_6ecd8e5
#undef public_6ecd8e7
#undef public_6ecd900
#undef public_6ecd90b
#undef public_6ecd90e
#undef public_6ecd912
#undef public_6ecd936
#undef public_6ecd950
#undef public_6ecd95b
#undef public_6ecd95f
#undef public_6ecd967
#undef public_6ecd971
#undef public_6ecd981
