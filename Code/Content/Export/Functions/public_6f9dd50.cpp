#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9da60);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dad0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dd50);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fc20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3b80);

#define public_6f9dd80 _public_6f9dd80
#define public_6f9dd90 _public_6f9dd90
#define public_6f9ddb4 _public_6f9ddb4
#define public_6f9ddc6 _public_6f9ddc6
#define public_6f9ddd3 _public_6f9ddd3
#define public_6f9de11 _public_6f9de11
#define public_6f9de20 _public_6f9de20
#define public_6f9de31 _public_6f9de31
#define public_6f9de5b _public_6f9de5b
#define public_6f9de64 _public_6f9de64
#define public_6f9de76 _public_6f9de76
#define public_6f9de86 _public_6f9de86
#define public_6f9dea0 _public_6f9dea0
#define public_6f9deb2 _public_6f9deb2
#define public_6f9dec4 _public_6f9dec4
#define public_6f9ded3 _public_6f9ded3

PROC_DECLARE(0x6f9dd50, internal_6f9dd50, public_6f9dd50);
extern "C" NAKED register_t __cdecl internal_6f9dd50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+5]
        test al, al
        mov dword ptr ss : [esp+8], ebx
        jne public_6f9ded3
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        lea ebp, ds:[ebx+0x1C]
        push eax
        mov ecx, ebp
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x20]
        je public_6f9ddc6
        public_6f9dd80 : nop
        mov esi, dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [eax+0x34]
        cmp esi, ecx
        lea edi, ds:[eax+0x34]
        je public_6f9ddb4
        lea ebx, ds:[eax+0x18]
        public_6f9dd90 : nop
        push esi
        mov ecx, ebp
        call public_6f9fc20
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0xC
        push ebx
        push ecx
        mov ecx, eax
        call public_6eb5770
        mov eax, dword ptr ds : [edi]
        add esi, 4
        cmp esi, eax
        jne public_6f9dd90
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f9ddb4 : nop
        lea ecx, ss:[esp+0x10]
        call public_6fa3b80
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x20]
        jne public_6f9dd80
        public_6f9ddc6 : nop
        mov edx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0xC]
        lea esi, ds:[ebx+8]
        mov dword ptr ds : [esi], ecx
        public_6f9ddd3 : nop
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x20]
        test ecx, ecx
        je public_6f9de11
        mov eax, dword ptr ds : [eax+0x24]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f9de11
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        jmp public_6f9ddd3
        public_6f9de11 : nop
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f9de76
        mov edi, edi
        public_6f9de20 : nop
        mov cl, byte ptr ds : [eax+0x3C]
        test cl, cl
        jne public_6f9de64
        mov esi, dword ptr ds : [eax+0x30]
        lea edi, ds:[eax+0x34]
        cmp esi, dword ptr ds : [edi]
        je public_6f9de64
        public_6f9de31 : nop
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_6f7b0f0
        mov edx, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [edx+0x3C]
        test cl, cl
        lea eax, ds:[edx+0x10]
        je public_6f9de5b
        mov byte ptr ds : [eax+0x2C], 0
        add eax, 0x1C
        push eax
        mov ecx, ebx
        call public_6f9da60
        public_6f9de5b : nop
        mov eax, dword ptr ds : [edi]
        add esi, 4
        cmp esi, eax
        jne public_6f9de31
        public_6f9de64 : nop
        lea ecx, ss:[esp+0x10]
        call public_6fa3b80
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x20]
        jne public_6f9de20
        public_6f9de76 : nop
        mov eax, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        pop edi
        pop esi
        mov dword ptr ss : [esp+8], edx
        pop ebp
        je public_6f9dec4
        public_6f9de86 : nop
        mov al, byte ptr ds : [edx+0x3C]
        test al, al
        je public_6f9deb2
        mov ecx, dword ptr ds : [edx+0x30]
        test ecx, ecx
        je public_6f9dea0
        mov eax, dword ptr ds : [edx+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6f9deb2
        public_6f9dea0 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        add edx, 0x18
        push edx
        lea ecx, ds:[ebx+0xC]
        push 1
        push eax
        call public_6f937c0
        public_6f9deb2 : nop
        lea ecx, ss:[esp+4]
        call public_6fa3b80
        mov edx, dword ptr ss : [esp+4]
        cmp edx, dword ptr ds : [ebx+0x20]
        jne public_6f9de86
        public_6f9dec4 : nop
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        mov ecx, ebx
        call public_6f9dad0
        mov byte ptr ds : [ebx+5], 1
        public_6f9ded3 : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f9dd50)
    }
}

#undef public_6f9dd80
#undef public_6f9dd90
#undef public_6f9ddb4
#undef public_6f9ddc6
#undef public_6f9ddd3
#undef public_6f9de11
#undef public_6f9de20
#undef public_6f9de31
#undef public_6f9de5b
#undef public_6f9de64
#undef public_6f9de76
#undef public_6f9de86
#undef public_6f9dea0
#undef public_6f9deb2
#undef public_6f9dec4
#undef public_6f9ded3
