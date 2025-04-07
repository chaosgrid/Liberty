#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eb60);
CLANG_FORWARD_PROC_SYMBOL(public_661eb80);
CLANG_FORWARD_PROC_SYMBOL(public_6622860);

#define public_662163f _public_662163f
#define public_6621647 _public_6621647
#define public_6621687 _public_6621687
#define public_6621698 _public_6621698
#define public_66216c2 _public_66216c2
#define public_66216c4 _public_66216c4
#define public_66216de _public_66216de
#define public_66216ef _public_66216ef

PROC_DECLARE(0x6621630, internal_6621630, public_6621630);
extern "C" NAKED register_t __cdecl internal_6621630()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, 0xFFFFFFFF
        push esi
        je public_662163f
        test ebx, ebx
        jne public_6621647
        public_662163f : nop
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_6621647 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6621698
        mov ecx, dword ptr ds : [ebx+0x20]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        je public_6621698
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        call public_6622860
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6621687
        pop esi
        or eax, eax
        pop ebx
        ret 0xC
        public_6621687 : nop
        mov eax, dword ptr ds : [esi+4]
        push esi
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        mov eax, esi
        pop esi
        pop ebx
        ret 0xC
        public_6621698 : nop
        mov esi, dword ptr ss : [esp+0xC]
        push ebp
        push edi
        push ebx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x38]
        push 0xEC
        call public_661eb60
        add esp, 4
        test eax, eax
        je public_66216c2
        push ebx
        mov ecx, eax
        call public_661eb80
        mov edi, eax
        jmp public_66216c4
        public_66216c2 : nop
        xor edi, edi
        public_66216c4 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        push edx
        push edi
        push esi
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [ecx+0x70]
        mov ebp, dword ptr ds : [esi+0x58]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_66216ef
        public_66216de : nop
        mov eax, dword ptr ds : [esi+0x38]
        push ebx
        push edi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_66216de
        public_66216ef : nop
        mov eax, edi
        push edi
        inc eax
        neg eax
        sbb eax, eax
        and eax, edi
        mov eax, dword ptr ds : [eax+4]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        pop edi
        pop ebp
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6621630)
    }
}

#undef public_662163f
#undef public_6621647
#undef public_6621687
#undef public_6621698
#undef public_66216c2
#undef public_66216c4
#undef public_66216de
#undef public_66216ef
