#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3ded0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f170);

#define public_6d3def0 _public_6d3def0
#define public_6d3df05 _public_6d3df05
#define public_6d3df08 _public_6d3df08
#define public_6d3df0c _public_6d3df0c
#define public_6d3df45 _public_6d3df45
#define public_6d3df52 _public_6d3df52
#define public_6d3df5c _public_6d3df5c
#define public_6d3df80 _public_6d3df80

PROC_DECLARE(0x6d3ded0, internal_6d3ded0, public_6d3ded0);
extern "C" NAKED register_t __cdecl internal_6d3ded0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_6d3df0c
        lea esp, ss:[esp]
        public_6d3def0 : nop
        mov ax, word ptr ss : [ebp]
        cmp ax, word ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_6d3df05
        mov esi, dword ptr ds : [esi]
        jmp public_6d3df08
        public_6d3df05 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d3df08 : nop
        cmp esi, ecx
        jne public_6d3def0
        public_6d3df0c : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6d3df5c
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6d3df52
        cmp edi, dword ptr ds : [edx]
        jne public_6d3df45
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6d3eea0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d3df45 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6d3f170
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6d3df52 : nop
        mov dx, word ptr ds : [ecx+0xC]
        cmp dx, word ptr ss : [ebp]
        jae public_6d3df80
        public_6d3df5c : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6d3eea0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d3df80 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d3ded0)
    }
}

#undef public_6d3def0
#undef public_6d3df05
#undef public_6d3df08
#undef public_6d3df0c
#undef public_6d3df45
#undef public_6d3df52
#undef public_6d3df5c
#undef public_6d3df80
