#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_578920);
CLANG_FORWARD_PROC_SYMBOL(public_578950);

#define public_576126 _public_576126
#define public_576142 _public_576142
#define public_576157 _public_576157
#define public_576164 _public_576164
#define public_576170 _public_576170
#define public_57617a _public_57617a
#define public_576181 _public_576181
#define public_576185 _public_576185

PROC_DECLARE(0x5760f0, internal_5760f0, public_5760f0);
extern "C" NAKED register_t __cdecl internal_5760f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [public_67c3a4]
        test esi, esi
        push edi
        mov ebx, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_576185
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_578950
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov edi, eax
        call public_578920
        cmp eax, edi
        je public_576185
        public_576126 : nop
        cmp dword ptr ds : [eax+0x10], ebx
        jne public_576142
        mov ecx, dword ptr ds : [public_67c3a4]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_576181
        public_576142 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_576164
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_576181
        public_576157 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_576157
        jmp public_576181
        public_576164 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_57617a
        lea esp, ss:[esp]
        public_576170 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_576170
        public_57617a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_576181
        mov eax, ecx
        public_576181 : nop
        cmp eax, edi
        jne public_576126
        public_576185 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5760f0)
    }
}

#undef public_576126
#undef public_576142
#undef public_576157
#undef public_576164
#undef public_576170
#undef public_57617a
#undef public_576181
#undef public_576185
