#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d23700 _public_6d23700
#define public_6d23702 _public_6d23702
#define public_6d2370a _public_6d2370a
#define public_6d2370f _public_6d2370f
#define public_6d23741 _public_6d23741
#define public_6d23743 _public_6d23743
#define public_6d23749 _public_6d23749

PROC_DECLARE(0x6d236b0, internal_6d236b0, public_6d236b0);
extern "C" NAKED register_t __cdecl internal_6d236b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d2370f
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+0x1008]
        shl eax, 5
        lea ebx, ds:[edx+eax+0xC]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d23700
        add eax, 0xFFFFFFFC
        push 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x1008], eax
        call public_6d1f540
        jmp public_6d23702
        public_6d23700 : nop
        mov eax, ecx
        public_6d23702 : nop
        test eax, eax
        je public_6d2370a
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        public_6d2370a : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx], edx
        public_6d2370f : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [esi+0x1008]
        mov ebx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d23741
        add eax, 0xFFFFFFFC
        push 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x1008], eax
        call public_6d1f540
        jmp public_6d23743
        public_6d23741 : nop
        mov eax, ecx
        public_6d23743 : nop
        test eax, eax
        je public_6d23749
        mov dword ptr ds : [eax], ebx
        public_6d23749 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d236b0)
    }
}

#undef public_6d23700
#undef public_6d23702
#undef public_6d2370a
#undef public_6d2370f
#undef public_6d23741
#undef public_6d23743
#undef public_6d23749
