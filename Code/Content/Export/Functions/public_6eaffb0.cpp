#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1340);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb0029 _public_6eb0029
#define public_6eb0047 _public_6eb0047
#define public_6eb0070 _public_6eb0070
#define public_6eb007e _public_6eb007e
#define public_6eb0093 _public_6eb0093
#define public_6eb00a2 _public_6eb00a2
#define public_6eb00ae _public_6eb00ae

PROC_DECLARE(0x6eaffb0, internal_6eaffb0, public_6eaffb0);
extern "C" NAKED register_t __cdecl internal_6eaffb0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0xA5]
        test al, al
        jne public_6eb0047
        mov al, byte ptr ss : [ebp+0xA4]
        push edi
        push 0xA8
        mov byte ptr ss : [esp+0x14], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0xA4], dl
        mov byte ptr ds : [edi+0xA5], 0
        call public_6eb1960
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6eb0029
        mov ebx, edi
        public_6eb0029 : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6eb1340
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6eb1340
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6eb0047 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6eb00ae
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xA5]
        test bl, bl
        jne public_6eb007e
        public_6eb0070 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xA5]
        test bl, bl
        je public_6eb0070
        public_6eb007e : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0xA5]
        test dl, dl
        jne public_6eb00a2
        public_6eb0093 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0xA5]
        test dl, dl
        je public_6eb0093
        public_6eb00a2 : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6eb00ae : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6eaffb0)
    }
}

#undef public_6eb0029
#undef public_6eb0047
#undef public_6eb0070
#undef public_6eb007e
#undef public_6eb0093
#undef public_6eb00a2
#undef public_6eb00ae
