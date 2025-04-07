#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab100);
CLANG_FORWARD_PROC_SYMBOL(public_6eab1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac930);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb00c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb03f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);

#define public_6eab23e _public_6eab23e
#define public_6eab242 _public_6eab242
#define public_6eab267 _public_6eab267
#define public_6eab280 _public_6eab280
#define public_6eab2a0 _public_6eab2a0
#define public_6eab2b0 _public_6eab2b0
#define public_6eab2be _public_6eab2be
#define public_6eab320 _public_6eab320
#define public_6eab324 _public_6eab324
#define public_6eab349 _public_6eab349

PROC_DECLARE(0x6eab1c0, internal_6eab1c0, public_6eab1c0);
extern "C" NAKED register_t __cdecl internal_6eab1c0()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x50]
        push esi
        dec eax
        push edi
        mov dword ptr ss : [ebp+0x50], eax
        jne public_6eab349
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [ebp+0x80]
        test ecx, ecx
        lea esi, ss:[ebp+0x70]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        je public_6eab23e
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_6eab23e
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_6eab23e
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6eafac0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6eab267
        public_6eab23e : nop
        cmp eax, edi
        je public_6eab267
        public_6eab242 : nop
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6eac930
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eaf5e0
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6eab242
        public_6eab267 : nop
        mov edi, dword ptr ss : [ebp+0xA8]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xAC]
        mov esi, ebx
        cmp esi, ebx
        je public_6eab2a0
        lea ebx, ds:[ebx]
        public_6eab280 : nop
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edi+4], eax
        call public_6f20230
        add esi, 0x14
        add edi, 0x14
        cmp esi, ebx
        jne public_6eab280
        public_6eab2a0 : nop
        mov ebx, dword ptr ss : [ebp+0xAC]
        cmp edi, ebx
        mov esi, edi
        je public_6eab2be
        lea esp, ss:[esp]
        public_6eab2b0 : nop
        mov ecx, esi
        call public_6eab100
        add esi, 0x14
        cmp esi, ebx
        jne public_6eab2b0
        public_6eab2be : nop
        mov dword ptr ss : [ebp+0xAC], edi
        mov edi, dword ptr ss : [ebp+0x88]
        mov ecx, dword ptr ss : [ebp+0x94]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x84]
        mov dword ptr ss : [esp+0x10], eax
        pop ebx
        je public_6eab320
        mov ecx, eax
        cmp eax, ecx
        jne public_6eab320
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_6eb00c0
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
        call public_6f1df30
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        public_6eab320 : nop
        cmp eax, edi
        je public_6eab349
        public_6eab324 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6eb03f0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6eafb60
        cmp dword ptr ss : [esp+0xC], edi
        jne public_6eab324
        public_6eab349 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eab1c0)
    }
}

#undef public_6eab23e
#undef public_6eab242
#undef public_6eab267
#undef public_6eab280
#undef public_6eab2a0
#undef public_6eab2b0
#undef public_6eab2be
#undef public_6eab320
#undef public_6eab324
#undef public_6eab349
