#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b190);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34b60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c29db9 _public_6c29db9
#define public_6c29ddf _public_6c29ddf
#define public_6c29e07 _public_6c29e07
#define public_6c29e1e _public_6c29e1e
#define public_6c29e45 _public_6c29e45
#define public_6c29e54 _public_6c29e54
#define public_6c29e9b _public_6c29e9b
#define public_6c29ea0 _public_6c29ea0
#define public_6c29ec0 _public_6c29ec0

PROC_DECLARE(0x6c29d90, internal_6c29d90, public_6c29d90);
extern "C" NAKED register_t __cdecl internal_6c29d90()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        push edi
        mov dword ptr ds : [esi+4], ecx
        je public_6c29db9
        mov edi, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_6c29db9
        inc dword ptr ds : [esi+8]
        jmp public_6c29ddf
        public_6c29db9 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, dword ptr ds : [esi+0x10]
        je public_6c29ec0
        mov dword ptr ds : [esi+0x24], edi
        mov byte ptr ds : [esi+0x28], 1
        public_6c29ddf : nop
        cmp edi, dword ptr ds : [esi+0x10]
        je public_6c29ec0
        mov ecx, dword ptr ds : [edi+0x10]
        call public_6c2b3c0
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        je public_6c29e07
        mov ecx, edi
        call public_6c2b190
        push edi
        call public_6c34ea0
        add esp, 4
        public_6c29e07 : nop
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_6c29e1e
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x1C]
        jne public_6c29e1e
        mov byte ptr ds : [esi+0x28], 0
        public_6c29e1e : nop
        lea edx, ss:[esp+0x1C]
        add esi, 0xC
        push edx
        mov ecx, esi
        call public_6c34b60
        mov ebp, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov edi, eax
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], edi
        je public_6c29e54
        public_6c29e45 : nop
        lea ecx, ss:[esp+0x18]
        call public_6c304a0
        cmp dword ptr ss : [esp+0x18], ebp
        jne public_6c29e45
        public_6c29e54 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_6c29e9b
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_6c29e9b
        cmp ebp, ecx
        jne public_6c29e9b
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6c2a2e0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        add esp, 8
        ret 0xC
        public_6c29e9b : nop
        cmp edi, ebp
        je public_6c29ec0
        nop 
        public_6c29ea0 : nop
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call public_6c304a0
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6c21b10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebp
        jne public_6c29ea0
        public_6c29ec0 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6c29d90)
    }
}

#undef public_6c29db9
#undef public_6c29ddf
#undef public_6c29e07
#undef public_6c29e1e
#undef public_6c29e45
#undef public_6c29e54
#undef public_6c29e9b
#undef public_6c29ea0
#undef public_6c29ec0
