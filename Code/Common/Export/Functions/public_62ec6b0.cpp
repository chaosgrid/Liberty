#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62d3e70);
CLANG_FORWARD_PROC_SYMBOL(public_62ec6b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec870);

#define public_62ec6e8 _public_62ec6e8
#define public_62ec6ea _public_62ec6ea
#define public_62ec76b _public_62ec76b
#define public_62ec76d _public_62ec76d
#define public_62ec7a2 _public_62ec7a2
#define public_62ec7b4 _public_62ec7b4
#define public_62ec7f1 _public_62ec7f1
#define public_62ec810 _public_62ec810
#define public_62ec847 _public_62ec847
#define public_62ec849 _public_62ec849
#define public_62ec855 _public_62ec855
#define public_62ec85d _public_62ec85d

PROC_DECLARE(0x62ec6b0, internal_62ec6b0, public_62ec6b0);
extern "C" NAKED register_t __cdecl internal_62ec6b0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+8], ebx
        je public_62ec810
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_62ec810
        add ecx, 0xFFFFFFF8
        cmp ecx, ebx
        je public_62ec810
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_62ec6e8
        lea ecx, ds:[eax-8]
        jmp public_62ec6ea
        public_62ec6e8 : nop
        xor ecx, ecx
        public_62ec6ea : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0xB0]
        cmp dword ptr ss : [esp+8], ebx
        je public_62ec810
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        pop edi
        je public_62ec7b4
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x38]
        test al, al
        jne public_62ec7b4
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_62ec870
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [esi+0xC1], bl
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_62ec76b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62ec76d
        public_62ec76b : nop
        xor eax, eax
        public_62ec76d : nop
        mov ecx, eax
        call public_62ac230
        cmp eax, ebx
        je public_62ec85d
        mov ecx, eax
        call public_62d3e70
        cmp dword ptr ds : [eax], 1
        jne public_62ec7a2
        cmp dword ptr ds : [eax+4], ebx
        jne public_62ec7a2
        mov eax, 1
        mov byte ptr ds : [esi+0xC6], bl
        mov byte ptr ds : [esi+0xC1], al
        pop esi
        pop ebx
        pop ecx
        ret 
        public_62ec7a2 : nop
        xor eax, eax
        mov byte ptr ds : [esi+0xC6], bl
        mov byte ptr ds : [esi+0xC1], al
        pop esi
        pop ebx
        pop ecx
        ret 
        public_62ec7b4 : nop
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, ebx
        je public_62ec810
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x38]
        test al, al
        je public_62ec810
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62ec7f1
        add eax, 0xFFFFFFF8
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 5
        call dword ptr ds : [eax+0x6C]
        push ebx
        mov ecx, esi
        call public_62ec870
        mov byte ptr ds : [esi+0xC6], bl
        pop esi
        pop ebx
        pop ecx
        ret 
        public_62ec7f1 : nop
        xor eax, eax
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 5
        call dword ptr ds : [eax+0x6C]
        push ebx
        mov ecx, esi
        call public_62ec870
        mov byte ptr ds : [esi+0xC6], bl
        pop esi
        pop ebx
        pop ecx
        ret 
        public_62ec810 : nop
        cmp byte ptr ds : [esi+0xC6], bl
        jne public_62ec855
        cmp byte ptr ds : [esi+0xC5], bl
        jne public_62ec855
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_62ec855
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ec855
        cmp byte ptr ds : [esi+0xBE], bl
        jne public_62ec855
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62ec847
        add eax, 0xFFFFFFF8
        jmp public_62ec849
        public_62ec847 : nop
        xor eax, eax
        public_62ec849 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push ebx
        push 5
        call dword ptr ds : [edx+0x6C]
        public_62ec855 : nop
        push ebx
        mov ecx, esi
        call public_62ec870
        public_62ec85d : nop
        mov byte ptr ds : [esi+0xC6], bl
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ec6b0)
    }
}

#undef public_62ec6e8
#undef public_62ec6ea
#undef public_62ec76b
#undef public_62ec76d
#undef public_62ec7a2
#undef public_62ec7b4
#undef public_62ec7f1
#undef public_62ec810
#undef public_62ec847
#undef public_62ec849
#undef public_62ec855
#undef public_62ec85d
