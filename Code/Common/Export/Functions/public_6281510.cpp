#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6344210);
CLANG_FORWARD_PROC_SYMBOL(public_6344230);
CLANG_FORWARD_PROC_SYMBOL(public_6344d50);
CLANG_FORWARD_PROC_SYMBOL(public_6345eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6345f10);

#define public_6281565 _public_6281565
#define public_6281583 _public_6281583
#define public_62815c0 _public_62815c0
#define public_628160a _public_628160a
#define public_628161a _public_628161a

PROC_DECLARE(0x6281510, internal_6281510, public_6281510);
extern "C" NAKED register_t __cdecl internal_6281510()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_628161a
        mov edx, dword ptr ds : [ecx+0x78]
        mov al, byte ptr ss : [esp+0x28]
        and edx, 0x300
        cmp edx, 0x100
        sete bl
        test al, al
        je public_628160a
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        jne public_6281583
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        jne public_6281583
        cmp dword ptr ds : [ecx+0x1C], edi
        je public_6281565
        call public_6345eb0
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        public_6281565 : nop
        test bl, bl
        jne public_628161a
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        push 1
        call public_6344d50
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        public_6281583 : nop
        test bl, bl
        jne public_628161a
        cmp dword ptr ds : [ecx+0x1C], edi
        jne public_62815c0
        lea ecx, ss:[esp+0xC]
        call public_6344210
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x20], 1
        push ecx
        mov ecx, dword ptr ds : [edx+0x54]
        call public_6345f10
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [ecx+0x1C]
        push esi
        call public_6344230
        public_62815c0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+0x54]
        push 1
        call public_6344d50
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        cmp ecx, edi
        je public_628161a
        cmp dword ptr ds : [ecx+0x1C], edi
        je public_628161a
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        jne public_628161a
        mov edx, dword ptr ds : [ecx+0x78]
        and edx, 0x300
        cmp edx, 0x100
        jne public_628161a
        cmp dword ptr ds : [esi+8], edi
        jne public_628161a
        call public_6345eb0
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        public_628160a : nop
        test bl, bl
        je public_628161a
        push edi
        call public_6344d50
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        public_628161a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6281510)
    }
}

#undef public_6281565
#undef public_6281583
#undef public_62815c0
#undef public_628160a
#undef public_628161a
