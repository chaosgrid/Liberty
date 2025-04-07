#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a500);
CLANG_FORWARD_PROC_SYMBOL(public_661a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_661aa60);
CLANG_FORWARD_PROC_SYMBOL(public_661aa80);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661ab48 _public_661ab48
#define public_661ab65 _public_661ab65
#define public_661ab8c _public_661ab8c
#define public_661ab97 _public_661ab97
#define public_661aba9 _public_661aba9
#define public_661abb5 _public_661abb5
#define public_661abbc _public_661abbc
#define public_661abc4 _public_661abc4

PROC_DECLARE(0x661aa80, internal_661aa80, public_661aa80);
extern "C" NAKED register_t __cdecl internal_661aa80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        cmp esi, ebp
        je public_661abc4
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        add esi, 4
        push 0x30
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi-4], eax
        mov cl, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+5]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [esi+0xC], al
        call public_66281dc
        mov cl, 1
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x2C], cl
        mov byte ptr ds : [eax+0x2D], 0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x2D], cl
        mov ecx, dword ptr ds : [esi+8]
        push 0x30
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        call public_66281dc
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x2C], 0
        mov byte ptr ds : [eax+0x2D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], edx
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x2D]
        test cl, cl
        jne public_661ab65
        mov cl, byte ptr ss : [ebp+0x2C]
        push ecx
        push eax
        mov ecx, esi
        call public_661a5a0
        mov ebx, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_661aa60
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_661ab48
        mov dword ptr ss : [esp+0x14], ebx
        public_661ab48 : nop
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push ecx
        mov ecx, esi
        call public_661a500
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        mov ecx, esi
        call public_661a500
        mov dword ptr ds : [ebx+8], eax
        public_661ab65 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        pop edi
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_661abbc
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        jne public_661ab97
        public_661ab8c : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_661ab8c
        public_661ab97 : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        jne public_661abb5
        public_661aba9 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        je public_661aba9
        public_661abb5 : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        ret 
        public_661abbc : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_661abc4 : nop
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x661aa80)
    }
}

#undef public_661ab48
#undef public_661ab65
#undef public_661ab8c
#undef public_661ab97
#undef public_661aba9
#undef public_661abb5
#undef public_661abbc
#undef public_661abc4
