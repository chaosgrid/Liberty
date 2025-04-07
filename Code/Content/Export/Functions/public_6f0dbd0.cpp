#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f0dc00 _public_6f0dc00
#define public_6f0dc19 _public_6f0dc19
#define public_6f0dc50 _public_6f0dc50
#define public_6f0dc72 _public_6f0dc72
#define public_6f0dc92 _public_6f0dc92
#define public_6f0dca7 _public_6f0dca7
#define public_6f0dcbf _public_6f0dcbf
#define public_6f0dcc8 _public_6f0dcc8
#define public_6f0dcd7 _public_6f0dcd7
#define public_6f0dce0 _public_6f0dce0
#define public_6f0dcf5 _public_6f0dcf5

PROC_DECLARE(0x6f0dbd0, internal_6f0dbd0, public_6f0dbd0);
extern "C" NAKED register_t __cdecl internal_6f0dbd0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov ebp, ecx
        push edi
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebp
        lea ebx, ss:[ebp+8]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f0dc19
        lea esp, ss:[esp]
        public_6f0dc00 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f0dc00
        public_6f0dc19 : nop
        mov ecx, esi
        call public_6ecfec0
        cmp esi, ebx
        je public_6f0dc92
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov edi, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        mov ebp, dword ptr ds : [ebx+4]
        je public_6f0dc72
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_6f0dc50 : nop
        cmp ecx, ebp
        je public_6f0dc72
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        cmp eax, edi
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], ecx
        jne public_6f0dc50
        public_6f0dc72 : nop
        push edi
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x24]
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6ed0230
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f0dc92 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f0dcbf
        public_6f0dca7 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f0dca7
        public_6f0dcbf : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f0dcd7
        public_6f0dcc8 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+4]
        jne public_6f0dcc8
        public_6f0dcd7 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f0dcf5
        public_6f0dce0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebx
        call public_6ecfe80
        cmp esi, edi
        jne public_6f0dce0
        public_6f0dcf5 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f0dbd0)
    }
}

#undef public_6f0dc00
#undef public_6f0dc19
#undef public_6f0dc50
#undef public_6f0dc72
#undef public_6f0dc92
#undef public_6f0dca7
#undef public_6f0dcbf
#undef public_6f0dcc8
#undef public_6f0dcd7
#undef public_6f0dce0
#undef public_6f0dcf5
