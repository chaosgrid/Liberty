#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3290);
CLANG_FORWARD_PROC_SYMBOL(public_6ce50d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce54b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce32c0 _public_6ce32c0
#define public_6ce32e8 _public_6ce32e8
#define public_6ce330d _public_6ce330d
#define public_6ce3311 _public_6ce3311
#define public_6ce3331 _public_6ce3331

PROC_DECLARE(0x6ce3290, internal_6ce3290, public_6ce3290);
extern "C" NAKED register_t __cdecl internal_6ce3290()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce330d
        mov ecx, eax
        cmp eax, ecx
        jne public_6ce330d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ce32e8
        nop 
        lea esp, ss:[esp]
        public_6ce32c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce54b0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6ce5d50
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ce32c0
        public_6ce32e8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6ce3331
        public_6ce330d : nop
        cmp eax, edi
        je public_6ce3331
        public_6ce3311 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d3f120
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ce50d0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ce3311
        public_6ce3331 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ce3290)
    }
}

#undef public_6ce32c0
#undef public_6ce32e8
#undef public_6ce330d
#undef public_6ce3311
#undef public_6ce3331
