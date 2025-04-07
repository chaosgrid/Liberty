#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b740);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bae0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bef0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3b770 _public_6b3b770
#define public_6b3b78f _public_6b3b78f
#define public_6b3b7bb _public_6b3b7bb
#define public_6b3b7c0 _public_6b3b7c0
#define public_6b3b7e0 _public_6b3b7e0

PROC_DECLARE(0x6b3b740, internal_6b3b740, public_6b3b740);
extern "C" NAKED register_t __cdecl internal_6b3b740()
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
        je public_6b3b7bb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6b3b7bb
        cmp ebx, eax
        jne public_6b3b7bb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6b3b78f
        lea esp, ss:[esp]
        public_6b3b770 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6b3beb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6b3b770
        public_6b3b78f : nop
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
        public_6b3b7bb : nop
        cmp ecx, ebx
        je public_6b3b7e0
        nop 
        public_6b3b7c0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6b3bef0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6b3bae0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6b3b7c0
        public_6b3b7e0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b3b740)
    }
}

#undef public_6b3b770
#undef public_6b3b78f
#undef public_6b3b7bb
#undef public_6b3b7c0
#undef public_6b3b7e0
