#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6626f90);
CLANG_FORWARD_PROC_SYMBOL(public_6627820);
CLANG_FORWARD_PROC_SYMBOL(public_6627aa0);

#define public_6626fac _public_6626fac
#define public_6626fbf _public_6626fbf
#define public_6626fc2 _public_6626fc2
#define public_6626fc6 _public_6626fc6
#define public_6626fff _public_6626fff
#define public_662700c _public_662700c
#define public_6627016 _public_6627016
#define public_662703a _public_662703a

PROC_DECLARE(0x6626f90, internal_6626f90, public_6626f90);
extern "C" NAKED register_t __cdecl internal_6626f90()
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
        je public_6626fc6
        public_6626fac : nop
        mov eax, dword ptr ss : [ebp]
        mov edi, esi
        cmp eax, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        je public_6626fbf
        mov esi, dword ptr ds : [esi]
        jmp public_6626fc2
        public_6626fbf : nop
        mov esi, dword ptr ds : [esi+8]
        public_6626fc2 : nop
        cmp esi, ecx
        jne public_6626fac
        public_6626fc6 : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6627016
        mov ecx, edi
        test al, al
        mov dword ptr ss : [esp+0x1C], ecx
        je public_662700c
        cmp edi, dword ptr ds : [edx]
        jne public_6626fff
        push ebp
        push edi
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        mov ecx, ebx
        call public_6627820
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
        public_6626fff : nop
        lea ecx, ss:[esp+0x1C]
        call public_6627aa0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_662700c : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [ebp]
        cmp edx, eax
        jge public_662703a
        public_6627016 : nop
        push ebp
        push edi
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        mov ecx, ebx
        call public_6627820
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
        public_662703a : nop
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
        UNREACHABLE_TRAP(0x6626f90)
    }
}

#undef public_6626fac
#undef public_6626fbf
#undef public_6626fc2
#undef public_6626fc6
#undef public_6626fff
#undef public_662700c
#undef public_6627016
#undef public_662703a
