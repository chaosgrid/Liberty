#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5030);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6d582f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d58320 _public_6d58320
#define public_6d58347 _public_6d58347
#define public_6d58373 _public_6d58373
#define public_6d58377 _public_6d58377
#define public_6d58397 _public_6d58397

PROC_DECLARE(0x6d582f0, internal_6d582f0, public_6d582f0);
extern "C" NAKED register_t __cdecl internal_6d582f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6d58373
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d58373
        cmp ebx, eax
        jne public_6d58373
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d58347
        lea esp, ss:[esp]
        public_6d58320 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce5030
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6ce36f0
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d58320
        public_6d58347 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6d58373 : nop
        cmp ecx, ebx
        je public_6d58397
        public_6d58377 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ce5750
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ce4bd0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6d58377
        public_6d58397 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d582f0)
    }
}

#undef public_6d58320
#undef public_6d58347
#undef public_6d58373
#undef public_6d58377
#undef public_6d58397
