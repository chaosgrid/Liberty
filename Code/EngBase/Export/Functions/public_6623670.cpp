#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6623670);
CLANG_FORWARD_PROC_SYMBOL(public_6624f90);
CLANG_FORWARD_PROC_SYMBOL(public_6625290);

#define public_662368c _public_662368c
#define public_662369f _public_662369f
#define public_66236a2 _public_66236a2
#define public_66236a6 _public_66236a6
#define public_66236df _public_66236df
#define public_66236ec _public_66236ec
#define public_66236f6 _public_66236f6
#define public_662371a _public_662371a

PROC_DECLARE(0x6623670, internal_6623670, public_6623670);
extern "C" NAKED register_t __cdecl internal_6623670()
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
        je public_66236a6
        public_662368c : nop
        mov eax, dword ptr ss : [ebp]
        mov edi, esi
        cmp eax, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        je public_662369f
        mov esi, dword ptr ds : [esi]
        jmp public_66236a2
        public_662369f : nop
        mov esi, dword ptr ds : [esi+8]
        public_66236a2 : nop
        cmp esi, ecx
        jne public_662368c
        public_66236a6 : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_66236f6
        mov ecx, edi
        test al, al
        mov dword ptr ss : [esp+0x1C], ecx
        je public_66236ec
        cmp edi, dword ptr ds : [edx]
        jne public_66236df
        push ebp
        push edi
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        mov ecx, ebx
        call public_6624f90
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
        public_66236df : nop
        lea ecx, ss:[esp+0x1C]
        call public_6625290
        mov ecx, dword ptr ss : [esp+0x1C]
        public_66236ec : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [ebp]
        cmp edx, eax
        jae public_662371a
        public_66236f6 : nop
        push ebp
        push edi
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        mov ecx, ebx
        call public_6624f90
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
        public_662371a : nop
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
        UNREACHABLE_TRAP(0x6623670)
    }
}

#undef public_662368c
#undef public_662369f
#undef public_66236a2
#undef public_66236a6
#undef public_66236df
#undef public_66236ec
#undef public_66236f6
#undef public_662371a
