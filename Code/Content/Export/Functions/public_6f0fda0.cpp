#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0fda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f48050);
CLANG_FORWARD_PROC_SYMBOL(public_6f480c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f0fdf0 _public_6f0fdf0
#define public_6f0fe00 _public_6f0fe00
#define public_6f0fe0d _public_6f0fe0d
#define public_6f0fe21 _public_6f0fe21
#define public_6f0fe40 _public_6f0fe40
#define public_6f0fe4d _public_6f0fe4d
#define public_6f0fe55 _public_6f0fe55
#define public_6f0fe5f _public_6f0fe5f
#define public_6f0fe66 _public_6f0fe66
#define public_6f0fe76 _public_6f0fe76
#define public_6f0fe93 _public_6f0fe93

PROC_DECLARE(0x6f0fda0, internal_6f0fda0, public_6f0fda0);
extern "C" NAKED register_t __cdecl internal_6f0fda0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_6f49b00
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0xC], ebx
        je public_6f0fe93
        push edi
        mov ecx, ebx
        call public_6f480c0
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        xor edx, edx
        div ecx
        mov ecx, ebx
        push eax
        call public_6f48050
        mov eax, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f0fe76
        push ebp
        lea esp, ss:[esp]
        public_6f0fdf0 : nop
        mov ebp, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebx, ss:[ebp+8]
        je public_6f0fe21
        nop 
        public_6f0fe00 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f0fe0d
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6f0fe0d : nop
        mov eax, dword ptr ds : [ebx]
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6f0fe00
        public_6f0fe21 : nop
        mov ecx, ebp
        call public_6f1d110
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f0fe4d
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f0fe66
        lea ecx, ds:[ecx]
        public_6f0fe40 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f0fe40
        jmp public_6f0fe66
        public_6f0fe4d : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f0fe5f
        public_6f0fe55 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6f0fe55
        public_6f0fe5f : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6f0fe66
        mov edi, eax
        public_6f0fe66 : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [edx+0x40]
        jne public_6f0fdf0
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, edx
        pop ebp
        public_6f0fe76 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push 2
        push ecx
        mov ecx, ebx
        call public_6f48a20
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6f0fe93 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f0fda0)
    }
}

#undef public_6f0fdf0
#undef public_6f0fe00
#undef public_6f0fe0d
#undef public_6f0fe21
#undef public_6f0fe40
#undef public_6f0fe4d
#undef public_6f0fe55
#undef public_6f0fe5f
#undef public_6f0fe66
#undef public_6f0fe76
#undef public_6f0fe93
