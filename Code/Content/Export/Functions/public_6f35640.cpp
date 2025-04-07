#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35640);
CLANG_FORWARD_PROC_SYMBOL(public_6f58080);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f35660 _public_6f35660
#define public_6f35680 _public_6f35680
#define public_6f3568b _public_6f3568b
#define public_6f3568d _public_6f3568d
#define public_6f356c1 _public_6f356c1
#define public_6f356cc _public_6f356cc
#define public_6f356ce _public_6f356ce
#define public_6f356d2 _public_6f356d2
#define public_6f356da _public_6f356da
#define public_6f356f0 _public_6f356f0
#define public_6f356f8 _public_6f356f8
#define public_6f35705 _public_6f35705
#define public_6f35709 _public_6f35709
#define public_6f35718 _public_6f35718
#define public_6f35720 _public_6f35720
#define public_6f35734 _public_6f35734

PROC_DECLARE(0x6f35640, internal_6f35640, public_6f35640);
extern "C" NAKED register_t __cdecl internal_6f35640()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        mov dword ptr ss : [esp+0x10], esi
        je public_6f35734
        mov ebx, dword ptr ss : [esp+0x1C]
        nop 
        public_6f35660 : nop
        push esi
        call public_6f58080
        add esp, 4
        test eax, eax
        jne public_6f356da
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        cmp eax, ecx
        je public_6f3568b
        mov edx, dword ptr ds : [esi]
        lea esp, ss:[esp]
        public_6f35680 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f3568d
        add eax, 4
        cmp eax, ecx
        jne public_6f35680
        public_6f3568b : nop
        mov eax, ecx
        public_6f3568d : nop
        cmp eax, ecx
        jne public_6f35720
        lea eax, ds:[ebx+4]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_6fd0dc8
        call public_6f7b0f0
        mov eax, dword ptr ds : [public_6fd0dcc]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_6f356d2
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [ecx+0x18]
        cmp eax, ecx
        je public_6f356cc
        mov edx, dword ptr ds : [esi]
        public_6f356c1 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f356ce
        add eax, 4
        cmp eax, ecx
        jne public_6f356c1
        public_6f356cc : nop
        mov eax, ecx
        public_6f356ce : nop
        cmp eax, ecx
        jne public_6f35720
        public_6f356d2 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 
        public_6f356da : nop
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax+8]
        cmp esi, edi
        je public_6f356d2
        mov ebp, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea ebx, ds:[ebx]
        public_6f356f0 : nop
        mov eax, ebp
        cmp eax, ecx
        je public_6f35709
        mov edx, dword ptr ds : [esi]
        public_6f356f8 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f35705
        add eax, 4
        cmp eax, ecx
        jne public_6f356f8
        jmp public_6f35709
        public_6f35705 : nop
        cmp eax, ecx
        jne public_6f35718
        public_6f35709 : nop
        add esi, 4
        cmp esi, edi
        jne public_6f356f0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 
        public_6f35718 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        public_6f35720 : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f35660
        mov al, 1
        public_6f35734 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f35640)
    }
}

#undef public_6f35660
#undef public_6f35680
#undef public_6f3568b
#undef public_6f3568d
#undef public_6f356c1
#undef public_6f356cc
#undef public_6f356ce
#undef public_6f356d2
#undef public_6f356da
#undef public_6f356f0
#undef public_6f356f8
#undef public_6f35705
#undef public_6f35709
#undef public_6f35718
#undef public_6f35720
#undef public_6f35734
