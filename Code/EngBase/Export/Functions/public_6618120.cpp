#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6618120);
CLANG_FORWARD_PROC_SYMBOL(public_661a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_661a6c0);

#define public_661813c _public_661813c
#define public_661814f _public_661814f
#define public_6618152 _public_6618152
#define public_6618156 _public_6618156
#define public_661818f _public_661818f
#define public_661819c _public_661819c
#define public_66181a6 _public_66181a6
#define public_66181ca _public_66181ca

PROC_DECLARE(0x6618120, internal_6618120, public_6618120);
extern "C" NAKED register_t __cdecl internal_6618120()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov esi, dword ptr ds : [edx+4]
        mov edi, edx
        cmp esi, ecx
        mov al, 1
        je public_6618156
        public_661813c : nop
        mov eax, dword ptr ss : [ebp]
        mov edi, esi
        cmp eax, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        je public_661814f
        mov esi, dword ptr ds : [esi]
        jmp public_6618152
        public_661814f : nop
        mov esi, dword ptr ds : [esi+8]
        public_6618152 : nop
        cmp esi, ecx
        jne public_661813c
        public_6618156 : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_66181a6
        mov ecx, edi
        test al, al
        mov dword ptr ss : [esp+0x1C], ecx
        je public_661819c
        cmp edi, dword ptr ds : [edx]
        jne public_661818f
        push ebp
        push edi
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        mov ecx, ebx
        call public_661a2b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dl, 1
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_661818f : nop
        lea ecx, ss:[esp+0x1C]
        call public_661a6c0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_661819c : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [ebp]
        cmp edx, eax
        jge public_66181ca
        public_66181a6 : nop
        push ebp
        push edi
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        mov ecx, ebx
        call public_661a2b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dl, 1
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_66181ca : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        xor dl, dl
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6618120)
    }
}

#undef public_661813c
#undef public_661814f
#undef public_6618152
#undef public_6618156
#undef public_661818f
#undef public_661819c
#undef public_66181a6
#undef public_66181ca
