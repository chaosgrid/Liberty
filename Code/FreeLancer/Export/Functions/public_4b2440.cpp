#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4af120);
CLANG_FORWARD_PROC_SYMBOL(public_4b2440);

#define public_4b2494 _public_4b2494
#define public_4b249a _public_4b249a
#define public_4b24c1 _public_4b24c1
#define public_4b24fc _public_4b24fc
#define public_4b250e _public_4b250e

PROC_DECLARE(0x4b2440, internal_4b2440, public_4b2440);
extern "C" NAKED register_t __cdecl internal_4b2440()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ds : [public_5c6de0]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor ebx, ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, 0xA
        mov esi, offset public_679bc0
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        push 3
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        shr eax, 0x14
        cmp eax, 0x11
        mov dword ptr ss : [esp+0x14], eax
        jb public_4b2494
        mov byte ptr ss : [ebp+0x97C], 1
        jmp public_4b249a
        public_4b2494 : nop
        mov byte ptr ss : [ebp+0x97C], bl
        public_4b249a : nop
        lea eax, ss:[ebp+0x954]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, 0xFFFFF6BC
        sub eax, ebp
        mov dword ptr ss : [ebp+0x950], ebx
        lea edi, ss:[ebp+0x944]
        lea esi, ss:[ebp+0x8D4]
        mov dword ptr ss : [esp+0x18], eax
        public_4b24c1 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi-4]
        push edx
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov ecx, dword ptr ds : [esi-8]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebp
        call public_4af120
        test al, al
        mov byte ptr ds : [edi], al
        je public_4b250e
        mov al, byte ptr ss : [ebp+0x97C]
        test al, al
        jne public_4b24fc
        cmp dword ptr ds : [esi], 0x10
        je public_4b24fc
        mov byte ptr ds : [edi], 0
        jmp public_4b250e
        public_4b24fc : nop
        mov eax, dword ptr ss : [ebp+0x950]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        inc dword ptr ss : [ebp+0x950]
        public_4b250e : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        add ebx, 4
        add esi, 0xC
        inc edi
        add edx, edi
        cmp edx, 0xA
        mov dword ptr ss : [esp+0x10], ebx
        jl public_4b24c1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x4b2440)
    }
}

#undef public_4b2494
#undef public_4b249a
#undef public_4b24c1
#undef public_4b24fc
#undef public_4b250e
