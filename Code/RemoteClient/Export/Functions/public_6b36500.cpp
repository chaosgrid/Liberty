#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b44240);

#define public_6b36558 _public_6b36558
#define public_6b36565 _public_6b36565
#define public_6b36591 _public_6b36591

PROC_DECLARE(0x6b36500, internal_6b36500, public_6b36500);
extern "C" NAKED register_t __cdecl internal_6b36500()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x32
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36591
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0x108]
        push edi
        mov edi, dword ptr ds : [ecx]
        add edx, 0x28
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x114]
        cmp ecx, 1
        jne public_6b36558
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [edx+0x34], cl
        jmp public_6b36565
        public_6b36558 : nop
        cmp ecx, 2
        jne public_6b36565
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x34], 0
        public_6b36565 : nop
        lea edx, ds:[eax+4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6b44240
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        pop edi
        public_6b36591 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b36500)
    }
}

#undef public_6b36558
#undef public_6b36565
#undef public_6b36591
