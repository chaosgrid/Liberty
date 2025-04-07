#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613360);
CLANG_FORWARD_PROC_SYMBOL(public_6614040);
CLANG_FORWARD_PROC_SYMBOL(public_6614340);

#define public_661337c _public_661337c
#define public_661338f _public_661338f
#define public_6613392 _public_6613392
#define public_6613396 _public_6613396
#define public_66133cf _public_66133cf
#define public_66133dc _public_66133dc
#define public_66133e6 _public_66133e6
#define public_661340a _public_661340a

PROC_DECLARE(0x6613360, internal_6613360, public_6613360);
extern "C" NAKED register_t __cdecl internal_6613360()
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
        je public_6613396
        public_661337c : nop
        mov eax, dword ptr ss : [ebp]
        mov edi, esi
        cmp eax, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        je public_661338f
        mov esi, dword ptr ds : [esi]
        jmp public_6613392
        public_661338f : nop
        mov esi, dword ptr ds : [esi+8]
        public_6613392 : nop
        cmp esi, ecx
        jne public_661337c
        public_6613396 : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_66133e6
        mov ecx, edi
        test al, al
        mov dword ptr ss : [esp+0x1C], ecx
        je public_66133dc
        cmp edi, dword ptr ds : [edx]
        jne public_66133cf
        push ebp
        push edi
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        mov ecx, ebx
        call public_6614040
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
        public_66133cf : nop
        lea ecx, ss:[esp+0x1C]
        call public_6614340
        mov ecx, dword ptr ss : [esp+0x1C]
        public_66133dc : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [ebp]
        cmp edx, eax
        jae public_661340a
        public_66133e6 : nop
        push ebp
        push edi
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        mov ecx, ebx
        call public_6614040
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
        public_661340a : nop
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
        UNREACHABLE_TRAP(0x6613360)
    }
}

#undef public_661337c
#undef public_661338f
#undef public_6613392
#undef public_6613396
#undef public_66133cf
#undef public_66133dc
#undef public_66133e6
#undef public_661340a
