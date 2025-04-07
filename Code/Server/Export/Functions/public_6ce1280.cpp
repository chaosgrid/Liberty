#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce37a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce42f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4350);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6ce12ef _public_6ce12ef
#define public_6ce12f3 _public_6ce12f3
#define public_6ce1318 _public_6ce1318
#define public_6ce132a _public_6ce132a
#define public_6ce1372 _public_6ce1372
#define public_6ce1376 _public_6ce1376
#define public_6ce139a _public_6ce139a
#define public_6ce13a8 _public_6ce13a8

PROC_DECLARE(0x6ce1280, internal_6ce1280, public_6ce1280);
extern "C" NAKED register_t __cdecl internal_6ce1280()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+4]
        push esi
        lea ebp, ds:[eax+8]
        lea esi, ds:[ebx+8]
        cmp esi, ebp
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx+4], ecx
        je public_6ce132a
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce12ef
        mov ecx, eax
        cmp eax, ecx
        jne public_6ce12ef
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_6ce42f0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        jmp public_6ce1318
        public_6ce12ef : nop
        cmp eax, edi
        je public_6ce1318
        public_6ce12f3 : nop
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6ce4350
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6ce3ea0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6ce12f3
        public_6ce1318 : nop
        mov al, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_6ce37a0
        mov eax, dword ptr ss : [esp+0x28]
        public_6ce132a : nop
        lea ebp, ds:[eax+0x1C]
        lea esi, ds:[ebx+0x1C]
        cmp esi, ebp
        je public_6ce13a8
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], eax
        je public_6ce1372
        mov ecx, eax
        cmp eax, ecx
        jne public_6ce1372
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_6ce42f0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6ce139a
        public_6ce1372 : nop
        cmp eax, edi
        je public_6ce139a
        public_6ce1376 : nop
        lea ecx, ss:[esp+0x28]
        mov ebx, eax
        call public_6ce5700
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6ce3ea0
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        jne public_6ce1376
        mov ebx, dword ptr ss : [esp+0x14]
        public_6ce139a : nop
        mov dl, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], dl
        call public_6ce37a0
        public_6ce13a8 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ce1280)
    }
}

#undef public_6ce12ef
#undef public_6ce12f3
#undef public_6ce1318
#undef public_6ce132a
#undef public_6ce1372
#undef public_6ce1376
#undef public_6ce139a
#undef public_6ce13a8
